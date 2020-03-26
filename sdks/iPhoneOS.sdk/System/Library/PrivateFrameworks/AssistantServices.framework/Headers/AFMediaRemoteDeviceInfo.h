//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface AFMediaRemoteDeviceInfo : NSObject
{
    BOOL _lastFetchSucceeded;
    NSString *_routeIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)currentDevice;
@property(nonatomic) BOOL lastFetchSucceeded; // @synthesize lastFetchSucceeded=_lastFetchSucceeded;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) NSString *routeIdentifier; // @synthesize routeIdentifier=_routeIdentifier;
// - (void).cxx_destruct;
- (void)getRouteIdentifierWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_updateRouteIdentifierWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_activeDeviceInfoChanged:(id)arg1;
- (id)init;

@end
