///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMAdminTier;

#pragma mark - API Object

///
/// The AdminTier union.
///
/// Describes which team-related admin permissions a user has.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMAdminTier : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBTEAMAdminTierTag enum type represents the possible tag states with which the
/// DBTEAMAdminTier union can exist.
typedef NS_ENUM(NSInteger, DBTEAMAdminTierTag) {
  /// User is an administrator of the team - has all permissions.
  DBTEAMAdminTierTeamAdmin,

  /// User can do most user provisioning, de-provisioning and management.
  DBTEAMAdminTierUserManagementAdmin,

  /// User can do a limited set of common support tasks for existing users.
  DBTEAMAdminTierSupportAdmin,

  /// User is not an admin of the team.
  DBTEAMAdminTierMemberOnly,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMAdminTierTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of TeamAdmin.
///
/// About the TeamAdmin tag state: User is an administrator of the team - has all permissions.
///
/// @return An initialized DBTEAMAdminTier instance.
///
- (nonnull instancetype)initWithTeamAdmin;

///
/// Initializes union class with tag state of UserManagementAdmin.
///
/// About the UserManagementAdmin tag state: User can do most user provisioning, de-provisioning and
/// management.
///
/// @return An initialized DBTEAMAdminTier instance.
///
- (nonnull instancetype)initWithUserManagementAdmin;

///
/// Initializes union class with tag state of SupportAdmin.
///
/// About the SupportAdmin tag state: User can do a limited set of common support tasks for existing
/// users.
///
/// @return An initialized DBTEAMAdminTier instance.
///
- (nonnull instancetype)initWithSupportAdmin;

///
/// Initializes union class with tag state of MemberOnly.
///
/// About the MemberOnly tag state: User is not an admin of the team.
///
/// @return An initialized DBTEAMAdminTier instance.
///
- (nonnull instancetype)initWithMemberOnly;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value TeamAdmin.
///
/// @return Whether the union's current tag state has value TeamAdmin.
///
- (BOOL)isTeamAdmin;

///
/// Retrieves whether the union's current tag state has value UserManagementAdmin.
///
/// @return Whether the union's current tag state has value UserManagementAdmin.
///
- (BOOL)isUserManagementAdmin;

///
/// Retrieves whether the union's current tag state has value SupportAdmin.
///
/// @return Whether the union's current tag state has value SupportAdmin.
///
- (BOOL)isSupportAdmin;

///
/// Retrieves whether the union's current tag state has value MemberOnly.
///
/// @return Whether the union's current tag state has value MemberOnly.
///
- (BOOL)isMemberOnly;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the DBTEAMAdminTier union.
///
@interface DBTEAMAdminTierSerializer : NSObject

///
/// Serializes DBTEAMAdminTier instances.
///
/// @param instance An instance of the DBTEAMAdminTier API object.
///
/// @return A json-compatible dictionary representation of the DBTEAMAdminTier API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMAdminTier * _Nonnull)instance;

///
/// Deserializes DBTEAMAdminTier instances.
///
/// @param dict A json-compatible dictionary representation of the DBTEAMAdminTier API object.
///
/// @return An instantiation of the DBTEAMAdminTier object.
///
+ (DBTEAMAdminTier * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
