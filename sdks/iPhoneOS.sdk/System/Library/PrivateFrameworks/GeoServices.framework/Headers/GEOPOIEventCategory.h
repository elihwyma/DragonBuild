//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

@interface GEOPOIEventCategory : NSObject <NSSecureCoding>
{
    NSString *_category;
    NSArray *_localizedNames;
}

+ (BOOL)supportsSecureCoding;
+ (id)poiEventCategoriesForEventCategories:(id)arg1;
@property(readonly, nonatomic) NSArray *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
// - (void).cxx_destruct;
- (id)parsePDCategories:(id)arg1;
- (BOOL)isEqualToPOIEventCategory:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCategory:(id)arg1 localizedNames:(id)arg2;
- (id)initWithEventCategory:(id)arg1;
- (id)init;

@end
