///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBTEAMMembersListArg.h"

#pragma mark - API Object

@implementation DBTEAMMembersListArg

#pragma mark - Constructors

- (instancetype)initWithLimit:(NSNumber *)limit includeRemoved:(NSNumber *)includeRemoved {
  [DBStoneValidators numericValidator:@(1) maxValue:@(1000)](limit ?: @(1000));

  self = [super init];
  if (self) {
    _limit = limit ?: @(1000);
    _includeRemoved = includeRemoved ?: @NO;
  }
  return self;
}

- (instancetype)init {
  return [self initWithLimit:nil includeRemoved:nil];
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBTEAMMembersListArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBTEAMMembersListArgSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBTEAMMembersListArgSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBTEAMMembersListArgSerializer

+ (NSDictionary *)serialize:(DBTEAMMembersListArg *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"limit"] = valueObj.limit;
  jsonDict[@"include_removed"] = valueObj.includeRemoved;

  return jsonDict;
}

+ (DBTEAMMembersListArg *)deserialize:(NSDictionary *)valueDict {
  NSNumber *limit = valueDict[@"limit"];
  NSNumber *includeRemoved = valueDict[@"include_removed"];

  return [[DBTEAMMembersListArg alloc] initWithLimit:limit includeRemoved:includeRemoved];
}

@end
