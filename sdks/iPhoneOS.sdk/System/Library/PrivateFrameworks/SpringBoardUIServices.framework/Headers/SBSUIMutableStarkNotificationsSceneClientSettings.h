//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIMutableApplicationSceneClientSettings.h>

#import <SpringBoardUIServices/SBSUIStarkNotificationsSceneClientSettings-Protocol.h>

@interface SBSUIMutableStarkNotificationsSceneClientSettings : UIMutableApplicationSceneClientSettings <SBSUIStarkNotificationsSceneClientSettings>
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3;
- (id)keyDescriptionForSetting:(NSUInteger)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(nonatomic) BOOL shouldBorrowScreen;
@property(nonatomic, getter=isDisplayingNotification) BOOL displayingNotification;

@end
