///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMUpdatePropertyTemplateResult;

#pragma mark - API Object

///
/// The UpdatePropertyTemplateResult struct.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMUpdatePropertyTemplateResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// An identifier for property template added by propertiesTemplateAdd.
@property(nonatomic, readonly, copy) NSString * _Nonnull templateId;

#pragma mark - Constructors

///
/// Full constructor for the DBTEAMUpdatePropertyTemplateResult struct (exposes all instance
/// variables).
///
/// @param templateId An identifier for property template added by :route:`properties/template/add`.
///
/// @return An initialized DBTEAMUpdatePropertyTemplateResult instance.
///
- (nonnull instancetype)initWithTemplateId:(NSString * _Nonnull)templateId;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the UpdatePropertyTemplateResult struct.
///
@interface DBTEAMUpdatePropertyTemplateResultSerializer : NSObject

///
/// Serializes DBTEAMUpdatePropertyTemplateResult instances.
///
/// @param instance An instance of the DBTEAMUpdatePropertyTemplateResult API object.
///
/// @return A json-compatible dictionary representation of the DBTEAMUpdatePropertyTemplateResult
/// API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMUpdatePropertyTemplateResult * _Nonnull)instance;

///
/// Deserializes DBTEAMUpdatePropertyTemplateResult instances.
///
/// @param dict A json-compatible dictionary representation of the
/// DBTEAMUpdatePropertyTemplateResult API object.
///
/// @return An instantiation of the DBTEAMUpdatePropertyTemplateResult object.
///
+ (DBTEAMUpdatePropertyTemplateResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
