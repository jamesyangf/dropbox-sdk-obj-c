///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///

#import "DBOAuth.h"
#import "DBSharedApplicationProtocol.h"
#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

#pragma mark - Shared application

///
/// Platform-specific (here, iOS) shared application.
///
/// Renders OAuth flow and implements DBSharedApplication protocol.
///
@interface DBMobileSharedApplication : NSObject <DBSharedApplication>

///
/// DBMobileSharedApplication full constructor.
///
/// @param sharedApplication The UIApplication with which to render the
/// OAuth flow.
/// @param controller The UIViewController with which to render the OAuth
/// flow.
/// @param openURL A wrapper around app-extension unsafe openURL call.
///
/// @return An initialized instance.
///
- (nonnull instancetype)init:(UIApplication * _Nonnull)sharedApplication
                  controller:(UIViewController * _Nonnull)controller
                     openURL:(void (^_Nonnull)(NSURL * _Nonnull))openURL;

@end

#pragma mark - Web view controller

///
/// Platform-specific (here, iOS) UIViewController for rendering OAuth flow.
///
@interface DBWebViewController : UIViewController <WKNavigationDelegate>

///
/// DBWebViewController full constructor.
///
/// @param tryInterceptHandler The navigation handler for the view controller.
/// Will check if exit URL (for redirect back to main app) can be successfully
/// navigated to.
/// @param cancelHandler Handler for auth cancellation. Will redirect back to
/// main app with special cancel URL, so that cancellation can be detected.
/// flow.
///
/// @return An initialized instance.
///
- (nonnull instancetype)init:(NSURL * _Nonnull)url
         tryInterceptHandler:(BOOL (^_Nonnull)(NSURL * _Nonnull))tryInterceptHandler
               cancelHandler:(void (^_Nonnull)(void))cancel;

@end
