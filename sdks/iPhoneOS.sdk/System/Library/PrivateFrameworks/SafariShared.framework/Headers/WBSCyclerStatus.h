//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface WBSCyclerStatus : NSObject <NSSecureCoding>
{
    BOOL _connectedToTestTarget;
    BOOL _running;
    NSString *_activeTestSuiteName;
    NSUInteger _seed;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property(readonly, nonatomic, getter=isConnectedToTestTarget) BOOL connectedToTestTarget; // @synthesize connectedToTestTarget=_connectedToTestTarget;
@property(readonly, nonatomic) NSUInteger seed; // @synthesize seed=_seed;
@property(readonly, copy, nonatomic) NSString *activeTestSuiteName; // @synthesize activeTestSuiteName=_activeTestSuiteName;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActiveTestSuiteName:(id)arg1 seed:(NSUInteger)arg2 isConnectedToTestTarget:(BOOL)arg3 isRunning:(BOOL)arg4;
- (id)init;

@end
