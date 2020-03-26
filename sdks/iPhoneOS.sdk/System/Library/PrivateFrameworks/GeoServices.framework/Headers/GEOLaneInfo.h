//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBUnknownFields;

@interface GEOLaneInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_arrows;
    BOOL _hov;
    BOOL _preferredForMultipleManeuvers;
    BOOL _supportsManeuver;
    struct {
        unsigned int has_hov:1;
        unsigned int has_preferredForMultipleManeuvers:1;
        unsigned int has_supportsManeuver:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)arrowType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)arrowAtIndex:(NSUInteger)arg1;
- (NSUInteger)arrowsCount;
- (void)addArrow:(id)arg1;
- (void)clearArrows;
@property(retain, nonatomic) NSMutableArray *arrows;
@property(nonatomic) BOOL hasHov;
@property(nonatomic) BOOL hov;
@property(nonatomic) BOOL hasPreferredForMultipleManeuvers;
@property(nonatomic) BOOL preferredForMultipleManeuvers;
@property(nonatomic) BOOL hasSupportsManeuver;
@property(nonatomic) BOOL supportsManeuver;

@end
