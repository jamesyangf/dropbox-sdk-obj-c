///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMUsersSelectorArg;

#pragma mark - API Object

///
/// The UsersSelectorArg union.
///
/// Argument for selecting a list of users, either by team_member_ids, external_ids or emails.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMUsersSelectorArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBTEAMUsersSelectorArgTag enum type represents the possible tag states with which the
/// DBTEAMUsersSelectorArg union can exist.
typedef NS_ENUM(NSInteger, DBTEAMUsersSelectorArgTag) {
  /// List of member IDs.
  DBTEAMUsersSelectorArgTeamMemberIds,

  /// List of external user IDs.
  DBTEAMUsersSelectorArgExternalIds,

  /// List of email addresses.
  DBTEAMUsersSelectorArgEmails,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMUsersSelectorArgTag tag;

/// List of member IDs. Ensure the isTeamMemberIds method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property(nonatomic, readonly) NSArray<NSString *> * _Nonnull teamMemberIds;

/// List of external user IDs. Ensure the isExternalIds method returns true before accessing,
/// otherwise a runtime exception will be raised.
@property(nonatomic, readonly) NSArray<NSString *> * _Nonnull externalIds;

/// List of email addresses. Ensure the isEmails method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property(nonatomic, readonly) NSArray<NSString *> * _Nonnull emails;

#pragma mark - Constructors

///
/// Initializes union class with tag state of TeamMemberIds.
///
/// About the TeamMemberIds tag state: List of member IDs.
///
/// @param teamMemberIds List of member IDs.
///
/// @return An initialized DBTEAMUsersSelectorArg instance.
///
- (nonnull instancetype)initWithTeamMemberIds:(NSArray<NSString *> * _Nonnull)teamMemberIds;

///
/// Initializes union class with tag state of ExternalIds.
///
/// About the ExternalIds tag state: List of external user IDs.
///
/// @param externalIds List of external user IDs.
///
/// @return An initialized DBTEAMUsersSelectorArg instance.
///
- (nonnull instancetype)initWithExternalIds:(NSArray<NSString *> * _Nonnull)externalIds;

///
/// Initializes union class with tag state of Emails.
///
/// About the Emails tag state: List of email addresses.
///
/// @param emails List of email addresses.
///
/// @return An initialized DBTEAMUsersSelectorArg instance.
///
- (nonnull instancetype)initWithEmails:(NSArray<NSString *> * _Nonnull)emails;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value TeamMemberIds.
///
/// @note Call this method and ensure it returns true before accessing the teamMemberIds property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value TeamMemberIds.
///
- (BOOL)isTeamMemberIds;

///
/// Retrieves whether the union's current tag state has value ExternalIds.
///
/// @note Call this method and ensure it returns true before accessing the externalIds property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value ExternalIds.
///
- (BOOL)isExternalIds;

///
/// Retrieves whether the union's current tag state has value Emails.
///
/// @note Call this method and ensure it returns true before accessing the emails property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value Emails.
///
- (BOOL)isEmails;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the DBTEAMUsersSelectorArg union.
///
@interface DBTEAMUsersSelectorArgSerializer : NSObject

///
/// Serializes DBTEAMUsersSelectorArg instances.
///
/// @param instance An instance of the DBTEAMUsersSelectorArg API object.
///
/// @return A json-compatible dictionary representation of the DBTEAMUsersSelectorArg API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMUsersSelectorArg * _Nonnull)instance;

///
/// Deserializes DBTEAMUsersSelectorArg instances.
///
/// @param dict A json-compatible dictionary representation of the DBTEAMUsersSelectorArg API
/// object.
///
/// @return An instantiation of the DBTEAMUsersSelectorArg object.
///
+ (DBTEAMUsersSelectorArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
