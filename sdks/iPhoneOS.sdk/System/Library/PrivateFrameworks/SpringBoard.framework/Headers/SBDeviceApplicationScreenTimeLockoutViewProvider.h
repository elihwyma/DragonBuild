//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBDeviceApplicationSceneOverlayViewProvider.h>

#import <SpringBoard/LOViewControllerDelegate-Protocol.h>

@class UIViewController;
@protocol LOViewController;

@interface SBDeviceApplicationScreenTimeLockoutViewProvider : SBDeviceApplicationSceneOverlayViewProvider <LOViewControllerDelegate>
{
    UIViewController<LOViewController> *_lockoutViewController;
}

// - (void).cxx_destruct;
- (id)_newLockoutViewControllerWithBundleIdentifier:(id)arg1;
- (id)_realOverlayViewController;
- (void)_deactivateIfPossible;
- (void)_activateIfPossible;
- (void)lockoutViewControllerDidFinishDismissing:(id)arg1;
- (void)_handleInstalledAppsChanged:(id)arg1;
- (void)dealloc;
- (id)initWithSceneHandle:(id)arg1 delegate:(id)arg2;

@end
