///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGQuickActionType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `QuickActionType` union.
///
/// Quick action type.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGQuickActionType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGQuickActionTypeTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGQuickActionType` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGQuickActionTypeTag) {
  /// (no description).
  DBTEAMLOGQuickActionTypeDeleteSharedLink,

  /// (no description).
  DBTEAMLOGQuickActionTypeResetPassword,

  /// (no description).
  DBTEAMLOGQuickActionTypeRestoreFileOrFolder,

  /// (no description).
  DBTEAMLOGQuickActionTypeUnlinkApp,

  /// (no description).
  DBTEAMLOGQuickActionTypeUnlinkDevice,

  /// (no description).
  DBTEAMLOGQuickActionTypeUnlinkSession,

  /// (no description).
  DBTEAMLOGQuickActionTypeOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGQuickActionTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "delete_shared_link".
///
/// @return An initialized instance.
///
- (instancetype)initWithDeleteSharedLink;

///
/// Initializes union class with tag state of "reset_password".
///
/// @return An initialized instance.
///
- (instancetype)initWithResetPassword;

///
/// Initializes union class with tag state of "restore_file_or_folder".
///
/// @return An initialized instance.
///
- (instancetype)initWithRestoreFileOrFolder;

///
/// Initializes union class with tag state of "unlink_app".
///
/// @return An initialized instance.
///
- (instancetype)initWithUnlinkApp;

///
/// Initializes union class with tag state of "unlink_device".
///
/// @return An initialized instance.
///
- (instancetype)initWithUnlinkDevice;

///
/// Initializes union class with tag state of "unlink_session".
///
/// @return An initialized instance.
///
- (instancetype)initWithUnlinkSession;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "delete_shared_link".
///
/// @return Whether the union's current tag state has value
/// "delete_shared_link".
///
- (BOOL)isDeleteSharedLink;

///
/// Retrieves whether the union's current tag state has value "reset_password".
///
/// @return Whether the union's current tag state has value "reset_password".
///
- (BOOL)isResetPassword;

///
/// Retrieves whether the union's current tag state has value
/// "restore_file_or_folder".
///
/// @return Whether the union's current tag state has value
/// "restore_file_or_folder".
///
- (BOOL)isRestoreFileOrFolder;

///
/// Retrieves whether the union's current tag state has value "unlink_app".
///
/// @return Whether the union's current tag state has value "unlink_app".
///
- (BOOL)isUnlinkApp;

///
/// Retrieves whether the union's current tag state has value "unlink_device".
///
/// @return Whether the union's current tag state has value "unlink_device".
///
- (BOOL)isUnlinkDevice;

///
/// Retrieves whether the union's current tag state has value "unlink_session".
///
/// @return Whether the union's current tag state has value "unlink_session".
///
- (BOOL)isUnlinkSession;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGQuickActionType` union.
///
@interface DBTEAMLOGQuickActionTypeSerializer : NSObject

///
/// Serializes `DBTEAMLOGQuickActionType` instances.
///
/// @param instance An instance of the `DBTEAMLOGQuickActionType` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGQuickActionType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGQuickActionType *)instance;

///
/// Deserializes `DBTEAMLOGQuickActionType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGQuickActionType` API object.
///
/// @return An instantiation of the `DBTEAMLOGQuickActionType` object.
///
+ (DBTEAMLOGQuickActionType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
