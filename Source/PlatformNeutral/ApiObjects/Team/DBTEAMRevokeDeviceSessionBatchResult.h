///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMRevokeDeviceSessionBatchResult;
@class DBTEAMRevokeDeviceSessionStatus;

#pragma mark - API Object

///
/// The RevokeDeviceSessionBatchResult struct.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMRevokeDeviceSessionBatchResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// (no description).
@property(nonatomic, readonly) NSArray<DBTEAMRevokeDeviceSessionStatus *> * _Nonnull revokeDevicesStatus;

#pragma mark - Constructors

///
/// Full constructor for the DBTEAMRevokeDeviceSessionBatchResult struct (exposes all instance
/// variables).
///
/// @param revokeDevicesStatus (no description).
///
/// @return An initialized DBTEAMRevokeDeviceSessionBatchResult instance.
///
- (nonnull instancetype)initWithRevokeDevicesStatus:
    (NSArray<DBTEAMRevokeDeviceSessionStatus *> * _Nonnull)revokeDevicesStatus;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the RevokeDeviceSessionBatchResult struct.
///
@interface DBTEAMRevokeDeviceSessionBatchResultSerializer : NSObject

///
/// Serializes DBTEAMRevokeDeviceSessionBatchResult instances.
///
/// @param instance An instance of the DBTEAMRevokeDeviceSessionBatchResult API object.
///
/// @return A json-compatible dictionary representation of the DBTEAMRevokeDeviceSessionBatchResult
/// API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMRevokeDeviceSessionBatchResult * _Nonnull)instance;

///
/// Deserializes DBTEAMRevokeDeviceSessionBatchResult instances.
///
/// @param dict A json-compatible dictionary representation of the
/// DBTEAMRevokeDeviceSessionBatchResult API object.
///
/// @return An instantiation of the DBTEAMRevokeDeviceSessionBatchResult object.
///
+ (DBTEAMRevokeDeviceSessionBatchResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
