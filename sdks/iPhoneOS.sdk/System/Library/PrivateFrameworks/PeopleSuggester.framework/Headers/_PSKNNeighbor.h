//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _PSKNNeighbor : NSObject
{
    double _distance;
    NSArray *_nodeData;
}

@property(retain, nonatomic) NSArray *nodeData; // @synthesize nodeData=_nodeData;
@property(nonatomic) double distance; // @synthesize distance=_distance;
// - (void).cxx_destruct;
- (id)initWithNodeData:(id)arg1 distance:(double)arg2;

@end
