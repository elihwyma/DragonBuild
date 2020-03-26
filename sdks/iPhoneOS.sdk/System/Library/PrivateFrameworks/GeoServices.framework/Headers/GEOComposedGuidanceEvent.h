//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GEOComposedRoute, GEOComposedRouteStep, GEOGuidanceEvent, GEOJunction, GEOJunctionView, GEONameInfo, NSArray, NSMutableArray, NSString, NSUUID;

@interface GEOComposedGuidanceEvent : NSObject <NSSecureCoding>
{
    NSUUID *_uniqueID;
    NSUInteger _creationOrder;
    GEOGuidanceEvent *_guidanceEvent;
    GEOComposedRoute *_route;
    NSUInteger _source;
    NSUInteger _stepIndex;
    NSUInteger _enrouteNoticeIndex;
    NSUInteger _sourceIndex;
    NSMutableArray *_lanes;
    double _startValidDistance;
    double _endValidDistance;
    double _referencePointDistance;
    double _distanceForStrings;
    GEOJunction *_maneuverJunction;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double distanceForStrings; // @synthesize distanceForStrings=_distanceForStrings;
@property(readonly, nonatomic) double referencePointDistance; // @synthesize referencePointDistance=_referencePointDistance;
@property(readonly, nonatomic) NSUInteger enrouteNoticeIndex; // @synthesize enrouteNoticeIndex=_enrouteNoticeIndex;
@property(retain, nonatomic) GEOGuidanceEvent *guidanceEvent; // @synthesize guidanceEvent=_guidanceEvent;
@property(readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)comparePriority:(id)arg1;
- (long long)compareFactoringInSpeed:(id)arg1 speed:(double)arg2;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (double)desiredTimeGapToEvent:(id)arg1 chained:(BOOL)arg2;
- (double)triggerDistanceForSpeed:(double)arg1 andDuration:(id /* CDUnknownBlockType */)arg2;
- (double)endDistanceForSpeed:(double)arg1;
- (double)startDistanceForSpeed:(double)arg1;
- (BOOL)isValidForSpeed:(double)arg1;
@property(readonly, nonatomic) double endValidDistance; // @synthesize endValidDistance=_endValidDistance;
@property(readonly, nonatomic) double startValidDistance; // @synthesize startValidDistance=_startValidDistance;
@property(readonly, nonatomic) NSUInteger numChainedAnnouncements;
@property(readonly, nonatomic) BOOL isLaneGuidanceForManeuver;
@property(readonly, nonatomic) int composedGuidanceEventType;
@property(readonly, nonatomic) NSArray *laneInstructions;
@property(readonly, nonatomic) NSArray *laneTitles;
@property(readonly, nonatomic) NSArray *lanes;
@property(readonly, nonatomic) BOOL isSticky;
@property(readonly, nonatomic) BOOL hasHaptics;
@property(readonly, nonatomic) double repetitionInterval;
@property(readonly, nonatomic) NSArray *announcements;
@property(readonly, nonatomic) NSString *exclusiveSetIdentifier;
@property(readonly, nonatomic) GEOJunctionView *junctionView;
@property(readonly, nonatomic) GEOJunction *maneuverJunction;
@property(readonly, nonatomic) int drivingSide;
@property(readonly, nonatomic) int maneuverArrow;
@property(readonly, nonatomic) GEONameInfo *shieldInfo;
@property(readonly, nonatomic) NSArray *signDetails;
@property(readonly, nonatomic) NSArray *signTitles;
@property(readonly, nonatomic) NSUInteger stackRanking;
@property(readonly, nonatomic) BOOL hasJunctionView;
@property(readonly, nonatomic) BOOL hasSpokenGuidance;
@property(readonly, nonatomic) BOOL hasSignGuidance;
@property(readonly, nonatomic) NSUInteger sourceIndex;
@property(readonly, nonatomic) NSUInteger source;
- (void)_findSource;
@property(readonly, nonatomic) GEOComposedRouteStep *step;
- (id)description;
- (NSUInteger)_junctionViewIDForData:(id)arg1;
- (void)_lazyInit;
- (BOOL)_needsLazyInit;
- (id)initWithGuidanceEvent:(id)arg1 stepIndex:(NSUInteger)arg2 composedRoute:(id)arg3;
- (void)setRoute:(id)arg1;

@end
