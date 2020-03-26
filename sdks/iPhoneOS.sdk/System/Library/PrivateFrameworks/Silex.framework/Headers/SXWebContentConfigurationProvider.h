//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXPresentationAttributesObserver-Protocol.h>
#import <Silex/SXWebContentConfigurationProvider-Protocol.h>

@class NSLocale;
@protocol SXPresentationAttributesProvider, SXStoreFrontProvider, SXWebContentLocationProvider;

@interface SXWebContentConfigurationProvider : NSObject <SXPresentationAttributesObserver, SXWebContentConfigurationProvider>
{
    id <SXPresentationAttributesProvider> _presentationAttributesProvider;
    id <SXStoreFrontProvider> _storeFrontProvider;
    NSLocale *_locale;
    id <SXWebContentLocationProvider> _locationProvider;
    id /* CDUnknownBlockType */ _changeBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ changeBlock; // @synthesize changeBlock=_changeBlock;
@property(readonly, nonatomic) id <SXWebContentLocationProvider> locationProvider; // @synthesize locationProvider=_locationProvider;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) id <SXStoreFrontProvider> storeFrontProvider; // @synthesize storeFrontProvider=_storeFrontProvider;
@property(readonly, nonatomic) id <SXPresentationAttributesProvider> presentationAttributesProvider; // @synthesize presentationAttributesProvider=_presentationAttributesProvider;
// - (void).cxx_destruct;
- (void)presentationAttributesDidChangeFrom:(id)arg1 toAttributes:(id)arg2;
- (void)onChange:(id /* CDUnknownBlockType */)arg1;
- (id)configurationForSize:(CGSize)arg1 dataSources:(id)arg2;
- (void)invokeChangeListener;
- (id)initWithPresentationAttributesProvider:(id)arg1 storeFrontProvider:(id)arg2 locale:(id)arg3 locationProvider:(id)arg4;

@end
