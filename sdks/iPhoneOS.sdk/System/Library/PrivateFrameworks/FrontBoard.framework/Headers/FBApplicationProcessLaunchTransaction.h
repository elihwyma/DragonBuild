//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

@class BSAtomicSignal, FBProcess, FBProcessExecutionContext, FBProcessManager, FBWaitForProcessDeathTransaction, RBSProcessIdentity;

@interface FBApplicationProcessLaunchTransaction : FBTransaction
{
    FBProcessManager *_processManager;
    RBSProcessIdentity *_identity;
    FBProcess *_process;
    id /* CDUnknownBlockType */ _executionContextProvider;
    FBWaitForProcessDeathTransaction *_deathTransaction;
    FBProcessExecutionContext *_executionContext;
    BSAtomicSignal *_interruptedOrComplete;
    BOOL _failedLaunch;
    BOOL _exited;
}

@property(readonly, nonatomic) BOOL exited; // @synthesize exited=_exited;
@property(readonly, nonatomic) BOOL failedLaunch; // @synthesize failedLaunch=_failedLaunch;
@property(readonly, nonatomic) FBProcess *process; // @synthesize process=_process;
// - (void).cxx_destruct;
- (void)_queue_finishProcessLaunch:(BOOL)arg1;
- (void)_queue_processWillLaunch:(id)arg1;
- (void)_queue_launchProcess:(id)arg1;
- (void)_queue_noteExited;
- (id)_customizedDescriptionProperties;
- (BOOL)_shouldFailForChildTransaction:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_willComplete;
- (void)_willInterruptWithReason:(id)arg1;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithProcessIdentity:(id)arg1 executionContextProvider:(id /* CDUnknownBlockType */)arg2;
- (id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(id /* CDUnknownBlockType */)arg2;
- (id)initWithApplicationProcess:(id)arg1;
- (id)init;

@end
