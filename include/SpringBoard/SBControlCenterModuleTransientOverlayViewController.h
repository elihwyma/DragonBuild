//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/CCUIModuleAlertViewControllerDelegate-Protocol.h>

@class CCSModulePresentationOptions, CCUIModuleAlertViewController;
@protocol SBControlCenterModuleTransientOverlayViewControllerDelegate;

@interface SBControlCenterModuleTransientOverlayViewController : SBTransientOverlayViewController <CCUIModuleAlertViewControllerDelegate>
{
    CCUIModuleAlertViewController *_moduleOverlayViewController;
    id <SBControlCenterModuleTransientOverlayViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBControlCenterModuleTransientOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_animateTransitionFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 isAnimated:(BOOL)arg4 otherAnimations:(id /* CDUnknownBlockType */)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (BOOL)_shouldBlurBackground;
- (BOOL)handleHomeButtonPress;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (BOOL)shouldDisableOrientationUpdates;
- (BOOL)shouldDisableControlCenter;
@property(readonly, copy, nonatomic) CCSModulePresentationOptions *presentationOptions; // @dynamic presentationOptions;
- (void)contentModuleAlertViewControllerNeedsDismissal:(id)arg1;
- (void)_dismiss;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)preferredUnlockedGestureDismissalStyle;
- (long long)preferredLockedGestureDismissalStyle;
- (id)initWithModuleIdentifier:(id)arg1 presentationOptions:(id)arg2;

@end
