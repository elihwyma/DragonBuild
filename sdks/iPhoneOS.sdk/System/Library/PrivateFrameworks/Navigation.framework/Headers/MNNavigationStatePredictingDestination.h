//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNNavigationState.h>

#import <Navigation/MNCommuteSessionObserver-Protocol.h>

@class MNCommuteSession;

@interface MNNavigationStatePredictingDestination : MNNavigationState <MNCommuteSessionObserver>
{
    MNCommuteSession *_commuteSession;
}

// - (void).cxx_destruct;
- (void)commuteSessionDidArrive:(id)arg1;
- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(id /* CDUnknownBlockType */)arg2;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(NSUInteger)arg2;
- (void)stopPredictingDestinations;
- (void)leaveState;
- (void)enterState;
- (NSUInteger)desiredLocationProviderType;
- (NSUInteger)type;
- (id)traceManager;
- (BOOL)requiresHighMemoryThreshold;

@end
