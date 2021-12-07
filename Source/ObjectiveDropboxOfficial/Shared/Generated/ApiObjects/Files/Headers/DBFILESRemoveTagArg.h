///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESRemoveTagArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RemoveTagArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESRemoveTagArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Path to the item to tag.
@property (nonatomic, readonly, copy) NSString *path;

/// The tag to remove.
@property (nonatomic, readonly, copy) NSString *tagText;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path Path to the item to tag.
/// @param tagText The tag to remove.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path tagText:(NSString *)tagText;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RemoveTagArg` struct.
///
@interface DBFILESRemoveTagArgSerializer : NSObject

///
/// Serializes `DBFILESRemoveTagArg` instances.
///
/// @param instance An instance of the `DBFILESRemoveTagArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESRemoveTagArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESRemoveTagArg *)instance;

///
/// Deserializes `DBFILESRemoveTagArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESRemoveTagArg` API object.
///
/// @return An instantiation of the `DBFILESRemoveTagArg` object.
///
+ (DBFILESRemoveTagArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
