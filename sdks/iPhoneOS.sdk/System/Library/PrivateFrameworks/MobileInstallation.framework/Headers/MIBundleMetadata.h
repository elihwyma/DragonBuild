//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSError, NSString;

@interface MIBundleMetadata : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_installDate;
    NSString *_installBuildVersion;
    NSUInteger _installType;
    NSUInteger _placeholderFailureReason;
    NSError *_placeholderFailureUnderlyingError;
    NSUInteger _placeholderFailureUnderlyingErrorSource;
    NSString *_watchKitAppExecutableHash;
    NSUInteger _autoInstallOverride;
}

+ (id)metadataFromURL:(id)arg1 error:(id )arg2;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger autoInstallOverride; // @synthesize autoInstallOverride=_autoInstallOverride;
@property(copy, nonatomic) NSString *watchKitAppExecutableHash; // @synthesize watchKitAppExecutableHash=_watchKitAppExecutableHash;
@property(nonatomic) NSUInteger placeholderFailureUnderlyingErrorSource; // @synthesize placeholderFailureUnderlyingErrorSource=_placeholderFailureUnderlyingErrorSource;
@property(retain, nonatomic) NSError *placeholderFailureUnderlyingError; // @synthesize placeholderFailureUnderlyingError=_placeholderFailureUnderlyingError;
@property(nonatomic) NSUInteger placeholderFailureReason; // @synthesize placeholderFailureReason=_placeholderFailureReason;
@property(nonatomic) NSUInteger installType; // @synthesize installType=_installType;
@property(copy, nonatomic) NSString *installBuildVersion; // @synthesize installBuildVersion=_installBuildVersion;
@property(copy, nonatomic) NSDate *installDate; // @synthesize installDate=_installDate;
// - (void).cxx_destruct;
- (BOOL)serializeToURL:(id)arg1 error:(id )arg2;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;

@end
