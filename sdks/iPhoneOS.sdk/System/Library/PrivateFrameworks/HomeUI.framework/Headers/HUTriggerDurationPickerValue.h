//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HUTriggerDurationPickerValue : NSObject
{
    NSNumber *_duration;
}

+ (id)valueWithNoDuration;
+ (id)valueWithDuration:(double)arg1;
@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasDuration;
- (id)initWithDuration:(id)arg1;
- (id)init;

@end
