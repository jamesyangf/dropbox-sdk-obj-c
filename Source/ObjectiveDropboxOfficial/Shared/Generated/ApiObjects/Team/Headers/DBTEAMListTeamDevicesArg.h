///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMListTeamDevicesArg;

#pragma mark - API Object

///
/// The `ListTeamDevicesArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMListTeamDevicesArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// At the first call to the `devicesListTeamDevices` the cursor shouldn't be
/// passed. Then, if the result of the call includes a cursor, the following
/// requests should include the received cursors in order to receive the next
/// sub list of team devices
@property (nonatomic, readonly, copy) NSString * _Nullable cursor;

/// Whether to list web sessions of the team members
@property (nonatomic, readonly) NSNumber * _Nonnull includeWebSessions;

/// Whether to list desktop clients of the team members
@property (nonatomic, readonly) NSNumber * _Nonnull includeDesktopClients;

/// Whether to list mobile clients of the team members
@property (nonatomic, readonly) NSNumber * _Nonnull includeMobileClients;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param cursor At the first call to the `devicesListTeamDevices` the cursor
/// shouldn't be passed. Then, if the result of the call includes a cursor, the
/// following requests should include the received cursors in order to receive
/// the next sub list of team devices
/// @param includeWebSessions Whether to list web sessions of the team members
/// @param includeDesktopClients Whether to list desktop clients of the team
/// members
/// @param includeMobileClients Whether to list mobile clients of the team
/// members
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithCursor:(NSString * _Nullable)cursor
                    includeWebSessions:(NSNumber * _Nullable)includeWebSessions
                 includeDesktopClients:(NSNumber * _Nullable)includeDesktopClients
                  includeMobileClients:(NSNumber * _Nullable)includeMobileClients;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (nonnull instancetype)initDefault;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListTeamDevicesArg` struct.
///
@interface DBTEAMListTeamDevicesArgSerializer : NSObject

///
/// Serializes `DBTEAMListTeamDevicesArg` instances.
///
/// @param instance An instance of the `DBTEAMListTeamDevicesArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMListTeamDevicesArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMListTeamDevicesArg * _Nonnull)instance;

///
/// Deserializes `DBTEAMListTeamDevicesArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMListTeamDevicesArg` API object.
///
/// @return An instantiation of the `DBTEAMListTeamDevicesArg` object.
///
+ (DBTEAMListTeamDevicesArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
