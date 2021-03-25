///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGNamespaceRelativePathLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `NamespaceRelativePathLogInfo` struct.
///
/// Namespace relative path details.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGNamespaceRelativePathLogInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Namespace ID.
@property (nonatomic, readonly, copy, nullable) NSString *nsId;

/// A path relative to the specified namespace ID.
@property (nonatomic, readonly, copy, nullable) NSString *relativePath;

/// True if the namespace is shared.
@property (nonatomic, readonly, nullable) NSNumber *isSharedNamespace;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param nsId Namespace ID.
/// @param relativePath A path relative to the specified namespace ID.
/// @param isSharedNamespace True if the namespace is shared.
///
/// @return An initialized instance.
///
- (instancetype)initWithNsId:(nullable NSString *)nsId
                relativePath:(nullable NSString *)relativePath
           isSharedNamespace:(nullable NSNumber *)isSharedNamespace;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `NamespaceRelativePathLogInfo` struct.
///
@interface DBTEAMLOGNamespaceRelativePathLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGNamespaceRelativePathLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGNamespaceRelativePathLogInfo`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGNamespaceRelativePathLogInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGNamespaceRelativePathLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGNamespaceRelativePathLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGNamespaceRelativePathLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGNamespaceRelativePathLogInfo`
/// object.
///
+ (DBTEAMLOGNamespaceRelativePathLogInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
