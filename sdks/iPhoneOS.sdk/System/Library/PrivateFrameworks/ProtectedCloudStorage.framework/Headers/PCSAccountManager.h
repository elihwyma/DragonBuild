//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PCSAccountManager : NSObject
{
    NSString *_dsid;
}

@property(retain) NSString *dsid; // @synthesize dsid=_dsid;
// - (void).cxx_destruct;
- (NSUInteger)accountStatus;
- (id)initWithDSID:(id)arg1;

@end
