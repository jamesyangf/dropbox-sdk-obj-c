///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGFilePermission;
@class DBSHARINGFolderPolicy;
@class DBSHARINGSharedFileMetadata;
@class DBUSERSTeam;

#pragma mark - API Object

///
/// The SharedFileMetadata struct.
///
/// Properties of the shared file.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGSharedFileMetadata : NSObject <DBSerializable>

#pragma mark - Instance fields

/// Policies governing this shared file.
@property(nonatomic, readonly) DBSHARINGFolderPolicy * _Nonnull policy;

/// The sharing permissions that requesting user has on this file. This corresponds to the entries
/// given in actions in GetFileMetadataBatchArg or actions in GetFileMetadataArg.
@property(nonatomic, readonly) NSArray<DBSHARINGFilePermission *> * _Nullable permissions;

/// The team that owns the file. This field is not present if the file is not owned by a team.
@property(nonatomic, readonly) DBUSERSTeam * _Nullable ownerTeam;

/// The ID of the parent shared folder. This field is present only if the file is contained within a
/// shared folder.
@property(nonatomic, readonly, copy) NSString * _Nullable parentSharedFolderId;

/// URL for displaying a web preview of the shared file.
@property(nonatomic, readonly, copy) NSString * _Nonnull previewUrl;

/// The lower-case full path of this file. Absent for unmounted files.
@property(nonatomic, readonly, copy) NSString * _Nullable pathLower;

/// The cased path to be used for display purposes only. In rare instances the casing will not
/// correctly match the user's filesystem, but this behavior will match the path provided in the
/// Core API v1. Absent for unmounted files.
@property(nonatomic, readonly, copy) NSString * _Nullable pathDisplay;

/// The name of this file.
@property(nonatomic, readonly, copy) NSString * _Nonnull name;

/// The ID of the file.
@property(nonatomic, readonly, copy) NSString * _Nonnull id_;

#pragma mark - Constructors

///
/// Full constructor for the DBSHARINGSharedFileMetadata struct (exposes all instance variables).
///
/// @param policy Policies governing this shared file.
/// @param previewUrl URL for displaying a web preview of the shared file.
/// @param name The name of this file.
/// @param id_ The ID of the file.
/// @param permissions The sharing permissions that requesting user has on this file. This
/// corresponds to the entries given in :field:`GetFileMetadataBatchArg.actions` or
/// :field:`GetFileMetadataArg.actions`.
/// @param ownerTeam The team that owns the file. This field is not present if the file is not owned
/// by a team.
/// @param parentSharedFolderId The ID of the parent shared folder. This field is present only if
/// the file is contained within a shared folder.
/// @param pathLower The lower-case full path of this file. Absent for unmounted files.
/// @param pathDisplay The cased path to be used for display purposes only. In rare instances the
/// casing will not correctly match the user's filesystem, but this behavior will match the path
/// provided in the Core API v1. Absent for unmounted files.
///
/// @return An initialized DBSHARINGSharedFileMetadata instance.
///
- (nonnull instancetype)initWithPolicy:(DBSHARINGFolderPolicy * _Nonnull)policy
                            previewUrl:(NSString * _Nonnull)previewUrl
                                  name:(NSString * _Nonnull)name
                                   id_:(NSString * _Nonnull)id_
                           permissions:(NSArray<DBSHARINGFilePermission *> * _Nullable)permissions
                             ownerTeam:(DBUSERSTeam * _Nullable)ownerTeam
                  parentSharedFolderId:(NSString * _Nullable)parentSharedFolderId
                             pathLower:(NSString * _Nullable)pathLower
                           pathDisplay:(NSString * _Nullable)pathDisplay;

///
/// Convenience constructor for the DBSHARINGSharedFileMetadata struct (exposes only non-nullable
/// instance variables with no default value).
///
/// @param policy Policies governing this shared file.
/// @param previewUrl URL for displaying a web preview of the shared file.
/// @param name The name of this file.
/// @param id_ The ID of the file.
///
/// @return An initialized DBSHARINGSharedFileMetadata instance.
///
- (nonnull instancetype)initWithPolicy:(DBSHARINGFolderPolicy * _Nonnull)policy
                            previewUrl:(NSString * _Nonnull)previewUrl
                                  name:(NSString * _Nonnull)name
                                   id_:(NSString * _Nonnull)id_;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the SharedFileMetadata struct.
///
@interface DBSHARINGSharedFileMetadataSerializer : NSObject

///
/// Serializes DBSHARINGSharedFileMetadata instances.
///
/// @param instance An instance of the DBSHARINGSharedFileMetadata API object.
///
/// @return A json-compatible dictionary representation of the DBSHARINGSharedFileMetadata API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGSharedFileMetadata * _Nonnull)instance;

///
/// Deserializes DBSHARINGSharedFileMetadata instances.
///
/// @param dict A json-compatible dictionary representation of the DBSHARINGSharedFileMetadata API
/// object.
///
/// @return An instantiation of the DBSHARINGSharedFileMetadata object.
///
+ (DBSHARINGSharedFileMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
