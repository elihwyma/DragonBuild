//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKFileDataAccessor.h>

@class NSData;

@interface PKSerializedDataAccessor : PKFileDataAccessor
{
    NSData *_archiveData;
}

// - (void).cxx_destruct;
- (void)_removeDiskRepresentation;
- (id)archiveData;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id )arg2;

@end
