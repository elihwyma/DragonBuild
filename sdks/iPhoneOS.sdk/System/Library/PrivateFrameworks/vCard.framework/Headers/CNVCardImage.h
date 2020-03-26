//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSDictionary;

@interface CNVCardImage : NSObject <NSCopying, NSMutableCopying>
{
    NSData *_data;
    NSDictionary *_cropRects;
    CGSize _size;
}

+ (CGSize)sizeOfImageData:(id)arg1;
@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSDictionary *cropRects; // @synthesize cropRects=_cropRects;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)describePropertiesWithBuilder:(id)arg1;
- (id)description;
- (id)initWithData:(id)arg1 cropRects:(id)arg2 size:(CGSize)arg3;
- (id)initWithData:(id)arg1 cropRects:(id)arg2;
- (id)init;

@end
