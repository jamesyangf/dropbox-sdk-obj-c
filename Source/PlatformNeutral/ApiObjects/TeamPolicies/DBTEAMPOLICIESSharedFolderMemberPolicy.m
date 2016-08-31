///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBTEAMPOLICIESSharedFolderMemberPolicy.h"

#pragma mark - API Object

@implementation DBTEAMPOLICIESSharedFolderMemberPolicy

#pragma mark - Constructors

- (instancetype)initWithTeam {
  self = [super init];
  if (self) {
    _tag = DBTEAMPOLICIESSharedFolderMemberPolicyTeam;
  }
  return self;
}

- (instancetype)initWithAnyone {
  self = [super init];
  if (self) {
    _tag = DBTEAMPOLICIESSharedFolderMemberPolicyAnyone;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBTEAMPOLICIESSharedFolderMemberPolicyOther;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isTeam {
  return _tag == DBTEAMPOLICIESSharedFolderMemberPolicyTeam;
}

- (BOOL)isAnyone {
  return _tag == DBTEAMPOLICIESSharedFolderMemberPolicyAnyone;
}

- (BOOL)isOther {
  return _tag == DBTEAMPOLICIESSharedFolderMemberPolicyOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBTEAMPOLICIESSharedFolderMemberPolicyTeam:
    return @"DBTEAMPOLICIESSharedFolderMemberPolicyTeam";
  case DBTEAMPOLICIESSharedFolderMemberPolicyAnyone:
    return @"DBTEAMPOLICIESSharedFolderMemberPolicyAnyone";
  case DBTEAMPOLICIESSharedFolderMemberPolicyOther:
    return @"DBTEAMPOLICIESSharedFolderMemberPolicyOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBTEAMPOLICIESSharedFolderMemberPolicySerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBTEAMPOLICIESSharedFolderMemberPolicySerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBTEAMPOLICIESSharedFolderMemberPolicySerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBTEAMPOLICIESSharedFolderMemberPolicySerializer

+ (NSDictionary *)serialize:(DBTEAMPOLICIESSharedFolderMemberPolicy *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isTeam]) {
    jsonDict[@".tag"] = @"team";
  } else if ([valueObj isAnyone]) {
    jsonDict[@".tag"] = @"anyone";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
  }

  return jsonDict;
}

+ (DBTEAMPOLICIESSharedFolderMemberPolicy *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"team"]) {
    return [[DBTEAMPOLICIESSharedFolderMemberPolicy alloc] initWithTeam];
  } else if ([tag isEqualToString:@"anyone"]) {
    return [[DBTEAMPOLICIESSharedFolderMemberPolicy alloc] initWithAnyone];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBTEAMPOLICIESSharedFolderMemberPolicy alloc] initWithOther];
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
