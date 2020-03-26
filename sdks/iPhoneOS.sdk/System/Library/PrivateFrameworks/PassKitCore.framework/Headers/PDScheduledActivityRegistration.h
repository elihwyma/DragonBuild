//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PDScheduledActivityCriteria;
@protocol NSObject><NSSecureCoding;

@interface PDScheduledActivityRegistration : NSObject <NSSecureCoding>
{
    PDScheduledActivityCriteria *_activityCriteria;
    id <NSObject><NSSecureCoding> _activityContext;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) id <NSObject><NSSecureCoding> activityContext; // @synthesize activityContext=_activityContext;
@property(readonly, nonatomic) PDScheduledActivityCriteria *activityCriteria; // @synthesize activityCriteria=_activityCriteria;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToScheduledActivityRegistration:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithActivityCriteria:(id)arg1 activityContext:(id)arg2;

@end
