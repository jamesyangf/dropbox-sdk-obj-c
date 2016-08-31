///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMListTeamDevicesError;

#pragma mark - API Object

///
/// The ListTeamDevicesError union.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMListTeamDevicesError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBTEAMListTeamDevicesErrorTag enum type represents the possible tag states with which the
/// DBTEAMListTeamDevicesError union can exist.
typedef NS_ENUM(NSInteger, DBTEAMListTeamDevicesErrorTag) {
  /// Indicates that the cursor has been invalidated. Call devicesListTeamDevices again with an
  /// empty cursor to obtain a new cursor.
  DBTEAMListTeamDevicesErrorReset,

  /// (no description).
  DBTEAMListTeamDevicesErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMListTeamDevicesErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of Reset.
///
/// About the Reset tag state: Indicates that the cursor has been invalidated. Call
/// :route:`devices/list_team_devices` again with an empty cursor to obtain a new cursor.
///
/// @return An initialized DBTEAMListTeamDevicesError instance.
///
- (nonnull instancetype)initWithReset;

///
/// Initializes union class with tag state of Other.
///
/// @return An initialized DBTEAMListTeamDevicesError instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value Reset.
///
/// @return Whether the union's current tag state has value Reset.
///
- (BOOL)isReset;

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
/// The serialization class for the DBTEAMListTeamDevicesError union.
///
@interface DBTEAMListTeamDevicesErrorSerializer : NSObject

///
/// Serializes DBTEAMListTeamDevicesError instances.
///
/// @param instance An instance of the DBTEAMListTeamDevicesError API object.
///
/// @return A json-compatible dictionary representation of the DBTEAMListTeamDevicesError API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMListTeamDevicesError * _Nonnull)instance;

///
/// Deserializes DBTEAMListTeamDevicesError instances.
///
/// @param dict A json-compatible dictionary representation of the DBTEAMListTeamDevicesError API
/// object.
///
/// @return An instantiation of the DBTEAMListTeamDevicesError object.
///
+ (DBTEAMListTeamDevicesError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
