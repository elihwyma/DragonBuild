//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSImpression-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class NSArray, NSString;

@protocol _IKJSImpression <IKJSImpression, JSExport>
@property(readonly, nonatomic) NSString *impressionQueueTag;
@property(readonly, nonatomic) long long index;
@property(readonly, nonatomic) id parent;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, nonatomic) NSArray *timestamps;
@property(readonly, nonatomic) NSString *data;
@end
