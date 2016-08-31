///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import "DBTEAMBaseDfbReport.h"
#import <Foundation/Foundation.h>

@class DBTEAMGetStorageReport;
@class DBTEAMStorageBucket;

#pragma mark - API Object

///
/// The GetStorageReport struct.
///
/// Storage Report Result. Each of the items in the storage report is an array of values, one value
/// per day. If there is no data for a day, then the value will be None.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMGetStorageReport : DBTEAMBaseDfbReport <DBSerializable>

#pragma mark - Instance fields

/// Sum of the shared, unshared, and datastore usages, for each day.
@property(nonatomic, readonly) NSArray<NSNumber *> * _Nonnull totalUsage;

/// Array of the combined size (bytes) of team members' shared folders, for each day.
@property(nonatomic, readonly) NSArray<NSNumber *> * _Nonnull sharedUsage;

/// Array of the combined size (bytes) of team members' root namespaces, for each day.
@property(nonatomic, readonly) NSArray<NSNumber *> * _Nonnull unsharedUsage;

/// Array of the number of shared folders owned by team members, for each day.
@property(nonatomic, readonly) NSArray<NSNumber *> * _Nonnull sharedFolders;

/// Array of storage summaries of team members' account sizes. Each storage summary is an array of
/// key, value pairs, where each pair describes a storage bucket. The key indicates the upper bound
/// of the bucket and the value is the number of users in that bucket. There is one such summary per
/// day. If there is no data for a day, the storage summary will be empty.
@property(nonatomic, readonly) NSArray<NSArray<DBTEAMStorageBucket *> *> * _Nonnull memberStorageMap;

#pragma mark - Constructors

///
/// Full constructor for the DBTEAMGetStorageReport struct (exposes all instance variables).
///
/// @param startDate First date present in the results as 'YYYY-MM-DD' or None.
/// @param totalUsage Sum of the shared, unshared, and datastore usages, for each day.
/// @param sharedUsage Array of the combined size (bytes) of team members' shared folders, for each
/// day.
/// @param unsharedUsage Array of the combined size (bytes) of team members' root namespaces, for
/// each day.
/// @param sharedFolders Array of the number of shared folders owned by team members, for each day.
/// @param memberStorageMap Array of storage summaries of team members' account sizes. Each storage
/// summary is an array of key, value pairs, where each pair describes a storage bucket. The key
/// indicates the upper bound of the bucket and the value is the number of users in that bucket.
/// There is one such summary per day. If there is no data for a day, the storage summary will be
/// empty.
///
/// @return An initialized DBTEAMGetStorageReport instance.
///
- (nonnull instancetype)initWithStartDate:(NSString * _Nonnull)startDate
                               totalUsage:(NSArray<NSNumber *> * _Nonnull)totalUsage
                              sharedUsage:(NSArray<NSNumber *> * _Nonnull)sharedUsage
                            unsharedUsage:(NSArray<NSNumber *> * _Nonnull)unsharedUsage
                            sharedFolders:(NSArray<NSNumber *> * _Nonnull)sharedFolders
                         memberStorageMap:(NSArray<NSArray<DBTEAMStorageBucket *> *> * _Nonnull)memberStorageMap;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the GetStorageReport struct.
///
@interface DBTEAMGetStorageReportSerializer : NSObject

///
/// Serializes DBTEAMGetStorageReport instances.
///
/// @param instance An instance of the DBTEAMGetStorageReport API object.
///
/// @return A json-compatible dictionary representation of the DBTEAMGetStorageReport API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMGetStorageReport * _Nonnull)instance;

///
/// Deserializes DBTEAMGetStorageReport instances.
///
/// @param dict A json-compatible dictionary representation of the DBTEAMGetStorageReport API
/// object.
///
/// @return An instantiation of the DBTEAMGetStorageReport object.
///
+ (DBTEAMGetStorageReport * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
