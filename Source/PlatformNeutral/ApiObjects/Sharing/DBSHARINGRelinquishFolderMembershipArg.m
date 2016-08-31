///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSHARINGRelinquishFolderMembershipArg.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBSHARINGRelinquishFolderMembershipArg

#pragma mark - Constructors

- (instancetype)initWithSharedFolderId:(NSString *)sharedFolderId leaveACopy:(NSNumber *)leaveACopy {
  [DBStoneValidators stringValidator:nil maxLength:nil pattern:@"[-_0-9a-zA-Z:]+"](sharedFolderId);

  self = [super init];
  if (self) {
    _sharedFolderId = sharedFolderId;
    _leaveACopy = leaveACopy ?: @NO;
  }
  return self;
}

- (instancetype)initWithSharedFolderId:(NSString *)sharedFolderId {
  return [self initWithSharedFolderId:sharedFolderId leaveACopy:nil];
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBSHARINGRelinquishFolderMembershipArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBSHARINGRelinquishFolderMembershipArgSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBSHARINGRelinquishFolderMembershipArgSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBSHARINGRelinquishFolderMembershipArgSerializer

+ (NSDictionary *)serialize:(DBSHARINGRelinquishFolderMembershipArg *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"shared_folder_id"] = valueObj.sharedFolderId;
  jsonDict[@"leave_a_copy"] = valueObj.leaveACopy;

  return jsonDict;
}

+ (DBSHARINGRelinquishFolderMembershipArg *)deserialize:(NSDictionary *)valueDict {
  NSString *sharedFolderId = valueDict[@"shared_folder_id"];
  NSNumber *leaveACopy = valueDict[@"leave_a_copy"];

  return [[DBSHARINGRelinquishFolderMembershipArg alloc] initWithSharedFolderId:sharedFolderId leaveACopy:leaveACopy];
}

@end
