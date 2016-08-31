///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGAddFolderMemberError;
@class DBSHARINGSharedFolderAccessError;
@class DBSHARINGSharedFolderMemberError;
@class DBSHARINGUpdateFolderMemberError;

#pragma mark - API Object

///
/// The UpdateFolderMemberError union.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGUpdateFolderMemberError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBSHARINGUpdateFolderMemberErrorTag enum type represents the possible tag states with which
/// the DBSHARINGUpdateFolderMemberError union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGUpdateFolderMemberErrorTag) {
  /// (no description).
  DBSHARINGUpdateFolderMemberErrorAccessError,

  /// (no description).
  DBSHARINGUpdateFolderMemberErrorMemberError,

  /// If updating the access type required the member to be added to the shared folder and there
  /// was an error when adding the member.
  DBSHARINGUpdateFolderMemberErrorNoExplicitAccess,

  /// The current user's account doesn't support this action. An example of this is when
  /// downgrading a member from editor to viewer. This action can only be performed by users that
  /// have upgraded to a Pro or Business plan.
  DBSHARINGUpdateFolderMemberErrorInsufficientPlan,

  /// The current user does not have permission to perform this action.
  DBSHARINGUpdateFolderMemberErrorNoPermission,

  /// (no description).
  DBSHARINGUpdateFolderMemberErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGUpdateFolderMemberErrorTag tag;

/// (no description). Ensure the isAccessError method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGSharedFolderAccessError * _Nonnull accessError;

/// (no description). Ensure the isMemberError method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGSharedFolderMemberError * _Nonnull memberError;

/// If updating the access type required the member to be added to the shared folder and there was
/// an error when adding the member. Ensure the isNoExplicitAccess method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGAddFolderMemberError * _Nonnull noExplicitAccess;

#pragma mark - Constructors

///
/// Initializes union class with tag state of AccessError.
///
/// @param accessError (no description).
///
/// @return An initialized DBSHARINGUpdateFolderMemberError instance.
///
- (nonnull instancetype)initWithAccessError:(DBSHARINGSharedFolderAccessError * _Nonnull)accessError;

///
/// Initializes union class with tag state of MemberError.
///
/// @param memberError (no description).
///
/// @return An initialized DBSHARINGUpdateFolderMemberError instance.
///
- (nonnull instancetype)initWithMemberError:(DBSHARINGSharedFolderMemberError * _Nonnull)memberError;

///
/// Initializes union class with tag state of NoExplicitAccess.
///
/// About the NoExplicitAccess tag state: If updating the access type required the member to be
/// added to the shared folder and there was an error when adding the member.
///
/// @param noExplicitAccess If updating the access type required the member to be added to the
/// shared folder and there was an error when adding the member.
///
/// @return An initialized DBSHARINGUpdateFolderMemberError instance.
///
- (nonnull instancetype)initWithNoExplicitAccess:(DBSHARINGAddFolderMemberError * _Nonnull)noExplicitAccess;

///
/// Initializes union class with tag state of InsufficientPlan.
///
/// About the InsufficientPlan tag state: The current user's account doesn't support this action. An
/// example of this is when downgrading a member from editor to viewer. This action can only be
/// performed by users that have upgraded to a Pro or Business plan.
///
/// @return An initialized DBSHARINGUpdateFolderMemberError instance.
///
- (nonnull instancetype)initWithInsufficientPlan;

///
/// Initializes union class with tag state of NoPermission.
///
/// About the NoPermission tag state: The current user does not have permission to perform this
/// action.
///
/// @return An initialized DBSHARINGUpdateFolderMemberError instance.
///
- (nonnull instancetype)initWithNoPermission;

///
/// Initializes union class with tag state of Other.
///
/// @return An initialized DBSHARINGUpdateFolderMemberError instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value AccessError.
///
/// @note Call this method and ensure it returns true before accessing the accessError property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value AccessError.
///
- (BOOL)isAccessError;

///
/// Retrieves whether the union's current tag state has value MemberError.
///
/// @note Call this method and ensure it returns true before accessing the memberError property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value MemberError.
///
- (BOOL)isMemberError;

///
/// Retrieves whether the union's current tag state has value NoExplicitAccess.
///
/// @note Call this method and ensure it returns true before accessing the noExplicitAccess
/// property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value NoExplicitAccess.
///
- (BOOL)isNoExplicitAccess;

///
/// Retrieves whether the union's current tag state has value InsufficientPlan.
///
/// @return Whether the union's current tag state has value InsufficientPlan.
///
- (BOOL)isInsufficientPlan;

///
/// Retrieves whether the union's current tag state has value NoPermission.
///
/// @return Whether the union's current tag state has value NoPermission.
///
- (BOOL)isNoPermission;

///
/// Retrieves whether the union's current tag state has value Other.
///
/// @return Whether the union's current tag state has value Other.
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the DBSHARINGUpdateFolderMemberError union.
///
@interface DBSHARINGUpdateFolderMemberErrorSerializer : NSObject

///
/// Serializes DBSHARINGUpdateFolderMemberError instances.
///
/// @param instance An instance of the DBSHARINGUpdateFolderMemberError API object.
///
/// @return A json-compatible dictionary representation of the DBSHARINGUpdateFolderMemberError API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGUpdateFolderMemberError * _Nonnull)instance;

///
/// Deserializes DBSHARINGUpdateFolderMemberError instances.
///
/// @param dict A json-compatible dictionary representation of the DBSHARINGUpdateFolderMemberError
/// API object.
///
/// @return An instantiation of the DBSHARINGUpdateFolderMemberError object.
///
+ (DBSHARINGUpdateFolderMemberError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
