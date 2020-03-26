//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIClearBackgroundCell.h>


@class SiriUIAceObjectViewController, UIView;

@interface SiriUIAceObjectControllerCell : SiriUIClearBackgroundCell <CAAnimationDelegate>
{
    UIView *_animationView;
    double _topPadding;
    SiriUIAceObjectViewController *_aceViewController;
    long long _insertionAnimationType;
    long long _replacementAnimationType;
    UIView *_replacedView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIView *replacedView; // @synthesize replacedView=_replacedView;
@property(nonatomic) long long replacementAnimationType; // @synthesize replacementAnimationType=_replacementAnimationType;
@property(nonatomic) long long insertionAnimationType; // @synthesize insertionAnimationType=_insertionAnimationType;
@property(retain, nonatomic) SiriUIAceObjectViewController *aceViewController; // @synthesize aceViewController=_aceViewController;
// - (void).cxx_destruct;
- (void)setTopPadding:(double)arg1;
- (id)_flyInAnimationForAceViewController:(id)arg1;
- (void)_animateInsertionFlyIn;
- (void)_animateReplacementCrossFade;
- (void)_animateInsertionFadeIn;
- (void)beginAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_parentPreviousViewInCell;
- (void)_parentViewInCell;
- (void)configureSubviewsForAnimationType;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;

@end
