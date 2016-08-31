///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBFILESSaveUrlArg;

#pragma mark - API Object

///
/// The SaveUrlArg struct.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBFILESSaveUrlArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The path in Dropbox where the URL will be saved to.
@property(nonatomic, readonly, copy) NSString * _Nonnull path;

/// The URL to be saved.
@property(nonatomic, readonly, copy) NSString * _Nonnull url;

#pragma mark - Constructors

///
/// Full constructor for the DBFILESSaveUrlArg struct (exposes all instance variables).
///
/// @param path The path in Dropbox where the URL will be saved to.
/// @param url The URL to be saved.
///
/// @return An initialized DBFILESSaveUrlArg instance.
///
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path url:(NSString * _Nonnull)url;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the SaveUrlArg struct.
///
@interface DBFILESSaveUrlArgSerializer : NSObject

///
/// Serializes DBFILESSaveUrlArg instances.
///
/// @param instance An instance of the DBFILESSaveUrlArg API object.
///
/// @return A json-compatible dictionary representation of the DBFILESSaveUrlArg API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESSaveUrlArg * _Nonnull)instance;

///
/// Deserializes DBFILESSaveUrlArg instances.
///
/// @param dict A json-compatible dictionary representation of the DBFILESSaveUrlArg API object.
///
/// @return An instantiation of the DBFILESSaveUrlArg object.
///
+ (DBFILESSaveUrlArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
