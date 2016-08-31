///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBFILESMetadata;
@class DBFILESSaveCopyReferenceResult;

#pragma mark - API Object

///
/// The SaveCopyReferenceResult struct.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBFILESSaveCopyReferenceResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The metadata of the saved file or folder in the user's Dropbox.
@property(nonatomic, readonly) DBFILESMetadata * _Nonnull metadata;

#pragma mark - Constructors

///
/// Full constructor for the DBFILESSaveCopyReferenceResult struct (exposes all instance variables).
///
/// @param metadata The metadata of the saved file or folder in the user's Dropbox.
///
/// @return An initialized DBFILESSaveCopyReferenceResult instance.
///
- (nonnull instancetype)initWithMetadata:(DBFILESMetadata * _Nonnull)metadata;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the SaveCopyReferenceResult struct.
///
@interface DBFILESSaveCopyReferenceResultSerializer : NSObject

///
/// Serializes DBFILESSaveCopyReferenceResult instances.
///
/// @param instance An instance of the DBFILESSaveCopyReferenceResult API object.
///
/// @return A json-compatible dictionary representation of the DBFILESSaveCopyReferenceResult API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESSaveCopyReferenceResult * _Nonnull)instance;

///
/// Deserializes DBFILESSaveCopyReferenceResult instances.
///
/// @param dict A json-compatible dictionary representation of the DBFILESSaveCopyReferenceResult
/// API object.
///
/// @return An instantiation of the DBFILESSaveCopyReferenceResult object.
///
+ (DBFILESSaveCopyReferenceResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
