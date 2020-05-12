//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSCoverSheetViewControllerObserver-Protocol.h>
#import <SpringBoard/CSExternalAppearanceProviding-Protocol.h>
#import <SpringBoard/CSExternalBehaviorProviding-Protocol.h>
#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBAssistantObserver-Protocol.h>
#import <SpringBoard/SBCoverSheetGrabberDelegate-Protocol.h>
#import <SpringBoard/SBCoverSheetSecureAppEnvironmentViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBCoverSheetSlidingViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBFIdleTimerBehaviorProviding-Protocol.h>
#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>
#import <SpringBoard/SBPearlMatchingStateProviderDelegate-Protocol.h>
#import <SpringBoard/SBSecureAppObserver-Protocol.h>
#import <SpringBoard/SBSecureAppViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBWallpaperOrientationProvider-Protocol.h>

@class BSEventQueue, CSCoverSheetFlyInSettings, CSCoverSheetTransitionSettings, CSLockScreenSettings, NSMutableSet, NSSet, NSString, SBAsynchronousRenderingAssertion, SBCoverSheetIconFlyInAnimator, SBCoverSheetSceneManager, SBCoverSheetSecureAppEnvironmentViewController, SBCoverSheetSlidingViewController, SBDashBoardHostedAppViewController, SBDeviceApplicationSceneHandle, SBDisableActiveInterfaceOrientationChangeAssertion, SBHomeGestureParticipant, SBMainWorkspace, SBWindow, UIColor, UIImpactFeedbackGenerator, _UILegibilitySettings;
@protocol BSInvalidatable, OS_dispatch_group, SBCoverSheetPresentationDelegate, SBLockScreenEnvironment, SBPearlMatchingStateProvider, SBUILockStateProvider;

@interface SBCoverSheetPresentationManager : NSObject <SBCoverSheetSlidingViewControllerDelegate, SBCoverSheetGrabberDelegate, CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSCoverSheetViewControllerObserver, SBFIdleTimerBehaviorProviding, SBSecureAppViewControllerDelegate, SBSecureAppObserver, SBAssistantObserver, PTSettingsKeyObserver, SBHomeGestureParticipantDelegate, SBCoverSheetSecureAppEnvironmentViewControllerDelegate, SBWallpaperOrientationProvider, SBPearlMatchingStateProviderDelegate>
{
    BOOL _isCoverSheetHostingUnlockedEnvironmentWindows;
    BOOL _hasBeenDismissedSinceKeybagLock;
    BOOL _hasBeenDismissedSinceBoot;
    BOOL _activeInterfaceOrientationLocked;
    BOOL _shouldDisplayFakeStatusBar;
    BOOL _needsFakeStatusBarUpdate;
    BOOL _dismissingCoverSheet;
    BOOL _centerFollowsFinger;
    BOOL _animateIconsOnPresentationToo;
    BOOL _iconAnimatorNeedsAnimating;
    SBWindow *_coverSheetWindow;
    SBWindow *_secureAppWindow;
    SBCoverSheetSlidingViewController *_secureAppSlidingViewController;
    long long _participantState;
    long long _scrollingStrategy;
    id <SBCoverSheetPresentationDelegate> _delegate;
    id <SBUILockStateProvider> _uiLockStateProvider;
    id <SBPearlMatchingStateProvider> _pearlMatchingStateProvider;
    id <SBLockScreenEnvironment> _lockScreenEnvironment;
    SBDashBoardHostedAppViewController *_secureAppViewController;
    SBMainWorkspace *_mainWorkspace;
    NSMutableSet *_coverSheetWindowVisibleReasons;
    NSMutableSet *_secureAppWindowVisibleReasons;
    SBCoverSheetSecureAppEnvironmentViewController *_secureAppEnvironmentViewController;
    id /* CDUnknownBlockType */ _secureAppCleanupHandler;
    SBCoverSheetSceneManager *_sceneManager;
    BSEventQueue *_lockUnlockQueue;
    CSLockScreenSettings *_lockScreenSettings;
    UIImpactFeedbackGenerator *_rubberBandFeedbackGenerator;
    NSUInteger _transitionType;
    CSCoverSheetTransitionSettings *_transitionSettings;
    NSUInteger _transitionOverrideOptions;
    SBAsynchronousRenderingAssertion *_asynchronousRenderingAssertion;
    SBDisableActiveInterfaceOrientationChangeAssertion *_activeInterfaceOrientationChangeAssertion;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    SBCoverSheetIconFlyInAnimator *_iconAnimator;
    NSObject<OS_dispatch_group> *_iconAnimatorCompletionGroup;
    id /* CDUnknownBlockType */ _iconAnimatorCompletionBlock;
    CSCoverSheetFlyInSettings *_flyInSettings;
    double _iconFlyInInteractiveResponseMin;
    double _iconFlyInInteractiveResponseMax;
    double _iconFlyInInteractiveDampingRatioMin;
    double _iconFlyInInteractiveDampingRatioMax;
    double _iconFlyInTension;
    double _iconFlyInFriction;
    SBHomeGestureParticipant *_homeGestureParticipant;
    id <BSInvalidatable> _suspendWallpaperAnimationAssertion;
    id <BSInvalidatable> _requireWallpaperAssertion;
    id /* CDUnknownBlockType */ _ppt_transitionBeginsCallback;
    id /* CDUnknownBlockType */ _ppt_transitionEndsCallback;
    SBCoverSheetSlidingViewController *_coverSheetSlidingViewController;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SBCoverSheetSlidingViewController *coverSheetSlidingViewController; // @synthesize coverSheetSlidingViewController=_coverSheetSlidingViewController;
@property(copy, nonatomic) id /* CDUnknownBlockType */ ppt_transitionEndsCallback; // @synthesize ppt_transitionEndsCallback=_ppt_transitionEndsCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ ppt_transitionBeginsCallback; // @synthesize ppt_transitionBeginsCallback=_ppt_transitionBeginsCallback;
@property(retain, nonatomic) id <BSInvalidatable> requireWallpaperAssertion; // @synthesize requireWallpaperAssertion=_requireWallpaperAssertion;
@property(retain, nonatomic) id <BSInvalidatable> suspendWallpaperAnimationAssertion; // @synthesize suspendWallpaperAnimationAssertion=_suspendWallpaperAnimationAssertion;
@property(retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // @synthesize homeGestureParticipant=_homeGestureParticipant;
@property(nonatomic) BOOL iconAnimatorNeedsAnimating; // @synthesize iconAnimatorNeedsAnimating=_iconAnimatorNeedsAnimating;
@property(nonatomic) double iconFlyInFriction; // @synthesize iconFlyInFriction=_iconFlyInFriction;
@property(nonatomic) double iconFlyInTension; // @synthesize iconFlyInTension=_iconFlyInTension;
@property(nonatomic) double iconFlyInInteractiveDampingRatioMax; // @synthesize iconFlyInInteractiveDampingRatioMax=_iconFlyInInteractiveDampingRatioMax;
@property(nonatomic) double iconFlyInInteractiveDampingRatioMin; // @synthesize iconFlyInInteractiveDampingRatioMin=_iconFlyInInteractiveDampingRatioMin;
@property(nonatomic) double iconFlyInInteractiveResponseMax; // @synthesize iconFlyInInteractiveResponseMax=_iconFlyInInteractiveResponseMax;
@property(nonatomic) double iconFlyInInteractiveResponseMin; // @synthesize iconFlyInInteractiveResponseMin=_iconFlyInInteractiveResponseMin;
@property(nonatomic) BOOL animateIconsOnPresentationToo; // @synthesize animateIconsOnPresentationToo=_animateIconsOnPresentationToo;
@property(nonatomic) BOOL centerFollowsFinger; // @synthesize centerFollowsFinger=_centerFollowsFinger;
@property(retain, nonatomic) CSCoverSheetFlyInSettings *flyInSettings; // @synthesize flyInSettings=_flyInSettings;
@property(copy, nonatomic) id /* CDUnknownBlockType */ iconAnimatorCompletionBlock; // @synthesize iconAnimatorCompletionBlock=_iconAnimatorCompletionBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *iconAnimatorCompletionGroup; // @synthesize iconAnimatorCompletionGroup=_iconAnimatorCompletionGroup;
@property(nonatomic) BOOL dismissingCoverSheet; // @synthesize dismissingCoverSheet=_dismissingCoverSheet;
@property(retain, nonatomic) SBCoverSheetIconFlyInAnimator *iconAnimator; // @synthesize iconAnimator=_iconAnimator;
@property(retain, nonatomic) id <BSInvalidatable> deferOrientationUpdatesAssertion; // @synthesize deferOrientationUpdatesAssertion=_deferOrientationUpdatesAssertion;
@property(retain, nonatomic) SBDisableActiveInterfaceOrientationChangeAssertion *activeInterfaceOrientationChangeAssertion; // @synthesize activeInterfaceOrientationChangeAssertion=_activeInterfaceOrientationChangeAssertion;
@property(retain, nonatomic) SBAsynchronousRenderingAssertion *asynchronousRenderingAssertion; // @synthesize asynchronousRenderingAssertion=_asynchronousRenderingAssertion;
@property(nonatomic) BOOL needsFakeStatusBarUpdate; // @synthesize needsFakeStatusBarUpdate=_needsFakeStatusBarUpdate;
@property(nonatomic) BOOL shouldDisplayFakeStatusBar; // @synthesize shouldDisplayFakeStatusBar=_shouldDisplayFakeStatusBar;
@property(nonatomic) NSUInteger transitionOverrideOptions; // @synthesize transitionOverrideOptions=_transitionOverrideOptions;
@property(nonatomic) __weak CSCoverSheetTransitionSettings *transitionSettings; // @synthesize transitionSettings=_transitionSettings;
@property(nonatomic) NSUInteger transitionType; // @synthesize transitionType=_transitionType;
@property(retain, nonatomic) UIImpactFeedbackGenerator *rubberBandFeedbackGenerator; // @synthesize rubberBandFeedbackGenerator=_rubberBandFeedbackGenerator;
@property(retain, nonatomic) CSLockScreenSettings *lockScreenSettings; // @synthesize lockScreenSettings=_lockScreenSettings;
@property(retain, nonatomic) BSEventQueue *lockUnlockQueue; // @synthesize lockUnlockQueue=_lockUnlockQueue;
@property(retain, nonatomic) SBCoverSheetSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(copy, nonatomic) id /* CDUnknownBlockType */ secureAppCleanupHandler; // @synthesize secureAppCleanupHandler=_secureAppCleanupHandler;
@property(retain, nonatomic) SBCoverSheetSecureAppEnvironmentViewController *secureAppEnvironmentViewController; // @synthesize secureAppEnvironmentViewController=_secureAppEnvironmentViewController;
@property(retain, nonatomic) NSMutableSet *secureAppWindowVisibleReasons; // @synthesize secureAppWindowVisibleReasons=_secureAppWindowVisibleReasons;
@property(retain, nonatomic) NSMutableSet *coverSheetWindowVisibleReasons; // @synthesize coverSheetWindowVisibleReasons=_coverSheetWindowVisibleReasons;
@property(nonatomic, getter=activeInterfaceOrientationLocked) BOOL activeInterfaceOrientationLocked; // @synthesize activeInterfaceOrientationLocked=_activeInterfaceOrientationLocked;
@property(nonatomic) BOOL hasBeenDismissedSinceBoot; // @synthesize hasBeenDismissedSinceBoot=_hasBeenDismissedSinceBoot;
@property(nonatomic) BOOL hasBeenDismissedSinceKeybagLock; // @synthesize hasBeenDismissedSinceKeybagLock=_hasBeenDismissedSinceKeybagLock;
@property(retain, nonatomic) SBMainWorkspace *mainWorkspace; // @synthesize mainWorkspace=_mainWorkspace;
@property(readonly, nonatomic) BOOL isCoverSheetHostingUnlockedEnvironmentWindows; // @synthesize isCoverSheetHostingUnlockedEnvironmentWindows=_isCoverSheetHostingUnlockedEnvironmentWindows;
@property(retain, nonatomic) SBDashBoardHostedAppViewController *secureAppViewController; // @synthesize secureAppViewController=_secureAppViewController;
@property(retain, nonatomic) id <SBLockScreenEnvironment> lockScreenEnvironment; // @synthesize lockScreenEnvironment=_lockScreenEnvironment;
@property(nonatomic) __weak id <SBPearlMatchingStateProvider> pearlMatchingStateProvider; // @synthesize pearlMatchingStateProvider=_pearlMatchingStateProvider;
@property(retain, nonatomic, setter=setUILockStateProvider:) id <SBUILockStateProvider> uiLockStateProvider; // @synthesize uiLockStateProvider=_uiLockStateProvider;
@property(nonatomic) __weak id <SBCoverSheetPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long scrollingStrategy; // @synthesize scrollingStrategy=_scrollingStrategy;
@property(nonatomic) long long participantState; // @synthesize participantState=_participantState;
// - (void).cxx_destruct;
- (void)_cleanupIconAnimator;
- (void)_setTransitionProgress:(double)arg1 animated:(BOOL)arg2 gestureActive:(BOOL)arg3 coverSheetProgress:(double)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)_animateForProgress:(double)arg1;
- (void)_prepareIconAnimatorForPresenting:(BOOL)arg1;
- (BOOL)_isEffectivelyLocked;
- (void)_authenticationChanged:(id)arg1;
- (void)_relinquishAsynchronousRenderingAssertion;
- (void)_acquireAsynchronousRenderingAssertion;
- (void)_tellDashBoardOurBehaviorChanged;
- (void)_tellDashBoardOurAppearanceChanged;
- (void)_tellDashBoardOurAppearanceAndBehaviorChanged;
- (void)_updateProximitySensorState;
- (void)_prepareSecureAppWindowForDisplay;
- (void)_prepareCoverSheetWindowForDisplay;
- (void)_updateVisibilityOfWindow:(id)arg1 forReasons:(id)arg2;
- (void)_setCoverSheet:(BOOL)arg1 windowVisible:(BOOL)arg2 forReason:(id)arg3;
- (void)_setSecureAppWindowVisible:(BOOL)arg1 forReason:(id)arg2;
- (void)_setCoverSheetWindowVisible:(BOOL)arg1 forReason:(id)arg2;
- (void)_relinquishHomeGesture;
- (void)_requestHomeGestureOwnership;
- (void)_setOrientationUpdatesDeferred:(BOOL)arg1;
- (void)_enqueueBlock:(id /* CDUnknownBlockType */)arg1 withName:(id)arg2;
- (void)_notifyDelegateRequestsUnlock;
- (void)_notifyDelegateDidDismiss;
- (void)_notifyDelegateWillDismiss;
- (void)_notifyDelegateDidPresent;
- (void)_notifyDelegateWillPresent;
- (void)noteScreenDidTurnOff;
- (void)_cleanupATransition;
- (void)_prepareForATransition;
- (void)_prepareForTransitionToSecureApp;
- (void)_cleanupDismissalTransition;
- (void)_prepareForDismissalTransition;
- (void)_cleanupInterstitialTransitionForSlidingViewController:(id)arg1;
- (void)_updateInterstitialTransitionForSlidingViewController:(id)arg1 withProgress:(double)arg2;
- (void)_prepareInterstitialTransitionForSlidingViewController:(id)arg1;
- (void)_cleanupRubberBandDismissalTransitionForSlidingViewController:(id)arg1;
- (void)_prepareForRubberBandDismissalTransitionForSlidingViewController:(id)arg1;
- (void)_cleanupRubberBandPresentationTransitionForSlidingViewController:(id)arg1;
- (void)_prepareForRubberBandPresentationTransitionForSlidingViewController:(id)arg1;
- (void)_cleanupARubberBandTransitionForSlidingViewController:(id)arg1;
- (void)_prepareForARubberBandTransitionForSlidingViewController:(id)arg1;
- (void)_cleanupPresentationTransition;
- (void)_prepareForPresentationTransitionForUserGesture:(BOOL)arg1;
- (long long)interfaceOrientationForWallpaperController:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)_updateIconsFlyInWithSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)assistantDidDisappear:(id)arg1;
- (void)secureAppOfTypeDidEnd:(NSUInteger)arg1;
- (void)secureAppOfTypeDidBegin:(NSUInteger)arg1;
- (void)secureAppViewControllerDidAuthenticate:(id)arg1;
- (void)updateVisibilityForGrabberVisible:(BOOL)arg1;
- (NSUInteger)screenEdgesDeferringSystemGestures;
- (BOOL)hasFirstSwipeShowGrabberOverride;
- (BOOL)coverSheetSlidingViewControllerContentShouldAutoRotateWhenNotVisible:(id)arg1;
- (void)coverSheetSlidingViewControllerCleanupInterstitialTransition:(id)arg1;
- (void)coverSheetSlidingViewController:(id)arg1 dismissGestureChangedWithProgress:(double)arg2;
- (void)coverSheetSlidingViewController:(id)arg1 animateForGestureActive:(BOOL)arg2 withProgress:(double)arg3 beginBlock:(id /* CDUnknownBlockType */)arg4 endBlock:(id /* CDUnknownBlockType */)arg5;
- (void)coverSheetSlidingViewController:(id)arg1 animationTickedWithProgress:(double)arg2 coverSheetFrame:(CGRect)arg3 gestureActive:(BOOL)arg4 forPresentationValue:(BOOL)arg5;
- (BOOL)hasContentUnderCoverSheetSlidingViewController:(id)arg1;
- (void)coverSheetSlidingViewControllerDidPassRubberBandThreshold:(id)arg1;
- (void)coverSheetSlidingViewControllerCleanupDismissalTransition:(id)arg1;
- (void)coverSheetSlidingViewController:(id)arg1 committingToEndPresented:(BOOL)arg2;
- (void)coverSheetSlidingViewControllerUserPresentGestureBegan:(id)arg1;
- (void)coverSheetSlidingViewController:(id)arg1 prepareForDismissalTransitionForReversingTransition:(BOOL)arg2 forUserGesture:(BOOL)arg3;
- (void)coverSheetSlidingViewControllerCleanupRubberBandedPresentationTransition:(id)arg1;
- (void)coverSheetSlidingViewControllerPrepareForRubberBandedPresentationTransition:(id)arg1;
- (void)coverSheetSlidingViewControllerCleanupPresentationTransition:(id)arg1;
- (void)coverSheetSlidingViewController:(id)arg1 prepareForPresentationTransitionForUserGesture:(BOOL)arg2;
- (void)pearlMatchingStateProviderStateChangedForMatchFailure:(id)arg1;
- (void)coverSheetViewControllerExternalLockProviderStateDidChange:(id)arg1;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) NSUInteger restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (void)secureAppEnvironmentViewControllerOwnsHomeGestureDidChange;
- (void)_transitionFromSecureAppToFullAppAndDismiss:(BOOL)arg1 preservingBanners:(BOOL)arg2;
- (void)_noteEffectiveLockStatusMayHaveChangedForUserNotification:(BOOL)arg1 canDismiss:(BOOL)arg2;
- (void)_performAfterSecureAppCleanup:(id /* CDUnknownBlockType */)arg1;
- (void)_clearSecureAppViewControllersIncludingWindow:(BOOL)arg1;
- (void)_prepareSecureAppViewController;
@property(retain, nonatomic) SBCoverSheetSlidingViewController *secureAppSlidingViewController; // @synthesize secureAppSlidingViewController=_secureAppSlidingViewController;
- (id)secureAppSlidingViewControllerIfLoaded;
@property(retain, nonatomic) SBWindow *secureAppWindow; // @synthesize secureAppWindow=_secureAppWindow;
- (BOOL)isActiveInterfaceOrientationLocked;
@property(readonly, nonatomic) SBDeviceApplicationSceneHandle *coverSheetHostedAppSceneHandle;
@property(readonly, nonatomic, getter=isCoverSheetHostingAnApp) BOOL coverSheetHostingAnApp;
- (id)coverSheetSlidingViewControllerIfLoaded;
- (id)coverSheetViewController;
@property(retain, nonatomic) SBWindow *coverSheetWindow; // @synthesize coverSheetWindow=_coverSheetWindow;
- (void)noteDeviceDidLock;
- (void)loadViewsIfNeeded;
- (void)authenticationStateMayHaveChangedFromSource:(int)arg1;
- (void)willUIUnlockWithPendingUnlockRequest:(BOOL)arg1;
- (BOOL)isAnyGestureActivelyRecognized;
- (BOOL)isDismissGestureActive;
- (BOOL)isPresented;
- (BOOL)isTransitioning;
- (BOOL)isVisible;
- (void)updateInterfaceOrientationToMatchOrientation:(long long)arg1;
- (void)updateBecauseSecureAppChanged;
- (BOOL)isInSecureApp;
- (void)setCoverSheetPresented:(BOOL)arg1 animated:(BOOL)arg2 options:(NSUInteger)arg3 withCompletion:(id /* CDUnknownBlockType */)arg4;
- (void)setCoverSheetPresented:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (id)init;

@end
