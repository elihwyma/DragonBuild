//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_group;

@interface _SBSynchronizeOperation : NSOperation
{
    NSString *_humanReadableDescription;
    NSObject<OS_dispatch_group> *_operationGroup;
    NSMutableArray *_tasks;
}

@property(retain, nonatomic) NSString *humanReadableDescription; // @synthesize humanReadableDescription=_humanReadableDescription;
// - (void).cxx_destruct;
- (void)main;
- (void)addTask:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end
