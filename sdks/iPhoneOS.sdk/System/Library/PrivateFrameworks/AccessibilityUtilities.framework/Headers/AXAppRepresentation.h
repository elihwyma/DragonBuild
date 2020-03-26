//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface AXAppRepresentation : NSObject <NSSecureCoding>
{
    int _pid;
    NSString *_bundleIdentifier;
    long long _layoutRole;
}

+ (BOOL)supportsSecureCoding;
+ (id)appWithPID:(int)arg1 bundleID:(id)arg2;
@property(nonatomic) long long layoutRole; // @synthesize layoutRole=_layoutRole;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) int pid; // @synthesize pid=_pid;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isLayoutFullscreenModal;
@property(readonly, nonatomic) BOOL isLayoutPrimary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)_commonInit;
- (id)init;

@end
