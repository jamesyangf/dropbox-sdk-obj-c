///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBFILESRemovePropertiesArg;

#pragma mark - API Object

///
/// The RemovePropertiesArg struct.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBFILESRemovePropertiesArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// A unique identifier for the file.
@property(nonatomic, readonly, copy) NSString * _Nonnull path;

/// A list of identifiers for a property template created by route properties/template/add.
@property(nonatomic, readonly) NSArray<NSString *> * _Nonnull propertyTemplateIds;

#pragma mark - Constructors

///
/// Full constructor for the DBFILESRemovePropertiesArg struct (exposes all instance variables).
///
/// @param path A unique identifier for the file.
/// @param propertyTemplateIds A list of identifiers for a property template created by route
/// properties/template/add.
///
/// @return An initialized DBFILESRemovePropertiesArg instance.
///
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path
                 propertyTemplateIds:(NSArray<NSString *> * _Nonnull)propertyTemplateIds;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the RemovePropertiesArg struct.
///
@interface DBFILESRemovePropertiesArgSerializer : NSObject

///
/// Serializes DBFILESRemovePropertiesArg instances.
///
/// @param instance An instance of the DBFILESRemovePropertiesArg API object.
///
/// @return A json-compatible dictionary representation of the DBFILESRemovePropertiesArg API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESRemovePropertiesArg * _Nonnull)instance;

///
/// Deserializes DBFILESRemovePropertiesArg instances.
///
/// @param dict A json-compatible dictionary representation of the DBFILESRemovePropertiesArg API
/// object.
///
/// @return An instantiation of the DBFILESRemovePropertiesArg object.
///
+ (DBFILESRemovePropertiesArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
