//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBHardwareButtonGestureParametersProvider-Protocol.h>

@class NSMapTable, NSString, SBHardwareButtonGestureParameters;

@interface SBHardwareButtonGestureParametersProviderBase : NSObject <SBHardwareButtonGestureParametersProvider, BSDescriptionProviding>
{
    NSMapTable *_observers;
}

@property(retain, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
// - (void).cxx_destruct;
@property(readonly, nonatomic) SBHardwareButtonGestureParameters *hardwareButtonGestureParameters;
- (void)publishUpdatedParameters:(id)arg1;
- (void)removeHardwareButtonGestureParametersObserver:(id)arg1;
- (void)addHardwareButtonGestureParametersObserver:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;

@end
