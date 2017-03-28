///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBTasks.h"

@class DBAUTHTokenFromOAuth1Error;
@class DBAUTHTokenFromOAuth1Result;
@class DBNilObject;

@protocol DBTransportClient;

///
/// Routes for the `Auth` namespace
///
@interface DBAUTHAppAuthRoutes : NSObject

/// An instance of the networking client that each route will use to submit a
/// request.
@property (nonatomic, readonly) id<DBTransportClient> _Nonnull client;

/// Initializes the `DBAUTHAppAuthRoutes` namespace container object with a
/// networking client.
- (nonnull instancetype)init:(id<DBTransportClient> _Nonnull)client;

///
/// Creates an OAuth 2.0 access token from the supplied OAuth 1.0 access token.
///
/// @param oauth1Token The supplied OAuth 1.0 access token.
/// @param oauth1TokenSecret The token secret associated with the supplied access token.
///
/// @return Through the response callback, the caller will receive a `DBAUTHTokenFromOAuth1Result` object on success or
/// a `DBAUTHTokenFromOAuth1Error` object on failure.
///
- (DBRpcTask<DBAUTHTokenFromOAuth1Result *, DBAUTHTokenFromOAuth1Error *> * _Nonnull)
  tokenFromOauth1:(NSString * _Nonnull)oauth1Token
oauth1TokenSecret:(NSString * _Nonnull)oauth1TokenSecret;

@end