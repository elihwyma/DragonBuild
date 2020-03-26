//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AXActionCoalescer : NSObject
{
    NSObject<OS_dispatch_queue> *_targetQueue;
    id /* CDUnknownBlockType */ _block;
    NSObject<OS_dispatch_queue> *_consistencyQueue;
    BOOL _coalescing;
}

+ (id)mainQueueCoalescerWithBlock:(id /* CDUnknownBlockType */)arg1;
// - (void).cxx_destruct;
- (void)performCoalescedAsynchronously;
- (id)initWithQueue:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;

@end
