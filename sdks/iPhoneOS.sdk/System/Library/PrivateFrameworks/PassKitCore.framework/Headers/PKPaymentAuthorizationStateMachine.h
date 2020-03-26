//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/CBCentralManagerDelegate-Protocol.h>
#import <PassKitCore/PKContinuityPaymentCoordinatorDelegate-Protocol.h>

@class CBCentralManager, NSArray, NSMutableArray, NSString, PKContinuityPaymentCoordinator, PKContinuityPaymentService, PKInAppPaymentSession, PKPaymentAuthorizationClientCallbackStateParam, PKPaymentAuthorizationDataModel, PKPaymentService, PKPaymentWebService, PKPeerPaymentSession;
@protocol OS_dispatch_group, OS_dispatch_source, PKAggregateDictionaryProtocol, PKPaymentAuthorizationStateMachineDelegate;

@interface PKPaymentAuthorizationStateMachine : NSObject <PKContinuityPaymentCoordinatorDelegate, CBCentralManagerDelegate>
{
    BOOL _hasReceivedRemoteDeviceUpdate;
    BOOL _awaitingClientCallbackReply;
    BOOL _awaitingWebServiceResponse;
    BOOL _detectedBluetoothOn;
    CBCentralManager *_bluetoothCentralManager;
    PKPaymentService *_paymentService;
    PKPaymentWebService *_paymentWebService;
    PKPaymentAuthorizationDataModel *_model;
    id <PKAggregateDictionaryProtocol> _aggregateDictionary;
    PKInAppPaymentSession *_inAppPaymentSession;
    PKPeerPaymentSession *_peerPaymentSession;
    PKContinuityPaymentService *_continuityPaymentService;
    double _updatePaymentDeviceTimeout;
    id <PKPaymentAuthorizationStateMachineDelegate> _delegate;
    NSUInteger _state;
    PKContinuityPaymentCoordinator *_continuityPaymentCoordinator;
    NSMutableArray *_callbackQueue;
    NSUInteger _hostApplicationState;
    NSObject<OS_dispatch_source> *_clientCallbackTimer;
    PKPaymentAuthorizationClientCallbackStateParam *_mostRecentClientCallback;
    NSString *_instanceIdentifier;
    NSUInteger _prepareTransactionDetailsCounter;
    NSObject<OS_dispatch_group> *_delayAuthorizedStateGroup;
    NSArray *_remoteDevicesToUpdate;
}

@property(retain, nonatomic) NSArray *remoteDevicesToUpdate; // @synthesize remoteDevicesToUpdate=_remoteDevicesToUpdate;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *delayAuthorizedStateGroup; // @synthesize delayAuthorizedStateGroup=_delayAuthorizedStateGroup;
@property(nonatomic) BOOL detectedBluetoothOn; // @synthesize detectedBluetoothOn=_detectedBluetoothOn;
@property(nonatomic) NSUInteger prepareTransactionDetailsCounter; // @synthesize prepareTransactionDetailsCounter=_prepareTransactionDetailsCounter;
@property(retain, nonatomic) NSString *instanceIdentifier; // @synthesize instanceIdentifier=_instanceIdentifier;
@property(nonatomic) BOOL awaitingWebServiceResponse; // @synthesize awaitingWebServiceResponse=_awaitingWebServiceResponse;
@property(retain, nonatomic) PKPaymentAuthorizationClientCallbackStateParam *mostRecentClientCallback; // @synthesize mostRecentClientCallback=_mostRecentClientCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *clientCallbackTimer; // @synthesize clientCallbackTimer=_clientCallbackTimer;
@property(nonatomic) BOOL awaitingClientCallbackReply; // @synthesize awaitingClientCallbackReply=_awaitingClientCallbackReply;
@property(nonatomic) BOOL hasReceivedRemoteDeviceUpdate; // @synthesize hasReceivedRemoteDeviceUpdate=_hasReceivedRemoteDeviceUpdate;
@property(nonatomic) NSUInteger hostApplicationState; // @synthesize hostApplicationState=_hostApplicationState;
@property(retain, nonatomic) NSMutableArray *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) PKContinuityPaymentCoordinator *continuityPaymentCoordinator; // @synthesize continuityPaymentCoordinator=_continuityPaymentCoordinator;
@property(nonatomic, setter=_setState:) NSUInteger state; // @synthesize state=_state;
@property(nonatomic) __weak id <PKPaymentAuthorizationStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double updatePaymentDeviceTimeout; // @synthesize updatePaymentDeviceTimeout=_updatePaymentDeviceTimeout;
@property(retain, nonatomic) PKContinuityPaymentService *continuityPaymentService; // @synthesize continuityPaymentService=_continuityPaymentService;
@property(retain, nonatomic) PKPeerPaymentSession *peerPaymentSession; // @synthesize peerPaymentSession=_peerPaymentSession;
@property(retain, nonatomic) PKInAppPaymentSession *inAppPaymentSession; // @synthesize inAppPaymentSession=_inAppPaymentSession;
@property(retain, nonatomic) id <PKAggregateDictionaryProtocol> aggregateDictionary; // @synthesize aggregateDictionary=_aggregateDictionary;
@property(retain, nonatomic) PKPaymentAuthorizationDataModel *model; // @synthesize model=_model;
@property(retain, nonatomic) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
@property(retain, nonatomic) PKPaymentService *paymentService; // @synthesize paymentService=_paymentService;
// - (void).cxx_destruct;
- (void)_simulatePayment;
- (id)_transactionWithPurchase:(id)arg1 paymentHash:(id)arg2;
- (id)_transactionWithPaymentToken:(id)arg1;
- (id)_billingInformationFromPaymentRequest:(id)arg1;
- (void)_applyBillingInformationToAuthorizedQuote:(id)arg1;
- (void)_applyBillingInformationToPayment:(id)arg1;
- (void)_applyShippingMethodToPayment:(id)arg1;
- (void)_applyShippingInformationToPayment:(id)arg1;
- (void)_performAuthorizationWithParam:(id)arg1;
- (void)_handleStateMachineWillStartNotification:(id)arg1;
- (void)_postStateMachineWillStartNotification;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)_performDidAuthorizeCallbackWithParam:(id)arg1;
- (void)_performRewrapRequestWithParam:(id)arg1;
- (void)_performPrepareTransactionDetailsRequestWithParam:(id)arg1;
- (void)_performNonceRequestWithParam:(id)arg1;
- (id)_pendingTransactionOnAlternateFundingSourceForAutorizedPeerPaymentQuote:(id)arg1;
- (id)_pendingTransactionOnPeerPaymentPassForAuthorizedPeerPaymentQuote:(id)arg1;
- (void)_enqueueDidAuthorizeAccountServicePaymentRequestWithApplePayTrustSignature:(id)arg1;
- (void)_enqueueDidAuthorizeDisbursementWithVoucher:(id)arg1;
- (void)_enqueueDidAuthorizePeerPaymentQuoteWithAuthorizedQuote:(id)arg1;
- (void)_enqeueDidAuthorizePurchaseWithParam:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithPayment:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithRemotePayment:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithByPassPayment:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithToken:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithInstallmentAuthorizationToken:(id)arg1;
- (void)_enqueueDidUpdateAccountServicePaymentMethod:(id)arg1;
- (void)_enqueueDidSelectRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2;
- (void)_enqueueDidSelectRemotePaymentInstrument:(id)arg1;
- (void)_enqueueDidSelectPaymentPass:(id)arg1 paymentApplication:(id)arg2;
- (void)_enqueueDidSelectPaymentPass:(id)arg1;
- (void)_enqueueDidSelectPaymentMethodWithQuote:(id)arg1;
- (void)_enqueueDidSelectPaymentMethodWithBindToken:(id)arg1;
- (void)_enqueueDidSelectShippingContact:(id)arg1;
- (void)_enqueueDidRequestMerchantSession;
- (void)_clientCallbackTimedOut;
- (void)_cancelClientCallbackTimer;
- (void)_startClientCallbackTimer;
- (BOOL)hasPendingCallbacks;
- (id)_dequeuePendingCallbackParam;
- (void)_enqueueCallbackOfKind:(long long)arg1 withObject:(id)arg2;
- (void)_dispatchNextCallbackParam;
- (void)_updateModelWithShippingMethods:(id)arg1 paymentSummaryItems:(id)arg2 contentItems:(id)arg3;
- (void)_advanceToNextState;
- (void)_sendDidTransitionFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 withParam:(id)arg3;
- (void)_enqueueInitialCallbacks;
- (void)_performInstallmentBind;
- (void)_startPayment;
- (void)_startRemoteDeviceUpdate;
- (void)_startHandoff;
- (void)_start;
- (id)_createNewRemotePaymentRequest;
- (void)_performCancelRemotePaymentRequest;
- (void)_performSendPaymentResult:(id)arg1;
- (void)_performSendClientUpdateWithShippingMethods:(id)arg1 paymentSummaryItems:(id)arg2 paymentApplication:(id)arg3 status:(long long)arg4;
- (void)_performSendRemotePaymentRequest;
- (void)_performUpdatePaymentDevices;
- (void)_deviceUpdateDidFailWithNoEiligbleRemoteDevices:(id)arg1;
- (void)_updateModelWithRemoteDevices:(id)arg1;
- (void)_processBluetoothState:(long long)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)continuityPaymentCoordinatorDidReceiveCancellation:(id)arg1;
- (void)continuityPaymentCoordinator:(id)arg1 didReceivePayment:(id)arg2;
- (void)continuityPaymentCoordinator:(id)arg1 didReceiveUpdatedPaymentDevices:(id)arg2;
- (void)continuityPaymentCoordinator:(id)arg1 didTimeoutTotalWithPaymentDevices:(id)arg2;
- (void)continuityPaymentCoordinatorDidTimeoutUpdatePaymentDevices:(id)arg1;
- (void)endDelayingAuthorizedState;
- (void)beginDelayingAuthorizedState;
- (void)delayAuthorizedStateByDuration:(double)arg1;
- (void)didReceivePaymentAuthorizationStatus:(long long)arg1;
- (void)didReceivePaymentAuthorizationResult:(id)arg1;
- (void)didAuthenticateWithAuthenticatorEvaluationResponse:(id)arg1;
- (void)didAuthenticateWithCredential:(id)arg1;
- (void)didReceivePaymentMethodCompleteWithSummaryItems:(id)arg1;
- (void)didReceivePaymentMethodCompleteWithUpdate:(id)arg1;
- (void)didSelectRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2;
- (void)didSelectRemotePaymentInstrument:(id)arg1;
- (void)didSelectPaymentPass:(id)arg1 paymentApplication:(id)arg2;
- (void)didSelectPaymentPass:(id)arg1;
- (void)didReceiveShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (void)didReceiveUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2;
- (void)didReceiveShippingMethodCompleteWithUpdate:(id)arg1;
- (void)didSelectShippingMethod:(id)arg1;
- (void)didReceiveShippingContactCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)didReceiveShippingContactCompleteWithUpdate:(id)arg1;
- (void)didSelectBankAccount:(id)arg1;
- (void)didUpdatePeerPaymentBalance:(id)arg1;
- (void)didSelectShippingContact:(id)arg1;
- (void)_processErrorsForDataType:(long long)arg1;
- (void)didSelectBillingAddress:(id)arg1;
- (void)didSelectShippingName:(id)arg1;
- (void)didSelectShippingPhoneNumber:(id)arg1;
- (void)didSelectShippingEmail:(id)arg1;
- (void)didReceiveMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)didRequestMerchantSession;
- (void)didResolveError;
- (void)didEncounterFatalError:(id)arg1;
- (void)didEncounterError:(id)arg1;
- (void)didCancel;
- (void)didBecomeOccluded:(BOOL)arg1;
- (void)didBecomeActive:(BOOL)arg1;
- (void)didResignActive:(BOOL)arg1;
- (BOOL)canSelectPaymentOptions;
- (void)start;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL useSecureElement;
- (void)_removeWebServiceConfigurationIfNeeded;
- (void)_applyWebServiceConfigurationIfNeeded;
@property(retain, nonatomic) CBCentralManager *bluetoothCentralManager; // @synthesize bluetoothCentralManager=_bluetoothCentralManager;
- (void)__setState:(NSUInteger)arg1 param:(id)arg2;
- (void)_setState:(NSUInteger)arg1 param:(id)arg2;
- (void)dealloc;
- (id)init;

@end
