//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSError, SKPayment, SKPaymentQueue, SKProduct;

@protocol SKPaymentTransactionObserver <NSObject>
- (void)paymentQueue:(SKPaymentQueue *)arg1 updatedTransactions:(NSArray *)arg2;

@optional
- (void)paymentQueueDidChangeStorefront:(SKPaymentQueue *)arg1;
- (BOOL)paymentQueue:(SKPaymentQueue *)arg1 shouldAddStorePayment:(SKPayment *)arg2 forProduct:(SKProduct *)arg3;
- (void)paymentQueue:(SKPaymentQueue *)arg1 updatedDownloads:(NSArray *)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(SKPaymentQueue *)arg1;
- (void)paymentQueue:(SKPaymentQueue *)arg1 restoreCompletedTransactionsFailedWithError:(NSError *)arg2;
- (void)paymentQueue:(SKPaymentQueue *)arg1 removedTransactions:(NSArray *)arg2;
@end
