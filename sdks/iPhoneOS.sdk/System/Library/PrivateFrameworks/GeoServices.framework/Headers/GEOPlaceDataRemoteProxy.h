//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPlaceDataProxy-Protocol.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataRemoteProxy : NSObject <GEOPlaceDataProxy>
{
    NSObject<OS_dispatch_queue> *_requestQ;
    NSMapTable *_requestToUUID;
//     struct os_unfair_lock_s _requestToUUIDLock;
}

// - (void).cxx_destruct;
- (BOOL)_parseReply:(id)arg1 placeResponse:(id )arg2 userInfo:(id )arg3 error:(id )arg4;
- (void)clearCache;
- (NSUInteger)shrinkBySizeSync:(NSUInteger)arg1;
- (void)shrinkBySize:(NSUInteger)arg1 finished:(id /* CDUnknownBlockType */)arg2;
- (NSUInteger)calculateFreeableSpaceSync;
- (void)calculateFreeableSpaceWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)cancelRequest:(id)arg1;
- (void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 cachePolicy:(NSUInteger)arg3 timeout:(double)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 networkActivity:(id /* CDUnknownBlockType */)arg7 requesterHandler:(id /* CDUnknownBlockType */)arg8;
- (void)trackPlaceData:(id)arg1;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 requesterHandler:(id /* CDUnknownBlockType */)arg6;
- (void)fetchAllCacheEntriesWithRequesterHandler:(id /* CDUnknownBlockType */)arg1;
- (void)requestComponentsFromNetwork:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 requesterHandler:(id /* CDUnknownBlockType */)arg7;
- (void)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 options:(NSUInteger)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 requesterHandler:(id /* CDUnknownBlockType */)arg7;
- (id)init;

@end
