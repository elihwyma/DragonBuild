//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HRProfile, MISSING_TYPE;

@interface HRViewControllerFactory : NSObject
{
    MISSING_TYPE *profile;
}

+ (id)shared;
// - (void).cxx_destruct;
- (id)init;
- (id)makeDetailViewControllerForRecord:(id)arg1;
- (id)makeViewControllerForRecord:(id)arg1;
- (id)makeViewControllerForConcept:(id)arg1 highlightedRecordId:(id)arg2;
- (id)makeSettingsViewController;
@property(nonatomic, readonly) HRProfile *profile; // @synthesize profile;

@end
