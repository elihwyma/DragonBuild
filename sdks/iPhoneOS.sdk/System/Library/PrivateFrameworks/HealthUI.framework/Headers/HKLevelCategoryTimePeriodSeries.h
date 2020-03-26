//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKHorizontalTimePeriodSeries.h>

@class NSString, UIColor, UIFont;

@interface HKLevelCategoryTimePeriodSeries : HKHorizontalTimePeriodSeries
{
    double _markerRadius;
    UIColor *_innerMarkColor;
    UIFont *_categoryLevelFont;
    UIColor *_categoryLevelColor;
    UIColor *_specialMarkColor;
    NSString *_specialMarkLegendLabel;
}

@property(retain, nonatomic) NSString *specialMarkLegendLabel; // @synthesize specialMarkLegendLabel=_specialMarkLegendLabel;
@property(retain, nonatomic) UIColor *specialMarkColor; // @synthesize specialMarkColor=_specialMarkColor;
@property(retain, nonatomic) UIColor *categoryLevelColor; // @synthesize categoryLevelColor=_categoryLevelColor;
@property(retain, nonatomic) UIFont *categoryLevelFont; // @synthesize categoryLevelFont=_categoryLevelFont;
@property(retain, nonatomic) UIColor *innerMarkColor; // @synthesize innerMarkColor=_innerMarkColor;
@property(nonatomic) double markerRadius; // @synthesize markerRadius=_markerRadius;
// - (void).cxx_destruct;
- (id)marginsForYAxis:(id)arg1 chartRect:(CGRect)arg2;
- (double)offsetForEnumerationRect:(CGRect)arg1;
- (void)_drawCategoryLabels:(CGContext )arg1 axisRect:(CGRect)arg2;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContext )arg5 secondaryRenderContext:(id)arg6;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (BOOL)_interiorCategoryLabels;
- (id)init;

@end
