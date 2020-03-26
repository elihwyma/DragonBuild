//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIViewController, UIViewPropertyAnimator;

@interface CCUIContentModuleDetailAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIViewController *_anchoringViewController;
    BOOL _presenting;
    UIViewPropertyAnimator *_propertyAnimator;
}

@property(readonly, nonatomic, getter=isPresenting) BOOL presenting; // @synthesize presenting=_presenting;
// - (void).cxx_destruct;
- (id)_contentModuleContainingViewController;
- (id)_newPropertyAnimator;
- (void)animationEnded:(BOOL)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)performTransition:(id)arg1;
@property(readonly, nonatomic) UIViewPropertyAnimator *propertyAnimator; // @synthesize propertyAnimator=_propertyAnimator;
- (id)initForPresenting:(BOOL)arg1 anchoringViewController:(id)arg2;

@end
