//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPreferencePane.h"

@class MSCloudAuthAPI, MSCloudPreferenceViewController, MSCloudShareAPI, NSArray, NSDictionary, NSStoryboard;

@interface MSCloudPreferencePane : MSPreferencePane
{
    MSCloudAuthAPI *_cloudAuthAPI;
    MSCloudShareAPI *_cloudShareAPI;
    NSDictionary *_userData;
    NSArray *_userShares;
    NSStoryboard *_cloudStoryboard;
    MSCloudPreferenceViewController *_currentViewController;
}

+ (id)toolbarIcon;
+ (id)title;
+ (id)identifier;
@property(nonatomic) __weak MSCloudPreferenceViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) NSStoryboard *cloudStoryboard; // @synthesize cloudStoryboard=_cloudStoryboard;
@property(retain, nonatomic) NSArray *userShares; // @synthesize userShares=_userShares;
@property(retain, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
- (void).cxx_destruct;
- (void)verifyEmailChangeWithToken:(id)arg1 newEmail:(id)arg2;
- (void)cloudURLDidOpenNotification:(id)arg1;
- (void)applicationDidOpenURL:(id)arg1;
- (void)userLoggedOutNotification:(id)arg1;
- (void)fixFirstResponder;
- (void)contentViewChanged;
- (void)updateWindowFrame;
- (void)showAccountVerificationView;
- (void)showShareView;
- (void)showLoginView;
- (void)showViewController:(id)arg1;
- (void)showRootViewController;
@property(readonly, nonatomic) MSCloudAuthAPI *cloudAuthAPI; // @synthesize cloudAuthAPI=_cloudAuthAPI;
@property(readonly, nonatomic) MSCloudShareAPI *cloudShareAPI; // @synthesize cloudShareAPI=_cloudShareAPI;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;

@end

