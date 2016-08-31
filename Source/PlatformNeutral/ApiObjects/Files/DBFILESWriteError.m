///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBFILESWriteConflictError.h"
#import "DBFILESWriteError.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBFILESWriteError

@synthesize malformedPath = _malformedPath;
@synthesize conflict = _conflict;

#pragma mark - Constructors

- (instancetype)initWithMalformedPath:(NSString *)malformedPath {
  self = [super init];
  if (self) {
    _tag = DBFILESWriteErrorMalformedPath;
    _malformedPath = malformedPath;
  }
  return self;
}

- (instancetype)initWithConflict:(DBFILESWriteConflictError *)conflict {
  self = [super init];
  if (self) {
    _tag = DBFILESWriteErrorConflict;
    _conflict = conflict;
  }
  return self;
}

- (instancetype)initWithNoWritePermission {
  self = [super init];
  if (self) {
    _tag = DBFILESWriteErrorNoWritePermission;
  }
  return self;
}

- (instancetype)initWithInsufficientSpace {
  self = [super init];
  if (self) {
    _tag = DBFILESWriteErrorInsufficientSpace;
  }
  return self;
}

- (instancetype)initWithDisallowedName {
  self = [super init];
  if (self) {
    _tag = DBFILESWriteErrorDisallowedName;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBFILESWriteErrorOther;
  }
  return self;
}

#pragma mark - Instance field accessors

- (NSString *)malformedPath {
  if (![self isMalformedPath]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBFILESWriteErrorMalformedPath, but was %@.", [self tagName]];
  }
  return _malformedPath;
}

- (DBFILESWriteConflictError *)conflict {
  if (![self isConflict]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBFILESWriteErrorConflict, but was %@.", [self tagName]];
  }
  return _conflict;
}

#pragma mark - Tag state methods

- (BOOL)isMalformedPath {
  return _tag == DBFILESWriteErrorMalformedPath;
}

- (BOOL)isConflict {
  return _tag == DBFILESWriteErrorConflict;
}

- (BOOL)isNoWritePermission {
  return _tag == DBFILESWriteErrorNoWritePermission;
}

- (BOOL)isInsufficientSpace {
  return _tag == DBFILESWriteErrorInsufficientSpace;
}

- (BOOL)isDisallowedName {
  return _tag == DBFILESWriteErrorDisallowedName;
}

- (BOOL)isOther {
  return _tag == DBFILESWriteErrorOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBFILESWriteErrorMalformedPath:
    return @"DBFILESWriteErrorMalformedPath";
  case DBFILESWriteErrorConflict:
    return @"DBFILESWriteErrorConflict";
  case DBFILESWriteErrorNoWritePermission:
    return @"DBFILESWriteErrorNoWritePermission";
  case DBFILESWriteErrorInsufficientSpace:
    return @"DBFILESWriteErrorInsufficientSpace";
  case DBFILESWriteErrorDisallowedName:
    return @"DBFILESWriteErrorDisallowedName";
  case DBFILESWriteErrorOther:
    return @"DBFILESWriteErrorOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBFILESWriteErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBFILESWriteErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBFILESWriteErrorSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBFILESWriteErrorSerializer

+ (NSDictionary *)serialize:(DBFILESWriteError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isMalformedPath]) {
    if (valueObj.malformedPath) {
      jsonDict[@"malformed_path"] = valueObj.malformedPath;
    }
    jsonDict[@".tag"] = @"malformed_path";
  } else if ([valueObj isConflict]) {
    jsonDict = [[DBFILESWriteConflictErrorSerializer serialize:valueObj.conflict] mutableCopy];
    jsonDict[@".tag"] = @"conflict";
  } else if ([valueObj isNoWritePermission]) {
    jsonDict[@".tag"] = @"no_write_permission";
  } else if ([valueObj isInsufficientSpace]) {
    jsonDict[@".tag"] = @"insufficient_space";
  } else if ([valueObj isDisallowedName]) {
    jsonDict[@".tag"] = @"disallowed_name";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
  }

  return jsonDict;
}

+ (DBFILESWriteError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"malformed_path"]) {
    NSString *malformedPath = valueDict[@"malformed_path"] ? valueDict[@"malformed_path"] : nil;
    return [[DBFILESWriteError alloc] initWithMalformedPath:malformedPath];
  } else if ([tag isEqualToString:@"conflict"]) {
    DBFILESWriteConflictError *conflict = [DBFILESWriteConflictErrorSerializer deserialize:valueDict[@"conflict"]];
    return [[DBFILESWriteError alloc] initWithConflict:conflict];
  } else if ([tag isEqualToString:@"no_write_permission"]) {
    return [[DBFILESWriteError alloc] initWithNoWritePermission];
  } else if ([tag isEqualToString:@"insufficient_space"]) {
    return [[DBFILESWriteError alloc] initWithInsufficientSpace];
  } else if ([tag isEqualToString:@"disallowed_name"]) {
    return [[DBFILESWriteError alloc] initWithDisallowedName];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBFILESWriteError alloc] initWithOther];
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
