//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCColor, NSDictionary, NSString, NTPBTopStoriesStyleConfig;

@interface FCTopStoriesStyleConfiguration : NSObject
{
    NTPBTopStoriesStyleConfig *_pbConfig;
    NSDictionary *_configDict;
    NSUInteger _storyType;
    NSString *_label;
    FCColor *_foreground_color;
    FCColor *_dark_style_foreground_color;
    FCColor *_background_color;
    FCColor *_dark_style_background_color;
    NSString *_stringType;
}

@property(readonly, nonatomic) NSString *stringType; // @synthesize stringType=_stringType;
@property(readonly, nonatomic) FCColor *dark_style_background_color; // @synthesize dark_style_background_color=_dark_style_background_color;
@property(readonly, nonatomic) FCColor *background_color; // @synthesize background_color=_background_color;
@property(readonly, nonatomic) FCColor *dark_style_foreground_color; // @synthesize dark_style_foreground_color=_dark_style_foreground_color;
@property(readonly, nonatomic) FCColor *foreground_color; // @synthesize foreground_color=_foreground_color;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSUInteger storyType; // @synthesize storyType=_storyType;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPBTopStoriesStyleConfig:(id)arg1;

@end
