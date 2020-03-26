//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAMCaptureRequest, CAMPersistenceController, CAMStillImageCaptureResult, CAMStillImageLocalPersistenceResult, CAMVideoCaptureResult, CAMVideoLocalPersistenceResult;

@protocol CAMPersistenceResultDelegate <NSObject>

@optional
- (void)persistenceController:(CAMPersistenceController *)arg1 didCompleteAllLocalPersistenceForRequest:(CAMCaptureRequest *)arg2;
- (void)persistenceController:(CAMPersistenceController *)arg1 didGenerateVideoLocalPersistenceResult:(CAMVideoLocalPersistenceResult *)arg2 forCaptureResult:(CAMVideoCaptureResult *)arg3 fromRequest:(CAMCaptureRequest *)arg4;
- (void)persistenceController:(CAMPersistenceController *)arg1 didGenerateStillImageLocalPersistenceResult:(CAMStillImageLocalPersistenceResult *)arg2 forCaptureResult:(CAMStillImageCaptureResult *)arg3 fromRequest:(CAMCaptureRequest *)arg4;
@end
