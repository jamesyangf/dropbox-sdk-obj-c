///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBTEAMGroupSelector.h"

#pragma mark - API Object

@implementation DBTEAMGroupSelector

@synthesize groupId = _groupId;
@synthesize groupExternalId = _groupExternalId;

#pragma mark - Constructors

- (instancetype)initWithGroupId:(NSString *)groupId {
  self = [super init];
  if (self) {
    _tag = DBTEAMGroupSelectorGroupId;
    _groupId = groupId;
  }
  return self;
}

- (instancetype)initWithGroupExternalId:(NSString *)groupExternalId {
  self = [super init];
  if (self) {
    _tag = DBTEAMGroupSelectorGroupExternalId;
    _groupExternalId = groupExternalId;
  }
  return self;
}

#pragma mark - Instance field accessors

- (NSString *)groupId {
  if (![self isGroupId]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBTEAMGroupSelectorGroupId, but was %@.", [self tagName]];
  }
  return _groupId;
}

- (NSString *)groupExternalId {
  if (![self isGroupExternalId]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBTEAMGroupSelectorGroupExternalId, but was %@.", [self tagName]];
  }
  return _groupExternalId;
}

#pragma mark - Tag state methods

- (BOOL)isGroupId {
  return _tag == DBTEAMGroupSelectorGroupId;
}

- (BOOL)isGroupExternalId {
  return _tag == DBTEAMGroupSelectorGroupExternalId;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBTEAMGroupSelectorGroupId:
    return @"DBTEAMGroupSelectorGroupId";
  case DBTEAMGroupSelectorGroupExternalId:
    return @"DBTEAMGroupSelectorGroupExternalId";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBTEAMGroupSelectorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBTEAMGroupSelectorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBTEAMGroupSelectorSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBTEAMGroupSelectorSerializer

+ (NSDictionary *)serialize:(DBTEAMGroupSelector *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isGroupId]) {
    jsonDict[@"group_id"] = valueObj.groupId;
    jsonDict[@".tag"] = @"group_id";
  } else if ([valueObj isGroupExternalId]) {
    jsonDict[@"group_external_id"] = valueObj.groupExternalId;
    jsonDict[@".tag"] = @"group_external_id";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
  }

  return jsonDict;
}

+ (DBTEAMGroupSelector *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"group_id"]) {
    NSString *groupId = valueDict[@"group_id"];
    return [[DBTEAMGroupSelector alloc] initWithGroupId:groupId];
  } else if ([tag isEqualToString:@"group_external_id"]) {
    NSString *groupExternalId = valueDict[@"group_external_id"];
    return [[DBTEAMGroupSelector alloc] initWithGroupExternalId:groupExternalId];
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
