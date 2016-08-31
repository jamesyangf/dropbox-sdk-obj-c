///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBFILESSearchMatch;
@class DBFILESSearchResult;

#pragma mark - API Object

///
/// The SearchResult struct.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBFILESSearchResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// A list (possibly empty) of matches for the query.
@property(nonatomic, readonly) NSArray<DBFILESSearchMatch *> * _Nonnull matches;

/// Used for paging. If true, indicates there is another page of results available that can be
/// fetched by calling search again.
@property(nonatomic, readonly, copy) NSNumber * _Nonnull more;

/// Used for paging. Value to set the start argument to when calling search to fetch the next page
/// of results.
@property(nonatomic, readonly, copy) NSNumber * _Nonnull start;

#pragma mark - Constructors

///
/// Full constructor for the DBFILESSearchResult struct (exposes all instance variables).
///
/// @param matches A list (possibly empty) of matches for the query.
/// @param more Used for paging. If true, indicates there is another page of results available that
/// can be fetched by calling :route:`search` again.
/// @param start Used for paging. Value to set the start argument to when calling :route:`search` to
/// fetch the next page of results.
///
/// @return An initialized DBFILESSearchResult instance.
///
- (nonnull instancetype)initWithMatches:(NSArray<DBFILESSearchMatch *> * _Nonnull)matches
                                   more:(NSNumber * _Nonnull)more
                                  start:(NSNumber * _Nonnull)start;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the SearchResult struct.
///
@interface DBFILESSearchResultSerializer : NSObject

///
/// Serializes DBFILESSearchResult instances.
///
/// @param instance An instance of the DBFILESSearchResult API object.
///
/// @return A json-compatible dictionary representation of the DBFILESSearchResult API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESSearchResult * _Nonnull)instance;

///
/// Deserializes DBFILESSearchResult instances.
///
/// @param dict A json-compatible dictionary representation of the DBFILESSearchResult API object.
///
/// @return An instantiation of the DBFILESSearchResult object.
///
+ (DBFILESSearchResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
