//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLModelRegressor, PMLSparseMatrix;

@interface PMLTrainingStoredSessionBatch : NSObject
{
    PMLSparseMatrix *_covariates;
    PMLModelRegressor *_outcomes;
    NSUInteger _count;
}

@property(readonly, nonatomic) NSUInteger count; // @synthesize count=_count;
@property(readonly, nonatomic) PMLModelRegressor *outcomes; // @synthesize outcomes=_outcomes;
@property(readonly, nonatomic) PMLSparseMatrix *covariates; // @synthesize covariates=_covariates;
// - (void).cxx_destruct;
- (id)minibatchStatsForPositiveLabels:(id)arg1;
- (id)minibatchStats;
- (id)minibatchStatsForPositiveLabel:(NSUInteger)arg1;
- (id)initWithCovariates:(id)arg1 outcomes:(id)arg2;

@end
