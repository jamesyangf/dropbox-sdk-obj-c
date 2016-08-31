///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import "DBUSERSTeam.h"
#import <Foundation/Foundation.h>

@class DBTEAMPOLICIESTeamSharingPolicies;
@class DBUSERSFullTeam;

#pragma mark - API Object

///
/// The FullTeam struct.
///
/// Detailed information about a team.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBUSERSFullTeam : DBUSERSTeam <DBSerializable>

#pragma mark - Instance fields

/// Team policies governing sharing.
@property(nonatomic, readonly) DBTEAMPOLICIESTeamSharingPolicies * _Nonnull sharingPolicies;

#pragma mark - Constructors

///
/// Full constructor for the DBUSERSFullTeam struct (exposes all instance variables).
///
/// @param id_ The team's unique ID.
/// @param name The name of the team.
/// @param sharingPolicies Team policies governing sharing.
///
/// @return An initialized DBUSERSFullTeam instance.
///
- (nonnull instancetype)initWithId_:(NSString * _Nonnull)id_
                               name:(NSString * _Nonnull)name
                    sharingPolicies:(DBTEAMPOLICIESTeamSharingPolicies * _Nonnull)sharingPolicies;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the FullTeam struct.
///
@interface DBUSERSFullTeamSerializer : NSObject

///
/// Serializes DBUSERSFullTeam instances.
///
/// @param instance An instance of the DBUSERSFullTeam API object.
///
/// @return A json-compatible dictionary representation of the DBUSERSFullTeam API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBUSERSFullTeam * _Nonnull)instance;

///
/// Deserializes DBUSERSFullTeam instances.
///
/// @param dict A json-compatible dictionary representation of the DBUSERSFullTeam API object.
///
/// @return An instantiation of the DBUSERSFullTeam object.
///
+ (DBUSERSFullTeam * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
