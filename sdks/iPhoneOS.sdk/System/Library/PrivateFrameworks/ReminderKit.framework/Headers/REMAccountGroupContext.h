//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class REMAccount;

@interface REMAccountGroupContext : NSObject
{
    REMAccount *_account;
}

@property(retain, nonatomic) REMAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;
- (id)fetchGroupsWithError:(id )arg1;
- (id)initWithAccount:(id)arg1;

@end
