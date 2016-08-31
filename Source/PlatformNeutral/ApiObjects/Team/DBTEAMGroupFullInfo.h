///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import "DBTEAMCOMMONGroupSummary.h"
#import <Foundation/Foundation.h>

@class DBTEAMCOMMONGroupManagementType;
@class DBTEAMGroupFullInfo;
@class DBTEAMGroupMemberInfo;

#pragma mark - API Object

///
/// The GroupFullInfo struct.
///
/// Full description of a group.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMGroupFullInfo : DBTEAMCOMMONGroupSummary <DBSerializable>

#pragma mark - Instance fields

/// List of group members.
@property(nonatomic, readonly) NSArray<DBTEAMGroupMemberInfo *> * _Nullable members;

/// The group creation time as a UTC timestamp in milliseconds since the Unix epoch.
@property(nonatomic, readonly, copy) NSNumber * _Nonnull created;

#pragma mark - Constructors

///
/// Full constructor for the DBTEAMGroupFullInfo struct (exposes all instance variables).
///
/// @param groupName (no description).
/// @param groupId (no description).
/// @param groupManagementType Who is allowed to manage the group.
/// @param created The group creation time as a UTC timestamp in milliseconds since the Unix epoch.
/// @param groupExternalId External ID of group. This is an arbitrary ID that an admin can attach to
/// a group.
/// @param memberCount The number of members in the group.
/// @param members List of group members.
///
/// @return An initialized DBTEAMGroupFullInfo instance.
///
- (nonnull instancetype)initWithGroupName:(NSString * _Nonnull)groupName
                                  groupId:(NSString * _Nonnull)groupId
                      groupManagementType:(DBTEAMCOMMONGroupManagementType * _Nonnull)groupManagementType
                                  created:(NSNumber * _Nonnull)created
                          groupExternalId:(NSString * _Nullable)groupExternalId
                              memberCount:(NSNumber * _Nullable)memberCount
                                  members:(NSArray<DBTEAMGroupMemberInfo *> * _Nullable)members;

///
/// Convenience constructor for the DBTEAMGroupFullInfo struct (exposes only non-nullable instance
/// variables with no default value).
///
/// @param groupName (no description).
/// @param groupId (no description).
/// @param groupManagementType Who is allowed to manage the group.
/// @param created The group creation time as a UTC timestamp in milliseconds since the Unix epoch.
///
/// @return An initialized DBTEAMGroupFullInfo instance.
///
- (nonnull instancetype)initWithGroupName:(NSString * _Nonnull)groupName
                                  groupId:(NSString * _Nonnull)groupId
                      groupManagementType:(DBTEAMCOMMONGroupManagementType * _Nonnull)groupManagementType
                                  created:(NSNumber * _Nonnull)created;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the GroupFullInfo struct.
///
@interface DBTEAMGroupFullInfoSerializer : NSObject

///
/// Serializes DBTEAMGroupFullInfo instances.
///
/// @param instance An instance of the DBTEAMGroupFullInfo API object.
///
/// @return A json-compatible dictionary representation of the DBTEAMGroupFullInfo API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMGroupFullInfo * _Nonnull)instance;

///
/// Deserializes DBTEAMGroupFullInfo instances.
///
/// @param dict A json-compatible dictionary representation of the DBTEAMGroupFullInfo API object.
///
/// @return An instantiation of the DBTEAMGroupFullInfo object.
///
+ (DBTEAMGroupFullInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
