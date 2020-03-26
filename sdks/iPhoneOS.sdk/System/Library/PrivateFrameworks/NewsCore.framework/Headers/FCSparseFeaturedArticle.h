//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransformationItem-Protocol.h>

@class CKRecord, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSArray, NSDate, NSString;

@interface FCSparseFeaturedArticle : NSObject <FCFeedTransformationItem>
{
    CKRecord *_articleRecord;
    NSString *_storefrontID;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *_scores;
}

+ (id)requiredArticleRecordKeysWithStorefrontID:(id)arg1;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *scores; // @synthesize scores=_scores;
@property(readonly, copy, nonatomic) NSString *storefrontID; // @synthesize storefrontID=_storefrontID;
@property(readonly, nonatomic) CKRecord *articleRecord; // @synthesize articleRecord=_articleRecord;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL canBePurchased;
@property(readonly, nonatomic) long long publisherArticleVersion;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property(readonly, nonatomic, getter=isFromBlockedStorefront) BOOL fromBlockedStorefront;
@property(readonly, nonatomic) NSUInteger feedHalfLifeMilliseconds;
@property(readonly, nonatomic) NSUInteger publishDateMilliseconds;
@property(readonly, copy, nonatomic) NSString *sourceChannelID;
@property(readonly, nonatomic) NSUInteger order;
@property(readonly, nonatomic) NSUInteger contentType;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *feedID;
@property(readonly, nonatomic) long long bodyTextLength;
- (void)enumerateTopicCohortsWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property(readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property(readonly, nonatomic) BOOL hasVideo;
@property(readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property(readonly, nonatomic, getter=isPaid) BOOL paid;
@property(readonly, nonatomic, getter=isANF) BOOL anf;
@property(readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property(readonly, nonatomic) double globalUserFeedback;
@property(readonly, copy, nonatomic) NSArray *topicIDs;
@property(readonly, copy, nonatomic) NSString *publisherID;
@property(readonly, nonatomic) NSUInteger halfLife;
@property(readonly, copy, nonatomic) NSDate *publishDate;
@property(readonly, copy, nonatomic) NSString *itemID;
@property(readonly, copy, nonatomic) NSString *sourceFeedID;
- (id)initWithArticleRecord:(id)arg1 storefrontID:(id)arg2;

@end
