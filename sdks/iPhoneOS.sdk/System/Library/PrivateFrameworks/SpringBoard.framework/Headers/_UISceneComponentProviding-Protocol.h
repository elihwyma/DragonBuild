//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, UIScene;

@protocol _UISceneComponentProviding <NSObject>
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene;
- (id)initWithScene:(UIScene *)arg1;

@optional
- (void)_sceneWillInvalidate:(UIScene *)arg1;
- (void)_scene:(UIScene *)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(NSUInteger)arg3;
- (void)_scene:(UIScene *)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(NSUInteger)arg3;
- (NSArray *)_actionHandlersForScene:(UIScene *)arg1;
- (NSArray *)_settingsDiffActionsForScene:(UIScene *)arg1;
@end
