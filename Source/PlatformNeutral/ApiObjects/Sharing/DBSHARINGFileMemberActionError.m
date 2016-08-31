///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSHARINGFileMemberActionError.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBSHARINGFileMemberActionError

#pragma mark - Constructors

- (instancetype)initWithInvalidMember {
  self = [super init];
  if (self) {
    _tag = DBSHARINGFileMemberActionErrorInvalidMember;
  }
  return self;
}

- (instancetype)initWithNoPermission {
  self = [super init];
  if (self) {
    _tag = DBSHARINGFileMemberActionErrorNoPermission;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBSHARINGFileMemberActionErrorOther;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isInvalidMember {
  return _tag == DBSHARINGFileMemberActionErrorInvalidMember;
}

- (BOOL)isNoPermission {
  return _tag == DBSHARINGFileMemberActionErrorNoPermission;
}

- (BOOL)isOther {
  return _tag == DBSHARINGFileMemberActionErrorOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBSHARINGFileMemberActionErrorInvalidMember:
    return @"DBSHARINGFileMemberActionErrorInvalidMember";
  case DBSHARINGFileMemberActionErrorNoPermission:
    return @"DBSHARINGFileMemberActionErrorNoPermission";
  case DBSHARINGFileMemberActionErrorOther:
    return @"DBSHARINGFileMemberActionErrorOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBSHARINGFileMemberActionErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBSHARINGFileMemberActionErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBSHARINGFileMemberActionErrorSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBSHARINGFileMemberActionErrorSerializer

+ (NSDictionary *)serialize:(DBSHARINGFileMemberActionError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isInvalidMember]) {
    jsonDict[@".tag"] = @"invalid_member";
  } else if ([valueObj isNoPermission]) {
    jsonDict[@".tag"] = @"no_permission";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
  }

  return jsonDict;
}

+ (DBSHARINGFileMemberActionError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"invalid_member"]) {
    return [[DBSHARINGFileMemberActionError alloc] initWithInvalidMember];
  } else if ([tag isEqualToString:@"no_permission"]) {
    return [[DBSHARINGFileMemberActionError alloc] initWithNoPermission];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBSHARINGFileMemberActionError alloc] initWithOther];
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
