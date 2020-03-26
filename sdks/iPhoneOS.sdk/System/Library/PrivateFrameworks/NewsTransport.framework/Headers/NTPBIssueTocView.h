//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBIssueTocView : PBCodable <NSCopying>
{
    NSString *_articleId;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    NSString *_parentFeedId;
    int _parentFeedType;
    NSString *_sourceChannelId;
    BOOL _adSupportedChannel;
    struct {
        unsigned int parentFeedType:1;
        unsigned int adSupportedChannel:1;
    } _has;
}

@property(nonatomic) BOOL adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *parentFeedId; // @synthesize parentFeedId=_parentFeedId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property(retain, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAdSupportedChannel;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasParentFeedId;
- (int)StringAsParentFeedType:(id)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasParentFeedType;
@property(nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property(readonly, nonatomic) BOOL hasArticleId;
@property(readonly, nonatomic) BOOL hasIssueViewData;
@property(readonly, nonatomic) BOOL hasIssueExposureData;
@property(readonly, nonatomic) BOOL hasIssueData;

@end
