///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMGroupDeleteError;

#pragma mark - API Object

///
/// The GroupDeleteError union.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMGroupDeleteError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBTEAMGroupDeleteErrorTag enum type represents the possible tag states with which the
/// DBTEAMGroupDeleteError union can exist.
typedef NS_ENUM(NSInteger, DBTEAMGroupDeleteErrorTag) {
  /// No matching group found. No groups match the specified group ID.
  DBTEAMGroupDeleteErrorGroupNotFound,

  /// (no description).
  DBTEAMGroupDeleteErrorOther,

  /// This group has already been deleted.
  DBTEAMGroupDeleteErrorGroupAlreadyDeleted,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMGroupDeleteErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of GroupNotFound.
///
/// About the GroupNotFound tag state: No matching group found. No groups match the specified group
/// ID.
///
/// @return An initialized DBTEAMGroupDeleteError instance.
///
- (nonnull instancetype)initWithGroupNotFound;

///
/// Initializes union class with tag state of Other.
///
/// @return An initialized DBTEAMGroupDeleteError instance.
///
- (nonnull instancetype)initWithOther;

///
/// Initializes union class with tag state of GroupAlreadyDeleted.
///
/// About the GroupAlreadyDeleted tag state: This group has already been deleted.
///
/// @return An initialized DBTEAMGroupDeleteError instance.
///
- (nonnull instancetype)initWithGroupAlreadyDeleted;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value GroupNotFound.
///
/// @return Whether the union's current tag state has value GroupNotFound.
///
- (BOOL)isGroupNotFound;

///
/// Retrieves whether the union's current tag state has value Other.
///
/// @return Whether the union's current tag state has value Other.
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value GroupAlreadyDeleted.
///
/// @return Whether the union's current tag state has value GroupAlreadyDeleted.
///
- (BOOL)isGroupAlreadyDeleted;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the DBTEAMGroupDeleteError union.
///
@interface DBTEAMGroupDeleteErrorSerializer : NSObject

///
/// Serializes DBTEAMGroupDeleteError instances.
///
/// @param instance An instance of the DBTEAMGroupDeleteError API object.
///
/// @return A json-compatible dictionary representation of the DBTEAMGroupDeleteError API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMGroupDeleteError * _Nonnull)instance;

///
/// Deserializes DBTEAMGroupDeleteError instances.
///
/// @param dict A json-compatible dictionary representation of the DBTEAMGroupDeleteError API
/// object.
///
/// @return An instantiation of the DBTEAMGroupDeleteError object.
///
+ (DBTEAMGroupDeleteError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
