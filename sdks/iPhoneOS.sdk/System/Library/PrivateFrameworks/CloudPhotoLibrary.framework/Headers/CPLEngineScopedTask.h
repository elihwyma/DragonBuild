//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLEngineScope, CPLEngineStore, NSData, NSString;

@interface CPLEngineScopedTask : CPLEngineSyncTask
{
    NSString *_clientCacheIdentifier;
    CPLEngineScope *_scope;
    NSData *_transportScope;
    CPLEngineStore *_store;
}

@property(readonly, nonatomic) CPLEngineStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) NSData *transportScope; // @synthesize transportScope=_transportScope;
@property(readonly, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) NSString *clientCacheIdentifier; // @synthesize clientCacheIdentifier=_clientCacheIdentifier;
// - (void).cxx_destruct;
- (BOOL)checkScopeIsValidInTransaction:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;

@end
