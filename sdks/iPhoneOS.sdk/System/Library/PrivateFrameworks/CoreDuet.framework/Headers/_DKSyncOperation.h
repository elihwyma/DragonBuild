//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface _DKSyncOperation : NSOperation
{
    _Atomic unsigned char _state;
}

+ (BOOL)_removesDependenciesAfterFinish;
- (void)endOperation;
- (void)startOperation;
- (void)start;
- (void)dealloc;
- (id)init;
- (BOOL)isFinished;
- (BOOL)isExecuting;

@end
