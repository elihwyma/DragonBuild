//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSSet, NSString, NSURL;

@interface ADAdSpaceConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    int _creativeType;
    float _containerWidth;
    float _containerHeight;
    float _reorientedContainerWidth;
    float _reorientedContainerHeight;
    long long _options;
    NSString *_identifier;
    NSURL *_serverURL;
    NSString *_advertisingSection;
    NSString *_authenticationUserName;
    NSSet *_context;
    NSString *_adSpaceContextJSON;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) float reorientedContainerHeight; // @synthesize reorientedContainerHeight=_reorientedContainerHeight;
@property(nonatomic) float reorientedContainerWidth; // @synthesize reorientedContainerWidth=_reorientedContainerWidth;
@property(nonatomic) float containerHeight; // @synthesize containerHeight=_containerHeight;
@property(nonatomic) float containerWidth; // @synthesize containerWidth=_containerWidth;
@property(copy, nonatomic) NSString *adSpaceContextJSON; // @synthesize adSpaceContextJSON=_adSpaceContextJSON;
@property(copy, nonatomic) NSSet *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(retain, nonatomic) NSString *advertisingSection; // @synthesize advertisingSection=_advertisingSection;
@property(retain, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(nonatomic) int creativeType; // @synthesize creativeType=_creativeType;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
