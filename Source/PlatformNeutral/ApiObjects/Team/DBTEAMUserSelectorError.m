///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBTEAMUserSelectorError.h"

#pragma mark - API Object

@implementation DBTEAMUserSelectorError

#pragma mark - Constructors

- (instancetype)initWithUserNotFound {
  self = [super init];
  if (self) {
    _tag = DBTEAMUserSelectorErrorUserNotFound;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isUserNotFound {
  return _tag == DBTEAMUserSelectorErrorUserNotFound;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBTEAMUserSelectorErrorUserNotFound:
    return @"DBTEAMUserSelectorErrorUserNotFound";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBTEAMUserSelectorErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBTEAMUserSelectorErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBTEAMUserSelectorErrorSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBTEAMUserSelectorErrorSerializer

+ (NSDictionary *)serialize:(DBTEAMUserSelectorError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isUserNotFound]) {
    jsonDict[@".tag"] = @"user_not_found";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
  }

  return jsonDict;
}

+ (DBTEAMUserSelectorError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"user_not_found"]) {
    return [[DBTEAMUserSelectorError alloc] initWithUserNotFound];
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
