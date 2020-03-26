//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface STCandyBarView : UIView
{
    BOOL _useVibrancy;
    NSArray *_usageItems;
    NSArray *_viewItems;
}

@property(copy, nonatomic) NSArray *viewItems; // @synthesize viewItems=_viewItems;
@property(readonly) BOOL useVibrancy; // @synthesize useVibrancy=_useVibrancy;
// - (void).cxx_destruct;
- (void)setUsageItems:(id)arg1 animated:(BOOL)arg2;
@property(copy, nonatomic) NSArray *usageItems; // @synthesize usageItems=_usageItems;
- (void)updateSectionViewImages;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)capImageWithHeight:(double)arg1 leadingLineCap:(int)arg2 trailingLineCap:(int)arg3;
- (id)initWithVibrancy:(BOOL)arg1;

@end
