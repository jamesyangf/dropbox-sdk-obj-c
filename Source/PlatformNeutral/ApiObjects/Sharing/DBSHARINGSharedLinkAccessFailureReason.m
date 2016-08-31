///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSHARINGSharedLinkAccessFailureReason.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBSHARINGSharedLinkAccessFailureReason

#pragma mark - Constructors

- (instancetype)initWithLoginRequired {
  self = [super init];
  if (self) {
    _tag = DBSHARINGSharedLinkAccessFailureReasonLoginRequired;
  }
  return self;
}

- (instancetype)initWithEmailVerifyRequired {
  self = [super init];
  if (self) {
    _tag = DBSHARINGSharedLinkAccessFailureReasonEmailVerifyRequired;
  }
  return self;
}

- (instancetype)initWithPasswordRequired {
  self = [super init];
  if (self) {
    _tag = DBSHARINGSharedLinkAccessFailureReasonPasswordRequired;
  }
  return self;
}

- (instancetype)initWithTeamOnly {
  self = [super init];
  if (self) {
    _tag = DBSHARINGSharedLinkAccessFailureReasonTeamOnly;
  }
  return self;
}

- (instancetype)initWithOwnerOnly {
  self = [super init];
  if (self) {
    _tag = DBSHARINGSharedLinkAccessFailureReasonOwnerOnly;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBSHARINGSharedLinkAccessFailureReasonOther;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isLoginRequired {
  return _tag == DBSHARINGSharedLinkAccessFailureReasonLoginRequired;
}

- (BOOL)isEmailVerifyRequired {
  return _tag == DBSHARINGSharedLinkAccessFailureReasonEmailVerifyRequired;
}

- (BOOL)isPasswordRequired {
  return _tag == DBSHARINGSharedLinkAccessFailureReasonPasswordRequired;
}

- (BOOL)isTeamOnly {
  return _tag == DBSHARINGSharedLinkAccessFailureReasonTeamOnly;
}

- (BOOL)isOwnerOnly {
  return _tag == DBSHARINGSharedLinkAccessFailureReasonOwnerOnly;
}

- (BOOL)isOther {
  return _tag == DBSHARINGSharedLinkAccessFailureReasonOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBSHARINGSharedLinkAccessFailureReasonLoginRequired:
    return @"DBSHARINGSharedLinkAccessFailureReasonLoginRequired";
  case DBSHARINGSharedLinkAccessFailureReasonEmailVerifyRequired:
    return @"DBSHARINGSharedLinkAccessFailureReasonEmailVerifyRequired";
  case DBSHARINGSharedLinkAccessFailureReasonPasswordRequired:
    return @"DBSHARINGSharedLinkAccessFailureReasonPasswordRequired";
  case DBSHARINGSharedLinkAccessFailureReasonTeamOnly:
    return @"DBSHARINGSharedLinkAccessFailureReasonTeamOnly";
  case DBSHARINGSharedLinkAccessFailureReasonOwnerOnly:
    return @"DBSHARINGSharedLinkAccessFailureReasonOwnerOnly";
  case DBSHARINGSharedLinkAccessFailureReasonOther:
    return @"DBSHARINGSharedLinkAccessFailureReasonOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBSHARINGSharedLinkAccessFailureReasonSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBSHARINGSharedLinkAccessFailureReasonSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBSHARINGSharedLinkAccessFailureReasonSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBSHARINGSharedLinkAccessFailureReasonSerializer

+ (NSDictionary *)serialize:(DBSHARINGSharedLinkAccessFailureReason *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isLoginRequired]) {
    jsonDict[@".tag"] = @"login_required";
  } else if ([valueObj isEmailVerifyRequired]) {
    jsonDict[@".tag"] = @"email_verify_required";
  } else if ([valueObj isPasswordRequired]) {
    jsonDict[@".tag"] = @"password_required";
  } else if ([valueObj isTeamOnly]) {
    jsonDict[@".tag"] = @"team_only";
  } else if ([valueObj isOwnerOnly]) {
    jsonDict[@".tag"] = @"owner_only";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
  }

  return jsonDict;
}

+ (DBSHARINGSharedLinkAccessFailureReason *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"login_required"]) {
    return [[DBSHARINGSharedLinkAccessFailureReason alloc] initWithLoginRequired];
  } else if ([tag isEqualToString:@"email_verify_required"]) {
    return [[DBSHARINGSharedLinkAccessFailureReason alloc] initWithEmailVerifyRequired];
  } else if ([tag isEqualToString:@"password_required"]) {
    return [[DBSHARINGSharedLinkAccessFailureReason alloc] initWithPasswordRequired];
  } else if ([tag isEqualToString:@"team_only"]) {
    return [[DBSHARINGSharedLinkAccessFailureReason alloc] initWithTeamOnly];
  } else if ([tag isEqualToString:@"owner_only"]) {
    return [[DBSHARINGSharedLinkAccessFailureReason alloc] initWithOwnerOnly];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBSHARINGSharedLinkAccessFailureReason alloc] initWithOther];
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
