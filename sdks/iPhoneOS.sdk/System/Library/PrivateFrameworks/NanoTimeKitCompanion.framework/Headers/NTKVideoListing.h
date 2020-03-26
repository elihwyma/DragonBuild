//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKAVListing-Protocol.h>

@class CLKDevice, CLKVideo, NSString, UIColor, UIImage;

@interface NTKVideoListing : NSObject <NSCopying, NTKAVListing>
{
    CLKDevice *_device;
    CLKVideo *_video;
    UIImage *_image;
    NSString *_name;
    NSString *_videoName;
    NSString *_transitionImageName;
    UIColor *_overlayColor;
    NSUInteger _theme;
    long long _variant;
    long long _clip;
    NSUInteger _tags;
}

@property(readonly, nonatomic) long long clip; // @synthesize clip=_clip;
@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) NSUInteger theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
// - (void).cxx_destruct;
- (void)discardAssets;
- (BOOL)hasTag:(NSUInteger)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)snapshotDiffers:(id)arg1;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) CLKVideo *video;
- (void)_setHasAssets;
- (id)initForDevice:(id)arg1 withName:(id)arg2 videoName:(id)arg3 transitionImageName:(id)arg4 overlayColor:(id)arg5 theme:(NSUInteger)arg6 variant:(long long)arg7 clip:(long long)arg8 tags:(NSUInteger)arg9;

@end
