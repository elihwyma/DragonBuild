//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IAPNavigationAccessoryComponent : NSObject
{
    BOOL _isEnabled;
    BOOL _requestSourceName;
    BOOL _requestSourceSupportsRouteGuidance;
    BOOL __enabledModified;
    NSUInteger _identifier;
    NSString *_name;
    NSUInteger _maxLength_CurrentRoadName;
    NSUInteger _maxLength_DestinationRoadName;
    NSUInteger _maxLength_PostManeuverRoadName;
    NSUInteger _maxLength_ManeuverDescription;
    NSUInteger _maxCapacity_GuidanceManeuver;
}

@property BOOL _enabledModified; // @synthesize _enabledModified=__enabledModified;
@property BOOL requestSourceSupportsRouteGuidance; // @synthesize requestSourceSupportsRouteGuidance=_requestSourceSupportsRouteGuidance;
@property BOOL requestSourceName; // @synthesize requestSourceName=_requestSourceName;
@property NSUInteger maxCapacity_GuidanceManeuver; // @synthesize maxCapacity_GuidanceManeuver=_maxCapacity_GuidanceManeuver;
@property NSUInteger maxLength_ManeuverDescription; // @synthesize maxLength_ManeuverDescription=_maxLength_ManeuverDescription;
@property NSUInteger maxLength_PostManeuverRoadName; // @synthesize maxLength_PostManeuverRoadName=_maxLength_PostManeuverRoadName;
@property NSUInteger maxLength_DestinationRoadName; // @synthesize maxLength_DestinationRoadName=_maxLength_DestinationRoadName;
@property NSUInteger maxLength_CurrentRoadName; // @synthesize maxLength_CurrentRoadName=_maxLength_CurrentRoadName;
@property BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property(retain) NSString *name; // @synthesize name=_name;
@property NSUInteger identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDict:(id)arg1;

@end
