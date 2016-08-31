///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMListMembersAppsResult;
@class DBTEAMMemberLinkedApps;

#pragma mark - API Object

///
/// The ListMembersAppsResult struct.
///
/// Information returned by linkedAppsListMembersLinkedApps.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMListMembersAppsResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The linked applications of each member of the team
@property(nonatomic, readonly) NSArray<DBTEAMMemberLinkedApps *> * _Nonnull apps;

/// If true, then there are more apps available. Pass the cursor to linkedAppsListMembersLinkedApps
/// to retrieve the rest.
@property(nonatomic, readonly, copy) NSNumber * _Nonnull hasMore;

/// Pass the cursor into linkedAppsListMembersLinkedApps to receive the next sub list of team's
/// applications.
@property(nonatomic, readonly, copy) NSString * _Nullable cursor;

#pragma mark - Constructors

///
/// Full constructor for the DBTEAMListMembersAppsResult struct (exposes all instance variables).
///
/// @param apps The linked applications of each member of the team
/// @param hasMore If true, then there are more apps available. Pass the cursor to
/// :route:`linked_apps/list_members_linked_apps` to retrieve the rest.
/// @param cursor Pass the cursor into :route:`linked_apps/list_members_linked_apps` to receive the
/// next sub list of team's applications.
///
/// @return An initialized DBTEAMListMembersAppsResult instance.
///
- (nonnull instancetype)initWithApps:(NSArray<DBTEAMMemberLinkedApps *> * _Nonnull)apps
                             hasMore:(NSNumber * _Nonnull)hasMore
                              cursor:(NSString * _Nullable)cursor;

///
/// Convenience constructor for the DBTEAMListMembersAppsResult struct (exposes only non-nullable
/// instance variables with no default value).
///
/// @param apps The linked applications of each member of the team
/// @param hasMore If true, then there are more apps available. Pass the cursor to
/// :route:`linked_apps/list_members_linked_apps` to retrieve the rest.
///
/// @return An initialized DBTEAMListMembersAppsResult instance.
///
- (nonnull instancetype)initWithApps:(NSArray<DBTEAMMemberLinkedApps *> * _Nonnull)apps
                             hasMore:(NSNumber * _Nonnull)hasMore;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the ListMembersAppsResult struct.
///
@interface DBTEAMListMembersAppsResultSerializer : NSObject

///
/// Serializes DBTEAMListMembersAppsResult instances.
///
/// @param instance An instance of the DBTEAMListMembersAppsResult API object.
///
/// @return A json-compatible dictionary representation of the DBTEAMListMembersAppsResult API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMListMembersAppsResult * _Nonnull)instance;

///
/// Deserializes DBTEAMListMembersAppsResult instances.
///
/// @param dict A json-compatible dictionary representation of the DBTEAMListMembersAppsResult API
/// object.
///
/// @return An instantiation of the DBTEAMListMembersAppsResult object.
///
+ (DBTEAMListMembersAppsResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
