//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@interface PAMediaConversionServiceAddPFMediaMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
{
    unsigned char _type;
    id _value;
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithType:(unsigned char)arg1 value:(id)arg2;
@property(retain) id value; // @synthesize value=_value;
@property unsigned char type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)processMetadata:(id)arg1;
- (BOOL)metadataNeedsProcessing:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
