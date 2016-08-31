///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMGroupsSelector;

#pragma mark - API Object

///
/// The GroupsSelector union.
///
/// Argument for selecting a list of groups, either by group_ids, or external group IDs.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMGroupsSelector : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBTEAMGroupsSelectorTag enum type represents the possible tag states with which the
/// DBTEAMGroupsSelector union can exist.
typedef NS_ENUM(NSInteger, DBTEAMGroupsSelectorTag) {
  /// List of group IDs.
  DBTEAMGroupsSelectorGroupIds,

  /// List of external IDs of groups.
  DBTEAMGroupsSelectorGroupExternalIds,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMGroupsSelectorTag tag;

/// List of group IDs. Ensure the isGroupIds method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property(nonatomic, readonly) NSArray<NSString *> * _Nonnull groupIds;

/// List of external IDs of groups. Ensure the isGroupExternalIds method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) NSArray<NSString *> * _Nonnull groupExternalIds;

#pragma mark - Constructors

///
/// Initializes union class with tag state of GroupIds.
///
/// About the GroupIds tag state: List of group IDs.
///
/// @param groupIds List of group IDs.
///
/// @return An initialized DBTEAMGroupsSelector instance.
///
- (nonnull instancetype)initWithGroupIds:(NSArray<NSString *> * _Nonnull)groupIds;

///
/// Initializes union class with tag state of GroupExternalIds.
///
/// About the GroupExternalIds tag state: List of external IDs of groups.
///
/// @param groupExternalIds List of external IDs of groups.
///
/// @return An initialized DBTEAMGroupsSelector instance.
///
- (nonnull instancetype)initWithGroupExternalIds:(NSArray<NSString *> * _Nonnull)groupExternalIds;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value GroupIds.
///
/// @note Call this method and ensure it returns true before accessing the groupIds property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value GroupIds.
///
- (BOOL)isGroupIds;

///
/// Retrieves whether the union's current tag state has value GroupExternalIds.
///
/// @note Call this method and ensure it returns true before accessing the groupExternalIds
/// property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value GroupExternalIds.
///
- (BOOL)isGroupExternalIds;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the DBTEAMGroupsSelector union.
///
@interface DBTEAMGroupsSelectorSerializer : NSObject

///
/// Serializes DBTEAMGroupsSelector instances.
///
/// @param instance An instance of the DBTEAMGroupsSelector API object.
///
/// @return A json-compatible dictionary representation of the DBTEAMGroupsSelector API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMGroupsSelector * _Nonnull)instance;

///
/// Deserializes DBTEAMGroupsSelector instances.
///
/// @param dict A json-compatible dictionary representation of the DBTEAMGroupsSelector API object.
///
/// @return An instantiation of the DBTEAMGroupsSelector object.
///
+ (DBTEAMGroupsSelector * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
