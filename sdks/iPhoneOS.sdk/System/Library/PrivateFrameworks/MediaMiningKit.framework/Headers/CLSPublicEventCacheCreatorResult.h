//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CLSPublicEventCacheCreatorResult : NSObject
{
    NSDictionary *_resolvedPublicEventsByTimeLocationIdentifier;
    NSDictionary *_invalidationTokenByTimeLocationIdentifier;
    NSUInteger _numberOfRequests;
}

@property(nonatomic) NSUInteger numberOfRequests; // @synthesize numberOfRequests=_numberOfRequests;
@property(retain, nonatomic) NSDictionary *invalidationTokenByTimeLocationIdentifier; // @synthesize invalidationTokenByTimeLocationIdentifier=_invalidationTokenByTimeLocationIdentifier;
@property(retain, nonatomic) NSDictionary *resolvedPublicEventsByTimeLocationIdentifier; // @synthesize resolvedPublicEventsByTimeLocationIdentifier=_resolvedPublicEventsByTimeLocationIdentifier;
// - (void).cxx_destruct;
- (id)init;

@end
