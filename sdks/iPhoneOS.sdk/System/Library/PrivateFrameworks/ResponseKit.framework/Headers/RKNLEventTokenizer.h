//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RKNLEventTokenizer : NSObject
{
    NSString *_languageID;
    struct __CFStringTokenizer _tokenizer;
}

+ (BOOL)isSpecialToken:(id)arg1;
+ (void)initialize;
@property struct __CFStringTokenizer tokenizer; // @synthesize tokenizer=_tokenizer;
@property(readonly) NSString *languageID; // @synthesize languageID=_languageID;
// - (void).cxx_destruct;
- (id)buildTokenSquence:(id)arg1 withOffset:(NSUInteger)arg2;
- (id)getTokens:(id)arg1;
- (id)processForHyphenation:(id)arg1;
- (id)processForEmoticons:(id)arg1;
- (id)transform:(id)arg1;
- (id)processForEmoticonsAndEmojis:(id)arg1;
- (BOOL)hasEmoticon:(id)arg1;
- (id)tokenizeWithDataDetectors:(id)arg1;
- (id)initWithLanguageID:(id)arg1;
- (void)dealloc;

@end
