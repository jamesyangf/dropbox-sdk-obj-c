///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBTEAMMembersDeactivateError.h"
#import "DBTEAMMembersUnsuspendError.h"

#pragma mark - API Object

@implementation DBTEAMMembersUnsuspendError

#pragma mark - Constructors

- (instancetype)initWithUserNotFound {
  self = [super init];
  if (self) {
    _tag = DBTEAMMembersUnsuspendErrorUserNotFound;
  }
  return self;
}

- (instancetype)initWithUserNotInTeam {
  self = [super init];
  if (self) {
    _tag = DBTEAMMembersUnsuspendErrorUserNotInTeam;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBTEAMMembersUnsuspendErrorOther;
  }
  return self;
}

- (instancetype)initWithUnsuspendNonSuspendedMember {
  self = [super init];
  if (self) {
    _tag = DBTEAMMembersUnsuspendErrorUnsuspendNonSuspendedMember;
  }
  return self;
}

- (instancetype)initWithTeamLicenseLimit {
  self = [super init];
  if (self) {
    _tag = DBTEAMMembersUnsuspendErrorTeamLicenseLimit;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isUserNotFound {
  return _tag == DBTEAMMembersUnsuspendErrorUserNotFound;
}

- (BOOL)isUserNotInTeam {
  return _tag == DBTEAMMembersUnsuspendErrorUserNotInTeam;
}

- (BOOL)isOther {
  return _tag == DBTEAMMembersUnsuspendErrorOther;
}

- (BOOL)isUnsuspendNonSuspendedMember {
  return _tag == DBTEAMMembersUnsuspendErrorUnsuspendNonSuspendedMember;
}

- (BOOL)isTeamLicenseLimit {
  return _tag == DBTEAMMembersUnsuspendErrorTeamLicenseLimit;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBTEAMMembersUnsuspendErrorUserNotFound:
    return @"DBTEAMMembersUnsuspendErrorUserNotFound";
  case DBTEAMMembersUnsuspendErrorUserNotInTeam:
    return @"DBTEAMMembersUnsuspendErrorUserNotInTeam";
  case DBTEAMMembersUnsuspendErrorOther:
    return @"DBTEAMMembersUnsuspendErrorOther";
  case DBTEAMMembersUnsuspendErrorUnsuspendNonSuspendedMember:
    return @"DBTEAMMembersUnsuspendErrorUnsuspendNonSuspendedMember";
  case DBTEAMMembersUnsuspendErrorTeamLicenseLimit:
    return @"DBTEAMMembersUnsuspendErrorTeamLicenseLimit";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBTEAMMembersUnsuspendErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBTEAMMembersUnsuspendErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBTEAMMembersUnsuspendErrorSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBTEAMMembersUnsuspendErrorSerializer

+ (NSDictionary *)serialize:(DBTEAMMembersUnsuspendError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isUserNotFound]) {
    jsonDict[@".tag"] = @"user_not_found";
  } else if ([valueObj isUserNotInTeam]) {
    jsonDict[@".tag"] = @"user_not_in_team";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else if ([valueObj isUnsuspendNonSuspendedMember]) {
    jsonDict[@".tag"] = @"unsuspend_non_suspended_member";
  } else if ([valueObj isTeamLicenseLimit]) {
    jsonDict[@".tag"] = @"team_license_limit";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
  }

  return jsonDict;
}

+ (DBTEAMMembersUnsuspendError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"user_not_found"]) {
    return [[DBTEAMMembersUnsuspendError alloc] initWithUserNotFound];
  } else if ([tag isEqualToString:@"user_not_in_team"]) {
    return [[DBTEAMMembersUnsuspendError alloc] initWithUserNotInTeam];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBTEAMMembersUnsuspendError alloc] initWithOther];
  } else if ([tag isEqualToString:@"unsuspend_non_suspended_member"]) {
    return [[DBTEAMMembersUnsuspendError alloc] initWithUnsuspendNonSuspendedMember];
  } else if ([tag isEqualToString:@"team_license_limit"]) {
    return [[DBTEAMMembersUnsuspendError alloc] initWithTeamLicenseLimit];
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
