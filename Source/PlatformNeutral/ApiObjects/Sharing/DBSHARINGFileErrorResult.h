///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGFileErrorResult;

#pragma mark - API Object

///
/// The FileErrorResult union.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGFileErrorResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBSHARINGFileErrorResultTag enum type represents the possible tag states with which the
/// DBSHARINGFileErrorResult union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGFileErrorResultTag) {
  /// File specified by id was not found.
  DBSHARINGFileErrorResultFileNotFoundError,

  /// User does not have permission to take the specified action on the file.
  DBSHARINGFileErrorResultInvalidFileActionError,

  /// User does not have permission to access file specified by file.Id.
  DBSHARINGFileErrorResultPermissionDeniedError,

  /// (no description).
  DBSHARINGFileErrorResultOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGFileErrorResultTag tag;

/// File specified by id was not found. Ensure the isFileNotFoundError method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly, copy) NSString * _Nonnull fileNotFoundError;

/// User does not have permission to take the specified action on the file. Ensure the
/// isInvalidFileActionError method returns true before accessing, otherwise a runtime exception
/// will be raised.
@property(nonatomic, readonly, copy) NSString * _Nonnull invalidFileActionError;

/// User does not have permission to access file specified by file.Id. Ensure the
/// isPermissionDeniedError method returns true before accessing, otherwise a runtime exception will
/// be raised.
@property(nonatomic, readonly, copy) NSString * _Nonnull permissionDeniedError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of FileNotFoundError.
///
/// About the FileNotFoundError tag state: File specified by id was not found.
///
/// @param fileNotFoundError File specified by id was not found.
///
/// @return An initialized DBSHARINGFileErrorResult instance.
///
- (nonnull instancetype)initWithFileNotFoundError:(NSString * _Nonnull)fileNotFoundError;

///
/// Initializes union class with tag state of InvalidFileActionError.
///
/// About the InvalidFileActionError tag state: User does not have permission to take the specified
/// action on the file.
///
/// @param invalidFileActionError User does not have permission to take the specified action on the
/// file.
///
/// @return An initialized DBSHARINGFileErrorResult instance.
///
- (nonnull instancetype)initWithInvalidFileActionError:(NSString * _Nonnull)invalidFileActionError;

///
/// Initializes union class with tag state of PermissionDeniedError.
///
/// About the PermissionDeniedError tag state: User does not have permission to access file
/// specified by file.Id.
///
/// @param permissionDeniedError User does not have permission to access file specified by file.Id.
///
/// @return An initialized DBSHARINGFileErrorResult instance.
///
- (nonnull instancetype)initWithPermissionDeniedError:(NSString * _Nonnull)permissionDeniedError;

///
/// Initializes union class with tag state of Other.
///
/// @return An initialized DBSHARINGFileErrorResult instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value FileNotFoundError.
///
/// @note Call this method and ensure it returns true before accessing the fileNotFoundError
/// property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value FileNotFoundError.
///
- (BOOL)isFileNotFoundError;

///
/// Retrieves whether the union's current tag state has value InvalidFileActionError.
///
/// @note Call this method and ensure it returns true before accessing the invalidFileActionError
/// property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value InvalidFileActionError.
///
- (BOOL)isInvalidFileActionError;

///
/// Retrieves whether the union's current tag state has value PermissionDeniedError.
///
/// @note Call this method and ensure it returns true before accessing the permissionDeniedError
/// property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value PermissionDeniedError.
///
- (BOOL)isPermissionDeniedError;

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
/// The serialization class for the DBSHARINGFileErrorResult union.
///
@interface DBSHARINGFileErrorResultSerializer : NSObject

///
/// Serializes DBSHARINGFileErrorResult instances.
///
/// @param instance An instance of the DBSHARINGFileErrorResult API object.
///
/// @return A json-compatible dictionary representation of the DBSHARINGFileErrorResult API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGFileErrorResult * _Nonnull)instance;

///
/// Deserializes DBSHARINGFileErrorResult instances.
///
/// @param dict A json-compatible dictionary representation of the DBSHARINGFileErrorResult API
/// object.
///
/// @return An instantiation of the DBSHARINGFileErrorResult object.
///
+ (DBSHARINGFileErrorResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
