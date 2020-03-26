//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSData, NSDate, NSDecimalNumber, NSString, NSURL, PKCurrencyAmount, PKPeerPaymentRecipient;

@interface PKPeerPaymentQuote : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSArray *_items;
    NSString *_disclosureText;
    NSURL *_disclosureURL;
    NSDecimalNumber *_currentBalance;
    NSString *_currentBalanceCurrency;
    NSData *_appleHash;
    NSData *_externalHash;
    NSDecimalNumber *_totalReceiveAmount;
    NSString *_totalReceiveAmountCurrency;
    NSDecimalNumber *_totalFees;
    NSString *_totalFeesCurrency;
    NSDate *_validUntil;
    NSUInteger _riskLevel;
    PKPeerPaymentRecipient *_recipient;
    NSString *_bankName;
    NSString *_routingNumber;
    NSString *_accountNumber;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property(copy, nonatomic) NSString *routingNumber; // @synthesize routingNumber=_routingNumber;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(retain, nonatomic) PKPeerPaymentRecipient *recipient; // @synthesize recipient=_recipient;
@property(readonly, nonatomic) NSUInteger riskLevel; // @synthesize riskLevel=_riskLevel;
@property(readonly, copy, nonatomic) NSDate *validUntil; // @synthesize validUntil=_validUntil;
@property(readonly, copy, nonatomic) NSString *totalFeesCurrency; // @synthesize totalFeesCurrency=_totalFeesCurrency;
@property(readonly, copy, nonatomic) NSDecimalNumber *totalFees; // @synthesize totalFees=_totalFees;
@property(readonly, copy, nonatomic) NSString *totalReceiveAmountCurrency; // @synthesize totalReceiveAmountCurrency=_totalReceiveAmountCurrency;
@property(readonly, copy, nonatomic) NSDecimalNumber *totalReceiveAmount; // @synthesize totalReceiveAmount=_totalReceiveAmount;
@property(readonly, copy, nonatomic) NSData *externalHash; // @synthesize externalHash=_externalHash;
@property(readonly, copy, nonatomic) NSData *appleHash; // @synthesize appleHash=_appleHash;
@property(readonly, copy, nonatomic) NSString *currentBalanceCurrency; // @synthesize currentBalanceCurrency=_currentBalanceCurrency;
@property(readonly, copy, nonatomic) NSDecimalNumber *currentBalance; // @synthesize currentBalance=_currentBalance;
@property(readonly, copy, nonatomic) NSURL *disclosureURL; // @synthesize disclosureURL=_disclosureURL;
@property(readonly, copy, nonatomic) NSString *disclosureText; // @synthesize disclosureText=_disclosureText;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)firstQuoteItemOfType:(NSUInteger)arg1;
- (BOOL)hasExpired;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic) PKCurrencyAmount *calculatedTotalAmount;
@property(readonly, nonatomic) double validityDuration;

@end
