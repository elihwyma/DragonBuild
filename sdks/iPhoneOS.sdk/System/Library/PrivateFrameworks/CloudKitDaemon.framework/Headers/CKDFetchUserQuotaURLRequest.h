//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

__attribute__((visibility("hidden")))
@interface CKDFetchUserQuotaURLRequest : CKDURLRequest
{
    id /* CDUnknownBlockType */ _quotaFetchedBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ quotaFetchedBlock; // @synthesize quotaFetchedBlock=_quotaFetchedBlock;
// - (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;

@end
