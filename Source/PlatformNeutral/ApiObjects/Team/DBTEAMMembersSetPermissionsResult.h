///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMAdminTier;
@class DBTEAMMembersSetPermissionsResult;

#pragma mark - API Object

///
/// The MembersSetPermissionsResult struct.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMMembersSetPermissionsResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The member ID of the user to which the change was applied.
@property(nonatomic, readonly, copy) NSString * _Nonnull teamMemberId;

/// The role after the change.
@property(nonatomic, readonly) DBTEAMAdminTier * _Nonnull role;

#pragma mark - Constructors

///
/// Full constructor for the DBTEAMMembersSetPermissionsResult struct (exposes all instance
/// variables).
///
/// @param teamMemberId The member ID of the user to which the change was applied.
/// @param role The role after the change.
///
/// @return An initialized DBTEAMMembersSetPermissionsResult instance.
///
- (nonnull instancetype)initWithTeamMemberId:(NSString * _Nonnull)teamMemberId role:(DBTEAMAdminTier * _Nonnull)role;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the MembersSetPermissionsResult struct.
///
@interface DBTEAMMembersSetPermissionsResultSerializer : NSObject

///
/// Serializes DBTEAMMembersSetPermissionsResult instances.
///
/// @param instance An instance of the DBTEAMMembersSetPermissionsResult API object.
///
/// @return A json-compatible dictionary representation of the DBTEAMMembersSetPermissionsResult API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMMembersSetPermissionsResult * _Nonnull)instance;

///
/// Deserializes DBTEAMMembersSetPermissionsResult instances.
///
/// @param dict A json-compatible dictionary representation of the DBTEAMMembersSetPermissionsResult
/// API object.
///
/// @return An instantiation of the DBTEAMMembersSetPermissionsResult object.
///
+ (DBTEAMMembersSetPermissionsResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
