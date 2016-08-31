///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBFILESLookupError;
@class DBFILESRelocationError;
@class DBFILESWriteError;

#pragma mark - API Object

///
/// The RelocationError union.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBFILESRelocationError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBFILESRelocationErrorTag enum type represents the possible tag states with which the
/// DBFILESRelocationError union can exist.
typedef NS_ENUM(NSInteger, DBFILESRelocationErrorTag) {
  /// (no description).
  DBFILESRelocationErrorFromLookup,

  /// (no description).
  DBFILESRelocationErrorFromWrite,

  /// (no description).
  DBFILESRelocationErrorTo,

  /// Shared folders can't be copied.
  DBFILESRelocationErrorCantCopySharedFolder,

  /// Your move operation would result in nested shared folders.  This is not allowed.
  DBFILESRelocationErrorCantNestSharedFolder,

  /// You cannot move a folder into itself.
  DBFILESRelocationErrorCantMoveFolderIntoItself,

  /// The operation would involve more than 10,000 files and folders.
  DBFILESRelocationErrorTooManyFiles,

  /// (no description).
  DBFILESRelocationErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBFILESRelocationErrorTag tag;

/// (no description). Ensure the isFromLookup method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property(nonatomic, readonly) DBFILESLookupError * _Nonnull fromLookup;

/// (no description). Ensure the isFromWrite method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property(nonatomic, readonly) DBFILESWriteError * _Nonnull fromWrite;

/// (no description). Ensure the isTo method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property(nonatomic, readonly) DBFILESWriteError * _Nonnull to;

#pragma mark - Constructors

///
/// Initializes union class with tag state of FromLookup.
///
/// @param fromLookup (no description).
///
/// @return An initialized DBFILESRelocationError instance.
///
- (nonnull instancetype)initWithFromLookup:(DBFILESLookupError * _Nonnull)fromLookup;

///
/// Initializes union class with tag state of FromWrite.
///
/// @param fromWrite (no description).
///
/// @return An initialized DBFILESRelocationError instance.
///
- (nonnull instancetype)initWithFromWrite:(DBFILESWriteError * _Nonnull)fromWrite;

///
/// Initializes union class with tag state of To.
///
/// @param to (no description).
///
/// @return An initialized DBFILESRelocationError instance.
///
- (nonnull instancetype)initWithTo:(DBFILESWriteError * _Nonnull)to;

///
/// Initializes union class with tag state of CantCopySharedFolder.
///
/// About the CantCopySharedFolder tag state: Shared folders can't be copied.
///
/// @return An initialized DBFILESRelocationError instance.
///
- (nonnull instancetype)initWithCantCopySharedFolder;

///
/// Initializes union class with tag state of CantNestSharedFolder.
///
/// About the CantNestSharedFolder tag state: Your move operation would result in nested shared
/// folders.  This is not allowed.
///
/// @return An initialized DBFILESRelocationError instance.
///
- (nonnull instancetype)initWithCantNestSharedFolder;

///
/// Initializes union class with tag state of CantMoveFolderIntoItself.
///
/// About the CantMoveFolderIntoItself tag state: You cannot move a folder into itself.
///
/// @return An initialized DBFILESRelocationError instance.
///
- (nonnull instancetype)initWithCantMoveFolderIntoItself;

///
/// Initializes union class with tag state of TooManyFiles.
///
/// About the TooManyFiles tag state: The operation would involve more than 10,000 files and
/// folders.
///
/// @return An initialized DBFILESRelocationError instance.
///
- (nonnull instancetype)initWithTooManyFiles;

///
/// Initializes union class with tag state of Other.
///
/// @return An initialized DBFILESRelocationError instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value FromLookup.
///
/// @note Call this method and ensure it returns true before accessing the fromLookup property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value FromLookup.
///
- (BOOL)isFromLookup;

///
/// Retrieves whether the union's current tag state has value FromWrite.
///
/// @note Call this method and ensure it returns true before accessing the fromWrite property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value FromWrite.
///
- (BOOL)isFromWrite;

///
/// Retrieves whether the union's current tag state has value To.
///
/// @note Call this method and ensure it returns true before accessing the to property, otherwise a
/// runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value To.
///
- (BOOL)isTo;

///
/// Retrieves whether the union's current tag state has value CantCopySharedFolder.
///
/// @return Whether the union's current tag state has value CantCopySharedFolder.
///
- (BOOL)isCantCopySharedFolder;

///
/// Retrieves whether the union's current tag state has value CantNestSharedFolder.
///
/// @return Whether the union's current tag state has value CantNestSharedFolder.
///
- (BOOL)isCantNestSharedFolder;

///
/// Retrieves whether the union's current tag state has value CantMoveFolderIntoItself.
///
/// @return Whether the union's current tag state has value CantMoveFolderIntoItself.
///
- (BOOL)isCantMoveFolderIntoItself;

///
/// Retrieves whether the union's current tag state has value TooManyFiles.
///
/// @return Whether the union's current tag state has value TooManyFiles.
///
- (BOOL)isTooManyFiles;

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
/// The serialization class for the DBFILESRelocationError union.
///
@interface DBFILESRelocationErrorSerializer : NSObject

///
/// Serializes DBFILESRelocationError instances.
///
/// @param instance An instance of the DBFILESRelocationError API object.
///
/// @return A json-compatible dictionary representation of the DBFILESRelocationError API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESRelocationError * _Nonnull)instance;

///
/// Deserializes DBFILESRelocationError instances.
///
/// @param dict A json-compatible dictionary representation of the DBFILESRelocationError API
/// object.
///
/// @return An instantiation of the DBFILESRelocationError object.
///
+ (DBFILESRelocationError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
