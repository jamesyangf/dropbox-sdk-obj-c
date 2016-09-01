///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBASYNCLaunchResultBase;

#pragma mark - API Object

///
/// The LaunchResultBase union.
///
/// Result returned by methods that launch an asynchronous job. A method who may either launch an
/// asynchronous job, or complete the request synchronously, can use this union by extending it, and
/// adding a 'complete' field with the type of the synchronous response. See LaunchEmptyResult for
/// an example.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBASYNCLaunchResultBase : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBASYNCLaunchResultBaseTag enum type represents the possible tag states with which the
/// DBASYNCLaunchResultBase union can exist.
typedef NS_ENUM(NSInteger, DBASYNCLaunchResultBaseTag) {
  /// This response indicates that the processing is asynchronous. The string is an id that can be
  /// used to obtain the status of the asynchronous job.
  DBASYNCLaunchResultBaseAsyncJobId,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBASYNCLaunchResultBaseTag tag;

/// This response indicates that the processing is asynchronous. The string is an id that can be
/// used to obtain the status of the asynchronous job. Ensure the isAsyncJobId method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly, copy) NSString * _Nonnull asyncJobId;

#pragma mark - Constructors

///
/// Initializes union class with tag state of AsyncJobId.
///
/// About the AsyncJobId tag state: This response indicates that the processing is asynchronous. The
/// string is an id that can be used to obtain the status of the asynchronous job.
///
/// @param asyncJobId This response indicates that the processing is asynchronous. The string is an
/// id that can be used to obtain the status of the asynchronous job.
///
/// @return An initialized DBASYNCLaunchResultBase instance.
///
- (nonnull instancetype)initWithAsyncJobId:(NSString * _Nonnull)asyncJobId;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value AsyncJobId.
///
/// @note Call this method and ensure it returns true before accessing the asyncJobId property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value AsyncJobId.
///
- (BOOL)isAsyncJobId;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the DBASYNCLaunchResultBase union.
///
@interface DBASYNCLaunchResultBaseSerializer : NSObject

///
/// Serializes DBASYNCLaunchResultBase instances.
///
/// @param instance An instance of the DBASYNCLaunchResultBase API object.
///
/// @return A json-compatible dictionary representation of the DBASYNCLaunchResultBase API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBASYNCLaunchResultBase * _Nonnull)instance;

///
/// Deserializes DBASYNCLaunchResultBase instances.
///
/// @param dict A json-compatible dictionary representation of the DBASYNCLaunchResultBase API
/// object.
///
/// @return An instantiation of the DBASYNCLaunchResultBase object.
///
+ (DBASYNCLaunchResultBase * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end