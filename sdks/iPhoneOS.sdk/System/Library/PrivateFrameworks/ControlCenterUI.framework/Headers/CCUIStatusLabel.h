//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class MTVisualStylingProvider;

@interface CCUIStatusLabel : UILabel
{
    MTVisualStylingProvider *_visualStylingProvider;
    NSUInteger _verticalAlignment;
    UIEdgeInsets _edgeInsets;
}

@property(nonatomic) NSUInteger verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
// - (void).cxx_destruct;
- (void)_updateVisualStyling;
- (void)_contentSizeCategoryDidChange;
- (void)drawTextInRect:(CGRect)arg1;
- (void)didMoveToWindow;
- (id)init;

@end
