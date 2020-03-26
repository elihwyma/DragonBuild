//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTipFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOPDPhotoSizeFilterValue _photoSizeFilters;
    NSUInteger _photoSizeFiltersCount;
    NSUInteger _photoSizeFiltersSpace;
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
- (void)setPhotoSizeFilters:(struct GEOPDPhotoSizeFilterValue )arg1 count:(NSUInteger)arg2;
- (struct GEOPDPhotoSizeFilterValue)photoSizeFilterAtIndex:(NSUInteger)arg1;
- (void)addPhotoSizeFilter:(struct GEOPDPhotoSizeFilterValue)arg1;
- (void)clearPhotoSizeFilters;
@property(readonly, nonatomic) struct GEOPDPhotoSizeFilterValue photoSizeFilters;
@property(readonly, nonatomic) NSUInteger photoSizeFiltersCount;
- (void)dealloc;

@end
