//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUIIPhoneProductPageView : UIView
{
    UIView *_view;
    UIView *_bannerView;
    double _bannerOffset;
}

@property(nonatomic) double bannerOffset; // @synthesize bannerOffset=_bannerOffset;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)animateYPosition:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
