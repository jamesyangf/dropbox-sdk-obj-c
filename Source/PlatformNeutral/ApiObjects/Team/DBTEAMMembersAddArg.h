///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMMemberAddArg;
@class DBTEAMMembersAddArg;

#pragma mark - API Object

///
/// The MembersAddArg struct.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMMembersAddArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// Details of new members to be added to the team.
@property(nonatomic, readonly) NSArray<DBTEAMMemberAddArg *> * _Nonnull dNewMembers;

/// Whether to force the add to happen asynchronously.
@property(nonatomic, readonly, copy) NSNumber * _Nonnull forceAsync;

#pragma mark - Constructors

///
/// Full constructor for the DBTEAMMembersAddArg struct (exposes all instance variables).
///
/// @param dNewMembers Details of new members to be added to the team.
/// @param forceAsync Whether to force the add to happen asynchronously.
///
/// @return An initialized DBTEAMMembersAddArg instance.
///
- (nonnull instancetype)initWithDNewMembers:(NSArray<DBTEAMMemberAddArg *> * _Nonnull)dNewMembers
                                 forceAsync:(NSNumber * _Nullable)forceAsync;

///
/// Convenience constructor for the DBTEAMMembersAddArg struct (exposes only non-nullable instance
/// variables with no default value).
///
/// @param dNewMembers Details of new members to be added to the team.
///
/// @return An initialized DBTEAMMembersAddArg instance.
///
- (nonnull instancetype)initWithDNewMembers:(NSArray<DBTEAMMemberAddArg *> * _Nonnull)dNewMembers;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the MembersAddArg struct.
///
@interface DBTEAMMembersAddArgSerializer : NSObject

///
/// Serializes DBTEAMMembersAddArg instances.
///
/// @param instance An instance of the DBTEAMMembersAddArg API object.
///
/// @return A json-compatible dictionary representation of the DBTEAMMembersAddArg API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMMembersAddArg * _Nonnull)instance;

///
/// Deserializes DBTEAMMembersAddArg instances.
///
/// @param dict A json-compatible dictionary representation of the DBTEAMMembersAddArg API object.
///
/// @return An instantiation of the DBTEAMMembersAddArg object.
///
+ (DBTEAMMembersAddArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
