///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBFILESCommitInfo;
@class DBFILESWriteMode;

#pragma mark - API Object

///
/// The CommitInfo struct.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBFILESCommitInfo : NSObject <DBSerializable>

#pragma mark - Instance fields

/// Path in the user's Dropbox to save the file.
@property(nonatomic, readonly, copy) NSString * _Nonnull path;

/// Selects what to do if the file already exists.
@property(nonatomic, readonly) DBFILESWriteMode * _Nonnull mode;

/// If there's a conflict, as determined by mode, have the Dropbox server try to autorename the file
/// to avoid conflict.
@property(nonatomic, readonly, copy) NSNumber * _Nonnull autorename;

/// The value to store as the clientModified timestamp. Dropbox automatically records the time at
/// which the file was written to the Dropbox servers. It can also record an additional timestamp,
/// provided by Dropbox desktop clients, mobile clients, and API apps of when the file was actually
/// created or modified.
@property(nonatomic, readonly) NSDate * _Nullable clientModified;

/// Normally, users are made aware of any file modifications in their Dropbox account via
/// notifications in the client software. If true, this tells the clients that this modification
/// shouldn't result in a user notification.
@property(nonatomic, readonly, copy) NSNumber * _Nonnull mute;

#pragma mark - Constructors

///
/// Full constructor for the DBFILESCommitInfo struct (exposes all instance variables).
///
/// @param path Path in the user's Dropbox to save the file.
/// @param mode Selects what to do if the file already exists.
/// @param autorename If there's a conflict, as determined by :field:`mode`, have the Dropbox server
/// try to autorename the file to avoid conflict.
/// @param clientModified The value to store as the :field:`client_modified` timestamp. Dropbox
/// automatically records the time at which the file was written to the Dropbox servers. It can also
/// record an additional timestamp, provided by Dropbox desktop clients, mobile clients, and API
/// apps of when the file was actually created or modified.
/// @param mute Normally, users are made aware of any file modifications in their Dropbox account
/// via notifications in the client software. If :val:`true`, this tells the clients that this
/// modification shouldn't result in a user notification.
///
/// @return An initialized DBFILESCommitInfo instance.
///
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path
                                mode:(DBFILESWriteMode * _Nullable)mode
                          autorename:(NSNumber * _Nullable)autorename
                      clientModified:(NSDate * _Nullable)clientModified
                                mute:(NSNumber * _Nullable)mute;

///
/// Convenience constructor for the DBFILESCommitInfo struct (exposes only non-nullable instance
/// variables with no default value).
///
/// @param path Path in the user's Dropbox to save the file.
///
/// @return An initialized DBFILESCommitInfo instance.
///
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the CommitInfo struct.
///
@interface DBFILESCommitInfoSerializer : NSObject

///
/// Serializes DBFILESCommitInfo instances.
///
/// @param instance An instance of the DBFILESCommitInfo API object.
///
/// @return A json-compatible dictionary representation of the DBFILESCommitInfo API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESCommitInfo * _Nonnull)instance;

///
/// Deserializes DBFILESCommitInfo instances.
///
/// @param dict A json-compatible dictionary representation of the DBFILESCommitInfo API object.
///
/// @return An instantiation of the DBFILESCommitInfo object.
///
+ (DBFILESCommitInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
