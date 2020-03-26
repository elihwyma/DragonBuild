//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCMomentsCollectorDelegate-Protocol.h>

@class VCMoments;

__attribute__((visibility("hidden")))
@interface VCMomentsCollector : NSObject <VCMomentsCollectorDelegate>
{
    long long _streamToken;
    VCMoments *_moments;
}

- (void)stream:(id)arg1 addAudioSampleBuffer:(struct opaqueVCAudioBufferList )arg2 timestamp:(unsigned int)arg3;
- (void)stream:(id)arg1 addVideoSampleBuffer:(struct opaqueCMSampleBuffer )arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned int)arg4;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1;

@end
