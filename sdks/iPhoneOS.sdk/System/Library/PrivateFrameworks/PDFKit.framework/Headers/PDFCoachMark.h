//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PDFPageLayerEffect;

__attribute__((visibility("hidden")))
@interface PDFCoachMark : NSObject
{
    NSDate *creationTime;
    CGRect frame;
    PDFPageLayerEffect *layerEffect;
}

// - (void).cxx_destruct;
- (double)effectTimeLeft;
- (void)playEffect:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
