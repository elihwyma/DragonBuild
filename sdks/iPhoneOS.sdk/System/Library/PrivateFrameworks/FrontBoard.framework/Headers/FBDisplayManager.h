//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSDisplayMonitor.h>

@class FBSDisplayConfiguration;

@interface FBDisplayManager : FBSDisplayMonitor
{
}

+ (id)mainDisplay;
+ (id)mainConfiguration;
+ (id)mainIdentity;
+ (id)sharedInstance;
@property(readonly, copy, nonatomic) FBSDisplayConfiguration *mainDisplay;
- (void)postBookendConnections;
- (void)dealloc;
- (void)invalidate;
- (id)init;

@end
