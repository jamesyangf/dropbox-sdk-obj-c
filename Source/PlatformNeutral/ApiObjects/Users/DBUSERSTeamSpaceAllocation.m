///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBUSERSTeamSpaceAllocation.h"

#pragma mark - API Object

@implementation DBUSERSTeamSpaceAllocation

#pragma mark - Constructors

- (instancetype)initWithUsed:(NSNumber *)used allocated:(NSNumber *)allocated {

  self = [super init];
  if (self) {
    _used = used;
    _allocated = allocated;
  }
  return self;
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBUSERSTeamSpaceAllocationSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBUSERSTeamSpaceAllocationSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBUSERSTeamSpaceAllocationSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBUSERSTeamSpaceAllocationSerializer

+ (NSDictionary *)serialize:(DBUSERSTeamSpaceAllocation *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"used"] = valueObj.used;
  jsonDict[@"allocated"] = valueObj.allocated;

  return jsonDict;
}

+ (DBUSERSTeamSpaceAllocation *)deserialize:(NSDictionary *)valueDict {
  NSNumber *used = valueDict[@"used"];
  NSNumber *allocated = valueDict[@"allocated"];

  return [[DBUSERSTeamSpaceAllocation alloc] initWithUsed:used allocated:allocated];
}

@end
