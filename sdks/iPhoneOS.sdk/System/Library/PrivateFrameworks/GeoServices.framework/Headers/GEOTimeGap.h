//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBUnknownFields;

@interface GEOTimeGap : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _seconds;
    unsigned int _subsequentEventId;
    BOOL _ifChained;
    struct {
        unsigned int has_seconds:1;
        unsigned int has_subsequentEventId:1;
        unsigned int has_ifChained:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasIfChained;
@property(nonatomic) BOOL ifChained;
@property(nonatomic) BOOL hasSeconds;
@property(nonatomic) unsigned int seconds;
@property(nonatomic) BOOL hasSubsequentEventId;
@property(nonatomic) unsigned int subsequentEventId;

@end
