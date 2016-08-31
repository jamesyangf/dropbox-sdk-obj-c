///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///

#import "DBStoneValidators.h"

@implementation DBStoneValidators

+ (void (^)(NSString *))stringValidator:(NSNumber *)minLength
                              maxLength:(NSNumber *)maxLength
                                pattern:(NSString *)pattern {

  void (^validator)(NSString * _Nonnull) = ^(NSString * _Nonnull value) {
    NSUInteger length = [value length];

    if (minLength) {
      NSString *message =
          [NSString stringWithFormat:@"\"%@\" must be at least %@ characters", value, [minLength stringValue]];
      NSAssert(length >= [minLength intValue], message);
    }

    if (maxLength) {
      NSString *message =
          [NSString stringWithFormat:@"\"%@\" must be at most %@ characters", value, [maxLength stringValue]];
      NSAssert(length <= [maxLength intValue], message);
    }

    if (pattern && pattern.length != 0) {
      NSError *error;
      NSRegularExpression *re = [NSRegularExpression regularExpressionWithPattern:pattern options:0 error:&error];
      NSArray *matches = [re matchesInString:value options:0 range:NSMakeRange(0, [value length])];
      NSString *message = [NSString stringWithFormat:@"\"%@\" must match pattern \"%@\"", value, [re pattern]];
      NSAssert([matches count] > 0, message);
    }
  };

  return validator;
}

+ (void (^)(NSNumber *))numericValidator:(NSNumber *)minValue maxValue:(NSNumber *)maxValue {
  void (^validator)(NSNumber * _Nonnull) = ^(NSNumber * _Nonnull value) {
    if (minValue) {
      NSString *message = [NSString stringWithFormat:@"\"%@\" must be at least %@", value, [minValue stringValue]];
      NSAssert([value intValue] >= [minValue intValue], message);
    }

    if (maxValue) {
      NSString *message = [NSString stringWithFormat:@"\"%@\" must be at most %@", value, [maxValue stringValue]];
      NSAssert([value intValue] <= [maxValue intValue], message);
    }
  };

  return validator;
}

+ (void (^)(NSArray<id> *))arrayValidator:(NSNumber *)minItems
                                 maxItems:(NSNumber *)maxItems
                            itemValidator:(void (^)(id))itemValidator {
  void (^validator)(NSArray<id> * _Nonnull) = ^(NSArray<id> * _Nonnull value) {
    NSUInteger count = [value count];

    if (minItems) {
      NSString *message =
          [NSString stringWithFormat:@"\"%@\" must be at least %@ items", value, [minItems stringValue]];
      NSAssert(count >= [minItems intValue], message);
    }

    if (maxItems) {
      NSString *message = [NSString stringWithFormat:@"\"%@\" must be at most %@ items", value, [maxItems stringValue]];
      NSAssert(count <= [maxItems intValue], message);
    }

    if (itemValidator) {
      for (id item in value) {
        itemValidator(item);
      }
    }
  };

  return validator;
}

+ (void (^_Nonnull)(id))nullableValidator:(void (^_Nonnull)(id _Nonnull))internalValidator {
  void (^validator)(NSNumber * _Nonnull) = ^(NSNumber * _Nonnull value) {
    if (value) {
      internalValidator(value);
    }
  };

  return validator;
}

@end
