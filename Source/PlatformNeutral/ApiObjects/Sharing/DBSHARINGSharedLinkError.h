///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGSharedLinkError;

#pragma mark - API Object

///
/// The SharedLinkError union.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGSharedLinkError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBSHARINGSharedLinkErrorTag enum type represents the possible tag states with which the
/// DBSHARINGSharedLinkError union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGSharedLinkErrorTag) {
  /// The shared link wasn't found
  DBSHARINGSharedLinkErrorSharedLinkNotFound,

  /// The caller is not allowed to access this shared link
  DBSHARINGSharedLinkErrorSharedLinkAccessDenied,

  /// (no description).
  DBSHARINGSharedLinkErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGSharedLinkErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of SharedLinkNotFound.
///
/// About the SharedLinkNotFound tag state: The shared link wasn't found
///
/// @return An initialized DBSHARINGSharedLinkError instance.
///
- (nonnull instancetype)initWithSharedLinkNotFound;

///
/// Initializes union class with tag state of SharedLinkAccessDenied.
///
/// About the SharedLinkAccessDenied tag state: The caller is not allowed to access this shared link
///
/// @return An initialized DBSHARINGSharedLinkError instance.
///
- (nonnull instancetype)initWithSharedLinkAccessDenied;

///
/// Initializes union class with tag state of Other.
///
/// @return An initialized DBSHARINGSharedLinkError instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value SharedLinkNotFound.
///
/// @return Whether the union's current tag state has value SharedLinkNotFound.
///
- (BOOL)isSharedLinkNotFound;

///
/// Retrieves whether the union's current tag state has value SharedLinkAccessDenied.
///
/// @return Whether the union's current tag state has value SharedLinkAccessDenied.
///
- (BOOL)isSharedLinkAccessDenied;

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
/// The serialization class for the DBSHARINGSharedLinkError union.
///
@interface DBSHARINGSharedLinkErrorSerializer : NSObject

///
/// Serializes DBSHARINGSharedLinkError instances.
///
/// @param instance An instance of the DBSHARINGSharedLinkError API object.
///
/// @return A json-compatible dictionary representation of the DBSHARINGSharedLinkError API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGSharedLinkError * _Nonnull)instance;

///
/// Deserializes DBSHARINGSharedLinkError instances.
///
/// @param dict A json-compatible dictionary representation of the DBSHARINGSharedLinkError API
/// object.
///
/// @return An instantiation of the DBSHARINGSharedLinkError object.
///
+ (DBSHARINGSharedLinkError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
