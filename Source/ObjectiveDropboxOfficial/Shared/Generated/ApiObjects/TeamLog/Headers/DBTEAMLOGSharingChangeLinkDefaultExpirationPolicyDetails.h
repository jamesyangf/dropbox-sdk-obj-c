///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDefaultLinkExpirationDaysPolicy;
@class DBTEAMLOGSharingChangeLinkDefaultExpirationPolicyDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharingChangeLinkDefaultExpirationPolicyDetails` struct.
///
/// Changed the default expiration for the links shared outside of the team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharingChangeLinkDefaultExpirationPolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// To.
@property (nonatomic, readonly) DBTEAMLOGDefaultLinkExpirationDaysPolicy *dNewValue;

/// From.
@property (nonatomic, readonly, nullable) DBTEAMLOGDefaultLinkExpirationDaysPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue To.
/// @param previousValue From.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGDefaultLinkExpirationDaysPolicy *)dNewValue
                    previousValue:(nullable DBTEAMLOGDefaultLinkExpirationDaysPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue To.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGDefaultLinkExpirationDaysPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the
/// `SharingChangeLinkDefaultExpirationPolicyDetails` struct.
///
@interface DBTEAMLOGSharingChangeLinkDefaultExpirationPolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharingChangeLinkDefaultExpirationPolicyDetails`
/// instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharingChangeLinkDefaultExpirationPolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharingChangeLinkDefaultExpirationPolicyDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:
    (DBTEAMLOGSharingChangeLinkDefaultExpirationPolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharingChangeLinkDefaultExpirationPolicyDetails`
/// instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharingChangeLinkDefaultExpirationPolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharingChangeLinkDefaultExpirationPolicyDetails` object.
///
+ (DBTEAMLOGSharingChangeLinkDefaultExpirationPolicyDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END