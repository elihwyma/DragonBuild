//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSURLSessionDataTask, NSURLSessionDownloadTask, RMAsset;

@protocol RMAssetResolver
- (NSURLSessionDownloadTask *)downloadTaskWithAsset:(RMAsset *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (NSURLSessionDataTask *)dataTaskWithAsset:(RMAsset *)arg1 completionHandler:(void (^)(NSData *, NSError *))arg2;
@end
