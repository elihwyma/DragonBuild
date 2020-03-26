//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface GKStoreItemInternal : GKInternalRepresentation
{
    NSNumber *_adamID;
    NSString *_artistName;
    NSString *_priceDisplay;
    NSURL *_viewItemURL;
    NSURL *_shortViewItemURL;
    NSURL *_tellAFriendMessageContentsUrl;
    NSDate *_expirationDate;
    unsigned int _numberOfUserRatings;
    float _averageUserRating;
    BOOL _owned;
}

+ (id)secureCodedPropertyKeys;
@property(nonatomic) BOOL owned; // @synthesize owned=_owned;
@property(nonatomic) float averageUserRating; // @synthesize averageUserRating=_averageUserRating;
@property(nonatomic) unsigned int numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSURL *tellAFriendMessageContentsUrl; // @synthesize tellAFriendMessageContentsUrl=_tellAFriendMessageContentsUrl;
@property(retain, nonatomic) NSURL *shortViewItemURL; // @synthesize shortViewItemURL=_shortViewItemURL;
@property(retain, nonatomic) NSURL *viewItemURL; // @synthesize viewItemURL=_viewItemURL;
@property(retain, nonatomic) NSString *priceDisplay; // @synthesize priceDisplay=_priceDisplay;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
- (void)storeItemURLForGamePlatform:(long long)arg1 withContext:(id)arg2 withHandler:(id /* CDUnknownBlockType */)arg3;
- (id)storeItemURLForURL:(id)arg1 gamePlatform:(long long)arg2 extraQueryParams:(id)arg3;
- (BOOL)isValid;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;

@end
