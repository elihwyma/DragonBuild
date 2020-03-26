//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BSAnimationSettings, NCNotificationAction, NCNotificationRequest, NCNotificationViewController, NSDictionary, UIGestureRecognizer, UIView, UIWindow;
@protocol PLKeyboardHomeAffordanceAssertion, UIViewSpringAnimationBehaviorDescribing;

@protocol NCNotificationViewControllerDelegate <NSObject>
- (void)notificationViewController:(NCNotificationViewController *)arg1 executeAction:(NCNotificationAction *)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(BOOL))arg4;
- (void)notificationViewController:(NCNotificationViewController *)arg1 requestPermissionToExecuteAction:(NCNotificationAction *)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(BOOL))arg4;

@optional
- (BOOL)notificationViewControllerIsCoalescedBundle:(NCNotificationViewController *)arg1;
- (void)notificationViewController:(NCNotificationViewController *)arg1 requestsExpandingCoalescedBundleForNotificationRequest:(NCNotificationRequest *)arg2;
- (id <UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(NCNotificationViewController *)arg1;
- (BSAnimationSettings *)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(NCNotificationViewController *)arg1;
- (BSAnimationSettings *)hideHomeAffordanceAnimationSettingsForNotificationViewController:(NCNotificationViewController *)arg1;
- (id <PLKeyboardHomeAffordanceAssertion>)notificationViewController:(NCNotificationViewController *)arg1 keyboardAssertionForGestureWindow:(UIWindow *)arg2;
- (NSDictionary *)notificationUsageTrackingStateForNotificationViewController:(NCNotificationViewController *)arg1;
- (BOOL)showAdditionalMessageLinesForNotificationViewController:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewController:(NCNotificationViewController *)arg1 suggestsDismissingShortLookWithSourceGestureRecognizer:(UIGestureRecognizer *)arg2 animated:(BOOL)arg3;
- (void)notificationViewController:(NCNotificationViewController *)arg1 shouldFinishLongLookTransitionForTrigger:(long long)arg2 withCompletionBlock:(void (^)(BOOL))arg3;
- (CGRect)notificationViewController:(NCNotificationViewController *)arg1 finalFrameForDismissingLongLookFromView:(UIView *)arg2;
- (CGRect)notificationViewController:(NCNotificationViewController *)arg1 initialFrameForPresentingLongLookFromView:(UIView *)arg2;
- (BOOL)notificationViewControllerShouldAllowLongPressGesture:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldAllowDragInteraction:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldAllowClickPresentationInteraction:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldSupportClickPresentationInteraction:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldPan:(NCNotificationViewController *)arg1;
- (long long)notificationViewControllerDateFormatStyle:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerWillDismissForCancelAction:(NCNotificationViewController *)arg1;
@end
