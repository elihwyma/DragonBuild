//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUISettingsContext : NSObject
{
    NSMutableDictionary *_elementTypeClass;
    NSMutableArray *_descriptionReusePool;
    NSMutableArray *_viewReusePool;
    SKUIClientContext *_clientContext;
}

@property(nonatomic) __weak SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
// - (void).cxx_destruct;
- (void)_registerClass:(Class)arg1 forReuseIdentifier:(id)arg2;
- (void)_registerReuseClasses;
- (id)_dequeueReusableSettingDescriptionWithReuseIdentifier:(id)arg1 forViewElement:(id)arg2 parent:(id)arg3;
- (void)recycleSettingDescriptions:(id)arg1;
- (id)dequeueReusableSettingDescriptionForViewElement:(id)arg1 parent:(id)arg2;
- (id)initWithClientContext:(id)arg1;

@end
