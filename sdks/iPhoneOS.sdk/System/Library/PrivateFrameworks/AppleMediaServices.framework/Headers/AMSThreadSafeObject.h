//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AMSThreadSafeObject : NSObject
{
    id _object;
    NSObject<OS_dispatch_queue> *_objectAccessQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *objectAccessQueue; // @synthesize objectAccessQueue=_objectAccessQueue;
// - (void).cxx_destruct;
- (id)accessAndSetObjectWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (id)initWithObject:(id)arg1;
- (id)init;

@end
