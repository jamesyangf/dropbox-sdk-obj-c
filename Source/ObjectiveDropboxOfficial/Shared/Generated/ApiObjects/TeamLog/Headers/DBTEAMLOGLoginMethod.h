///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGLoginMethod;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LoginMethod` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGLoginMethod : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGLoginMethodTag` enum type represents the possible tag states
/// with which the `DBTEAMLOGLoginMethod` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGLoginMethodTag) {
  /// (no description).
  DBTEAMLOGLoginMethodPassword,

  /// (no description).
  DBTEAMLOGLoginMethodTwoFactorAuthentication,

  /// (no description).
  DBTEAMLOGLoginMethodSaml,

  /// (no description).
  DBTEAMLOGLoginMethodGoogleOauth,

  /// (no description).
  DBTEAMLOGLoginMethodWebSession,

  /// (no description).
  DBTEAMLOGLoginMethodQrCode,

  /// (no description).
  DBTEAMLOGLoginMethodAppleOauth,

  /// (no description).
  DBTEAMLOGLoginMethodFirstPartyTokenExchange,

  /// (no description).
  DBTEAMLOGLoginMethodOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGLoginMethodTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "password".
///
/// @return An initialized instance.
///
- (instancetype)initWithPassword;

///
/// Initializes union class with tag state of "two_factor_authentication".
///
/// @return An initialized instance.
///
- (instancetype)initWithTwoFactorAuthentication;

///
/// Initializes union class with tag state of "saml".
///
/// @return An initialized instance.
///
- (instancetype)initWithSaml;

///
/// Initializes union class with tag state of "google_oauth".
///
/// @return An initialized instance.
///
- (instancetype)initWithGoogleOauth;

///
/// Initializes union class with tag state of "web_session".
///
/// @return An initialized instance.
///
- (instancetype)initWithWebSession;

///
/// Initializes union class with tag state of "qr_code".
///
/// @return An initialized instance.
///
- (instancetype)initWithQrCode;

///
/// Initializes union class with tag state of "apple_oauth".
///
/// @return An initialized instance.
///
- (instancetype)initWithAppleOauth;

///
/// Initializes union class with tag state of "first_party_token_exchange".
///
/// @return An initialized instance.
///
- (instancetype)initWithFirstPartyTokenExchange;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "password".
///
/// @return Whether the union's current tag state has value "password".
///
- (BOOL)isPassword;

///
/// Retrieves whether the union's current tag state has value
/// "two_factor_authentication".
///
/// @return Whether the union's current tag state has value
/// "two_factor_authentication".
///
- (BOOL)isTwoFactorAuthentication;

///
/// Retrieves whether the union's current tag state has value "saml".
///
/// @return Whether the union's current tag state has value "saml".
///
- (BOOL)isSaml;

///
/// Retrieves whether the union's current tag state has value "google_oauth".
///
/// @return Whether the union's current tag state has value "google_oauth".
///
- (BOOL)isGoogleOauth;

///
/// Retrieves whether the union's current tag state has value "web_session".
///
/// @return Whether the union's current tag state has value "web_session".
///
- (BOOL)isWebSession;

///
/// Retrieves whether the union's current tag state has value "qr_code".
///
/// @return Whether the union's current tag state has value "qr_code".
///
- (BOOL)isQrCode;

///
/// Retrieves whether the union's current tag state has value "apple_oauth".
///
/// @return Whether the union's current tag state has value "apple_oauth".
///
- (BOOL)isAppleOauth;

///
/// Retrieves whether the union's current tag state has value
/// "first_party_token_exchange".
///
/// @return Whether the union's current tag state has value
/// "first_party_token_exchange".
///
- (BOOL)isFirstPartyTokenExchange;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGLoginMethod` union.
///
@interface DBTEAMLOGLoginMethodSerializer : NSObject

///
/// Serializes `DBTEAMLOGLoginMethod` instances.
///
/// @param instance An instance of the `DBTEAMLOGLoginMethod` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGLoginMethod` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGLoginMethod *)instance;

///
/// Deserializes `DBTEAMLOGLoginMethod` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGLoginMethod` API object.
///
/// @return An instantiation of the `DBTEAMLOGLoginMethod` object.
///
+ (DBTEAMLOGLoginMethod *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
