//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>

@class FBSProcessExecutionStrategy, NSArray, NSString;

@interface FBSProcessExecutionPolicy : NSObject <NSCopying, BSDescriptionProviding>
{
    FBSProcessExecutionStrategy *_strategy;
    NSArray *_provisions;
}

+ (id)policyForStrategy:(id)arg1 withProvisions:(id)arg2;
@property(copy, nonatomic) NSArray *provisions; // @synthesize provisions=_provisions;
@property(copy, nonatomic) FBSProcessExecutionStrategy *strategy; // @synthesize strategy=_strategy;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;

@end
