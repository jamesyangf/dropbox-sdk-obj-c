///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBAUTHRateLimitError;
@class DBAUTHRateLimitReason;

#pragma mark - API Object

///
/// The RateLimitError struct.
///
/// Error occurred because the app is being rate limited.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBAUTHRateLimitError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The reason why the app is being rate limited.
@property(nonatomic, readonly) DBAUTHRateLimitReason * _Nonnull reason;

/// The number of seconds that the app should wait before making another request.
@property(nonatomic, readonly, copy) NSNumber * _Nonnull retryAfter;

#pragma mark - Constructors

///
/// Full constructor for the DBAUTHRateLimitError struct (exposes all instance variables).
///
/// @param reason The reason why the app is being rate limited.
/// @param retryAfter The number of seconds that the app should wait before making another request.
///
/// @return An initialized DBAUTHRateLimitError instance.
///
- (nonnull instancetype)initWithReason:(DBAUTHRateLimitReason * _Nonnull)reason
                            retryAfter:(NSNumber * _Nullable)retryAfter;

///
/// Convenience constructor for the DBAUTHRateLimitError struct (exposes only non-nullable instance
/// variables with no default value).
///
/// @param reason The reason why the app is being rate limited.
///
/// @return An initialized DBAUTHRateLimitError instance.
///
- (nonnull instancetype)initWithReason:(DBAUTHRateLimitReason * _Nonnull)reason;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the RateLimitError struct.
///
@interface DBAUTHRateLimitErrorSerializer : NSObject

///
/// Serializes DBAUTHRateLimitError instances.
///
/// @param instance An instance of the DBAUTHRateLimitError API object.
///
/// @return A json-compatible dictionary representation of the DBAUTHRateLimitError API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBAUTHRateLimitError * _Nonnull)instance;

///
/// Deserializes DBAUTHRateLimitError instances.
///
/// @param dict A json-compatible dictionary representation of the DBAUTHRateLimitError API object.
///
/// @return An instantiation of the DBAUTHRateLimitError object.
///
+ (DBAUTHRateLimitError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
