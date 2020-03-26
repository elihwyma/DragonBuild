//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLDepthStencilState.h>

#import <MTLSimDriver/MTLDepthStencilStateSPI-Protocol.h>
#import <MTLSimDriver/MTLSerializerDepthStencilState-Protocol.h>

__attribute__((visibility("hidden")))
@interface MTLSimDepthStencilState : _MTLDepthStencilState <MTLDepthStencilStateSPI, MTLSerializerDepthStencilState>
{
    unsigned int _reference;
}

- (unsigned int)depthStencilRef;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1 reference:(unsigned int)arg2 device:(id)arg3;

@end
