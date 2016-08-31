///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBTEAMGroupAccessType.h"

#pragma mark - API Object

@implementation DBTEAMGroupAccessType

#pragma mark - Constructors

- (instancetype)initWithMember {
  self = [super init];
  if (self) {
    _tag = DBTEAMGroupAccessTypeMember;
  }
  return self;
}

- (instancetype)initWithOwner {
  self = [super init];
  if (self) {
    _tag = DBTEAMGroupAccessTypeOwner;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isMember {
  return _tag == DBTEAMGroupAccessTypeMember;
}

- (BOOL)isOwner {
  return _tag == DBTEAMGroupAccessTypeOwner;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBTEAMGroupAccessTypeMember:
    return @"DBTEAMGroupAccessTypeMember";
  case DBTEAMGroupAccessTypeOwner:
    return @"DBTEAMGroupAccessTypeOwner";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBTEAMGroupAccessTypeSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBTEAMGroupAccessTypeSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBTEAMGroupAccessTypeSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBTEAMGroupAccessTypeSerializer

+ (NSDictionary *)serialize:(DBTEAMGroupAccessType *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isMember]) {
    jsonDict[@".tag"] = @"member";
  } else if ([valueObj isOwner]) {
    jsonDict[@".tag"] = @"owner";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
  }

  return jsonDict;
}

+ (DBTEAMGroupAccessType *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"member"]) {
    return [[DBTEAMGroupAccessType alloc] initWithMember];
  } else if ([tag isEqualToString:@"owner"]) {
    return [[DBTEAMGroupAccessType alloc] initWithOwner];
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
