//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/_PARSearchResponse_Section-Protocol.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARSearchResponse_Section : PBCodable <_PARSearchResponse_Section, NSSecureCoding>
{
    BOOL _doNotFold;
    int _blockId;
    NSString *_header;
    NSString *_moreLabel;
    NSString *_moreUrl;
    NSString *_morePunchout;
    NSArray *_resultIdentifiers;
    NSUInteger _whichMore;
}

@property(readonly, nonatomic) NSUInteger whichMore; // @synthesize whichMore=_whichMore;
@property(copy, nonatomic) NSArray *resultIdentifiers; // @synthesize resultIdentifiers=_resultIdentifiers;
@property(nonatomic) BOOL doNotFold; // @synthesize doNotFold=_doNotFold;
@property(nonatomic) int blockId; // @synthesize blockId=_blockId;
@property(copy, nonatomic) NSString *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)resultIdentifiersAtIndex:(NSUInteger)arg1;
- (NSUInteger)resultIdentifiersCount;
- (void)addResultIdentifiers:(id)arg1;
- (void)clearResultIdentifiers;
@property(copy, nonatomic) NSString *morePunchout; // @synthesize morePunchout=_morePunchout;
@property(copy, nonatomic) NSString *moreUrl; // @synthesize moreUrl=_moreUrl;

@end
