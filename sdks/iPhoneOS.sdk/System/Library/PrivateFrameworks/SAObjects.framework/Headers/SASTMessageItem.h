//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTMessageItem : AceObject <SASTTemplateItem>
{
}

+ (id)messageItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)messageItem;
@property(copy, nonatomic) NSString *serviceType;
@property(retain, nonatomic) SAUIDecoratedText *recipient;
@property(retain, nonatomic) SAUIDecoratedText *content;
@property(copy, nonatomic) NSString *bundleId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
