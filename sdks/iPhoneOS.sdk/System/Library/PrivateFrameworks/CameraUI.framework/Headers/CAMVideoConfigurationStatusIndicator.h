//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMControlStatusIndicator.h>

@class UILabel;
@protocol CAMVideoConfigurationStatusIndicatorDelegate;

@interface CAMVideoConfigurationStatusIndicator : CAMControlStatusIndicator
{
    id <CAMVideoConfigurationStatusIndicatorDelegate> _touchDelegate;
    long long _resolution;
    long long _framerate;
    UILabel *__resolutionLabel;
    UILabel *__separatorLabel;
    UILabel *__framerateLabel;
    CGSize __resolutionSize;
    CGSize __separatorSize;
    CGSize __framerateSize;
}

@property(nonatomic) CGSize _framerateSize; // @synthesize _framerateSize=__framerateSize;
@property(nonatomic) CGSize _separatorSize; // @synthesize _separatorSize=__separatorSize;
@property(nonatomic) CGSize _resolutionSize; // @synthesize _resolutionSize=__resolutionSize;
@property(readonly, nonatomic) UILabel *_framerateLabel; // @synthesize _framerateLabel=__framerateLabel;
@property(readonly, nonatomic) UILabel *_separatorLabel; // @synthesize _separatorLabel=__separatorLabel;
@property(readonly, nonatomic) UILabel *_resolutionLabel; // @synthesize _resolutionLabel=__resolutionLabel;
@property(nonatomic) long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long resolution; // @synthesize resolution=_resolution;
@property(nonatomic) __weak id <CAMVideoConfigurationStatusIndicatorDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
// - (void).cxx_destruct;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)_handleTouchAtLocation:(CGPoint)arg1;
- (BOOL)_togglesFramerateForTouchAtLocation:(CGPoint)arg1;
- (BOOL)_togglesResolutionForTouchAtLocation:(CGPoint)arg1;
- (BOOL)_togglesResolutionOrFramerateForTouchAtLocation:(CGPoint)arg1;
- (void)_updateAppearance;
- (CGSize)_sizingForLabel:(id)arg1 minWidth:(double)arg2;
- (CDStruct_d54ccef3)_labelGeometryForSize:(CGSize)arg1 originX:(double)arg2 originY:(double)arg3;
- (id)_framerateString;
- (id)_separatorString;
- (id)_resolutionString;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)imageNameForCurrentState;
- (BOOL)shouldUseOutline;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (id)init;

@end
