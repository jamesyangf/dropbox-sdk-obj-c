///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGGetFileMetadataBatchResult;
@class DBSHARINGGetFileMetadataIndividualResult;

#pragma mark - API Object

///
/// The GetFileMetadataBatchResult struct.
///
/// Per file results of getFileMetadataBatch
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGGetFileMetadataBatchResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// This is the input file identifier corresponding to one of files in GetFileMetadataBatchArg.
@property(nonatomic, readonly, copy) NSString * _Nonnull file;

/// The result for this particular file
@property(nonatomic, readonly) DBSHARINGGetFileMetadataIndividualResult * _Nonnull result;

#pragma mark - Constructors

///
/// Full constructor for the DBSHARINGGetFileMetadataBatchResult struct (exposes all instance
/// variables).
///
/// @param file This is the input file identifier corresponding to one of
/// :field:`GetFileMetadataBatchArg.files`.
/// @param result The result for this particular file
///
/// @return An initialized DBSHARINGGetFileMetadataBatchResult instance.
///
- (nonnull instancetype)initWithFile:(NSString * _Nonnull)file
                              result:(DBSHARINGGetFileMetadataIndividualResult * _Nonnull)result;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the GetFileMetadataBatchResult struct.
///
@interface DBSHARINGGetFileMetadataBatchResultSerializer : NSObject

///
/// Serializes DBSHARINGGetFileMetadataBatchResult instances.
///
/// @param instance An instance of the DBSHARINGGetFileMetadataBatchResult API object.
///
/// @return A json-compatible dictionary representation of the DBSHARINGGetFileMetadataBatchResult
/// API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGGetFileMetadataBatchResult * _Nonnull)instance;

///
/// Deserializes DBSHARINGGetFileMetadataBatchResult instances.
///
/// @param dict A json-compatible dictionary representation of the
/// DBSHARINGGetFileMetadataBatchResult API object.
///
/// @return An instantiation of the DBSHARINGGetFileMetadataBatchResult object.
///
+ (DBSHARINGGetFileMetadataBatchResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
