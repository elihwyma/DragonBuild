//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSAudioChunkForTV, CSAudioRecorder, NSData, NSDictionary, NSError;

@protocol CSAudioRecorderDelegate <NSObject>
- (void)audioRecorderBufferAvailable:(CSAudioRecorder *)arg1 audioStreamHandleId:(NSUInteger)arg2 buffer:(CSAudioChunkForTV *)arg3;
- (void)audioRecorderBufferAvailable:(CSAudioRecorder *)arg1 audioStreamHandleId:(NSUInteger)arg2 buffer:(NSData *)arg3 remoteVAD:(NSData *)arg4 atTime:(NSUInteger)arg5;

@optional
- (void)audioRecorderStreamHandleIdInvalidated:(NSUInteger)arg1;
- (void)audioRecorderBuiltInAudioStreamInvalidated:(CSAudioRecorder *)arg1 error:(NSError *)arg2;
- (void)audioRecorderWillBeDestroyed:(CSAudioRecorder *)arg1;
- (void)audioRecorderLostMediaserverd:(CSAudioRecorder *)arg1;
- (void)audioRecorderDisconnected:(CSAudioRecorder *)arg1;
- (void)voiceTriggerDetectedOnAOP:(NSDictionary *)arg1;
- (void)audioRecorder:(CSAudioRecorder *)arg1 didSetAudioSessionActive:(BOOL)arg2;
- (void)audioRecorder:(CSAudioRecorder *)arg1 willSetAudioSessionActive:(BOOL)arg2;
- (void)audioRecorderEndRecordInterruption:(CSAudioRecorder *)arg1;
- (void)audioRecorderBeginRecordInterruption:(CSAudioRecorder *)arg1 withContext:(NSDictionary *)arg2;
- (void)audioRecorderBeginRecordInterruption:(CSAudioRecorder *)arg1;
- (void)audioRecorderDidFinishAlertPlayback:(CSAudioRecorder *)arg1 ofType:(long long)arg2 error:(NSError *)arg3;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(CSAudioRecorder *)arg1 toConfiguration:(long long)arg2;
- (void)audioRecorderDidStopRecord:(CSAudioRecorder *)arg1 audioStreamHandleId:(NSUInteger)arg2 reason:(long long)arg3;
- (void)audioRecorderDidStartRecord:(CSAudioRecorder *)arg1 audioStreamHandleId:(NSUInteger)arg2 successfully:(BOOL)arg3 error:(NSError *)arg4;
@end
