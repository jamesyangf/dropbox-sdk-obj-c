///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBFILESLookupError;
@class DBSHARINGCreateSharedLinkWithSettingsError;
@class DBSHARINGSharedLinkSettingsError;

#pragma mark - API Object

///
/// The CreateSharedLinkWithSettingsError union.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGCreateSharedLinkWithSettingsError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBSHARINGCreateSharedLinkWithSettingsErrorTag enum type represents the possible tag states
/// with which the DBSHARINGCreateSharedLinkWithSettingsError union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGCreateSharedLinkWithSettingsErrorTag) {
  /// (no description).
  DBSHARINGCreateSharedLinkWithSettingsErrorPath,

  /// User's email should be verified
  DBSHARINGCreateSharedLinkWithSettingsErrorEmailNotVerified,

  /// The shared link already exists
  DBSHARINGCreateSharedLinkWithSettingsErrorSharedLinkAlreadyExists,

  /// There is an error with the given settings
  DBSHARINGCreateSharedLinkWithSettingsErrorSettingsError,

  /// Access to the requested path is forbidden
  DBSHARINGCreateSharedLinkWithSettingsErrorAccessDenied,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGCreateSharedLinkWithSettingsErrorTag tag;

/// (no description). Ensure the isPath method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property(nonatomic, readonly) DBFILESLookupError * _Nonnull path;

/// There is an error with the given settings Ensure the isSettingsError method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGSharedLinkSettingsError * _Nonnull settingsError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of Path.
///
/// @param path (no description).
///
/// @return An initialized DBSHARINGCreateSharedLinkWithSettingsError instance.
///
- (nonnull instancetype)initWithPath:(DBFILESLookupError * _Nonnull)path;

///
/// Initializes union class with tag state of EmailNotVerified.
///
/// About the EmailNotVerified tag state: User's email should be verified
///
/// @return An initialized DBSHARINGCreateSharedLinkWithSettingsError instance.
///
- (nonnull instancetype)initWithEmailNotVerified;

///
/// Initializes union class with tag state of SharedLinkAlreadyExists.
///
/// About the SharedLinkAlreadyExists tag state: The shared link already exists
///
/// @return An initialized DBSHARINGCreateSharedLinkWithSettingsError instance.
///
- (nonnull instancetype)initWithSharedLinkAlreadyExists;

///
/// Initializes union class with tag state of SettingsError.
///
/// About the SettingsError tag state: There is an error with the given settings
///
/// @param settingsError There is an error with the given settings
///
/// @return An initialized DBSHARINGCreateSharedLinkWithSettingsError instance.
///
- (nonnull instancetype)initWithSettingsError:(DBSHARINGSharedLinkSettingsError * _Nonnull)settingsError;

///
/// Initializes union class with tag state of AccessDenied.
///
/// About the AccessDenied tag state: Access to the requested path is forbidden
///
/// @return An initialized DBSHARINGCreateSharedLinkWithSettingsError instance.
///
- (nonnull instancetype)initWithAccessDenied;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value Path.
///
/// @note Call this method and ensure it returns true before accessing the path property, otherwise
/// a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value Path.
///
- (BOOL)isPath;

///
/// Retrieves whether the union's current tag state has value EmailNotVerified.
///
/// @return Whether the union's current tag state has value EmailNotVerified.
///
- (BOOL)isEmailNotVerified;

///
/// Retrieves whether the union's current tag state has value SharedLinkAlreadyExists.
///
/// @return Whether the union's current tag state has value SharedLinkAlreadyExists.
///
- (BOOL)isSharedLinkAlreadyExists;

///
/// Retrieves whether the union's current tag state has value SettingsError.
///
/// @note Call this method and ensure it returns true before accessing the settingsError property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value SettingsError.
///
- (BOOL)isSettingsError;

///
/// Retrieves whether the union's current tag state has value AccessDenied.
///
/// @return Whether the union's current tag state has value AccessDenied.
///
- (BOOL)isAccessDenied;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the DBSHARINGCreateSharedLinkWithSettingsError union.
///
@interface DBSHARINGCreateSharedLinkWithSettingsErrorSerializer : NSObject

///
/// Serializes DBSHARINGCreateSharedLinkWithSettingsError instances.
///
/// @param instance An instance of the DBSHARINGCreateSharedLinkWithSettingsError API object.
///
/// @return A json-compatible dictionary representation of the
/// DBSHARINGCreateSharedLinkWithSettingsError API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGCreateSharedLinkWithSettingsError * _Nonnull)instance;

///
/// Deserializes DBSHARINGCreateSharedLinkWithSettingsError instances.
///
/// @param dict A json-compatible dictionary representation of the
/// DBSHARINGCreateSharedLinkWithSettingsError API object.
///
/// @return An instantiation of the DBSHARINGCreateSharedLinkWithSettingsError object.
///
+ (DBSHARINGCreateSharedLinkWithSettingsError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
