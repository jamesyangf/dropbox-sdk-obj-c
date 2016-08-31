///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGJobError;
@class DBSHARINGJobStatus;

#pragma mark - API Object

///
/// The JobStatus union.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGJobStatus : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBSHARINGJobStatusTag enum type represents the possible tag states with which the
/// DBSHARINGJobStatus union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGJobStatusTag) {
  /// The asynchronous job is still in progress.
  DBSHARINGJobStatusInProgress,

  /// The asynchronous job has finished.
  DBSHARINGJobStatusComplete,

  /// The asynchronous job returned an error.
  DBSHARINGJobStatusFailed,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGJobStatusTag tag;

/// The asynchronous job returned an error. Ensure the isFailed method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGJobError * _Nonnull failed;

#pragma mark - Constructors

///
/// Initializes union class with tag state of InProgress.
///
/// About the InProgress tag state: The asynchronous job is still in progress.
///
/// @return An initialized DBSHARINGJobStatus instance.
///
- (nonnull instancetype)initWithInProgress;

///
/// Initializes union class with tag state of Complete.
///
/// About the Complete tag state: The asynchronous job has finished.
///
/// @return An initialized DBSHARINGJobStatus instance.
///
- (nonnull instancetype)initWithComplete;

///
/// Initializes union class with tag state of Failed.
///
/// About the Failed tag state: The asynchronous job returned an error.
///
/// @param failed The asynchronous job returned an error.
///
/// @return An initialized DBSHARINGJobStatus instance.
///
- (nonnull instancetype)initWithFailed:(DBSHARINGJobError * _Nonnull)failed;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value InProgress.
///
/// @return Whether the union's current tag state has value InProgress.
///
- (BOOL)isInProgress;

///
/// Retrieves whether the union's current tag state has value Complete.
///
/// @return Whether the union's current tag state has value Complete.
///
- (BOOL)isComplete;

///
/// Retrieves whether the union's current tag state has value Failed.
///
/// @note Call this method and ensure it returns true before accessing the failed property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value Failed.
///
- (BOOL)isFailed;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the DBSHARINGJobStatus union.
///
@interface DBSHARINGJobStatusSerializer : NSObject

///
/// Serializes DBSHARINGJobStatus instances.
///
/// @param instance An instance of the DBSHARINGJobStatus API object.
///
/// @return A json-compatible dictionary representation of the DBSHARINGJobStatus API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGJobStatus * _Nonnull)instance;

///
/// Deserializes DBSHARINGJobStatus instances.
///
/// @param dict A json-compatible dictionary representation of the DBSHARINGJobStatus API object.
///
/// @return An instantiation of the DBSHARINGJobStatus object.
///
+ (DBSHARINGJobStatus * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
