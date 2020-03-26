//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScrollViewPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewMockPanGestureRecognizer : NSObject
{
    CGPoint _translation;
    CGPoint _velocity;
    long long _state;
    UIScrollViewPanGestureRecognizer *_gestureRecognizer;
}

@property(retain, nonatomic) UIScrollViewPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
// - (void).cxx_destruct;
- (CGPoint)locationInView:(id)arg1;
- (CGPoint)velocityInView:(id)arg1;
- (void)setTranslation:(CGPoint)arg1 inView:(id)arg2;
- (CGPoint)translationInView:(id)arg1;
@property(nonatomic) long long state;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)simulateTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2;

@end
