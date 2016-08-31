///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBASYNCPollError;

#pragma mark - API Object

///
/// The PollError union.
///
/// Error returned by methods for polling the status of asynchronous job.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBASYNCPollError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBASYNCPollErrorTag enum type represents the possible tag states with which the
/// DBASYNCPollError union can exist.
typedef NS_ENUM(NSInteger, DBASYNCPollErrorTag) {
  /// The job ID is invalid.
  DBASYNCPollErrorInvalidAsyncJobId,

  /// Something went wrong with the job on Dropbox's end. You'll need to verify that the action
  /// you were taking succeeded, and if not, try again. This should happen very rarely.
  DBASYNCPollErrorInternalError,

  /// (no description).
  DBASYNCPollErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBASYNCPollErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of InvalidAsyncJobId.
///
/// About the InvalidAsyncJobId tag state: The job ID is invalid.
///
/// @return An initialized DBASYNCPollError instance.
///
- (nonnull instancetype)initWithInvalidAsyncJobId;

///
/// Initializes union class with tag state of InternalError.
///
/// About the InternalError tag state: Something went wrong with the job on Dropbox's end. You'll
/// need to verify that the action you were taking succeeded, and if not, try again. This should
/// happen very rarely.
///
/// @return An initialized DBASYNCPollError instance.
///
- (nonnull instancetype)initWithInternalError;

///
/// Initializes union class with tag state of Other.
///
/// @return An initialized DBASYNCPollError instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value InvalidAsyncJobId.
///
/// @return Whether the union's current tag state has value InvalidAsyncJobId.
///
- (BOOL)isInvalidAsyncJobId;

///
/// Retrieves whether the union's current tag state has value InternalError.
///
/// @return Whether the union's current tag state has value InternalError.
///
- (BOOL)isInternalError;

///
/// Retrieves whether the union's current tag state has value Other.
///
/// @return Whether the union's current tag state has value Other.
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the DBASYNCPollError union.
///
@interface DBASYNCPollErrorSerializer : NSObject

///
/// Serializes DBASYNCPollError instances.
///
/// @param instance An instance of the DBASYNCPollError API object.
///
/// @return A json-compatible dictionary representation of the DBASYNCPollError API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBASYNCPollError * _Nonnull)instance;

///
/// Deserializes DBASYNCPollError instances.
///
/// @param dict A json-compatible dictionary representation of the DBASYNCPollError API object.
///
/// @return An instantiation of the DBASYNCPollError object.
///
+ (DBASYNCPollError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
