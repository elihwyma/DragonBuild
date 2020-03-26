//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemModule.h>

#import <HomeUI/HUCameraSettingsModule-Protocol.h>

@class HFCameraSmartDetectionCondition, HFConditionCollection, HFItemProvider, HFStaticItem, NSSet;

@interface HUCameraSmartDetectionSettingsModule : HFItemModule <HUCameraSettingsModule>
{
    NSSet *_itemProviders;
    NSSet *_cameraProfiles;
    HFConditionCollection *_conditionCollection;
    HFStaticItem *_anyMotionDetectedItem;
    HFStaticItem *_specificMotionDetectedItem;
    HFItemProvider *_motionDetectionSettingsItemProvider;
    HFItemProvider *_motionDetectionOffOnItemProvider;
    NSUInteger _settingsContext;
    HFCameraSmartDetectionCondition *_condition;
}

@property(retain, nonatomic) HFCameraSmartDetectionCondition *condition; // @synthesize condition=_condition;
@property(readonly, nonatomic) NSUInteger settingsContext; // @synthesize settingsContext=_settingsContext;
@property(readonly, nonatomic) HFItemProvider *motionDetectionOffOnItemProvider; // @synthesize motionDetectionOffOnItemProvider=_motionDetectionOffOnItemProvider;
@property(readonly, nonatomic) HFItemProvider *motionDetectionSettingsItemProvider; // @synthesize motionDetectionSettingsItemProvider=_motionDetectionSettingsItemProvider;
@property(retain, nonatomic) HFStaticItem *specificMotionDetectedItem; // @synthesize specificMotionDetectedItem=_specificMotionDetectedItem;
@property(retain, nonatomic) HFStaticItem *anyMotionDetectedItem; // @synthesize anyMotionDetectedItem=_anyMotionDetectedItem;
@property(readonly, nonatomic) HFConditionCollection *conditionCollection; // @synthesize conditionCollection=_conditionCollection;
@property(readonly, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
// - (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)itemProviders;
- (void)_dispatchUpdateForCameraProfile:(id)arg1;
- (id)_preferredConditionFromConditions:(id)arg1;
- (id)updateMotionDetectionSetting:(NSUInteger)arg1;
- (id)updateMotionDetectionSettingForItem:(id)arg1;
- (id)enableSmartMotion:(BOOL)arg1 forItem:(id)arg2;
- (id)didSelectItem:(id)arg1;
- (BOOL)isItemHeader:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 conditionCollection:(id)arg3 settingsContext:(NSUInteger)arg4;

@end
