//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryFooterViewModelPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXMutableCuratedLibraryFooterController-Protocol.h>
#import <PhotosUICore/PXPhotosGlobalFooterViewDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>

@class NSTimer, PXCuratedLibraryFooterViewModel, PXCuratedLibraryItemCountsController, PXCuratedLibraryLayout, PXCuratedLibraryViewModel, PXGView, PXPhotosGlobalFooterView, PXUpdater, UIView;
@protocol PXCuratedLibraryFooterControllerDelegate;

@interface PXCuratedLibraryFooterController : PXObservable <PXMutableCuratedLibraryFooterController, PXChangeObserver, PXScrollViewControllerObserver, PXPhotosGlobalFooterViewDelegate, PXCuratedLibraryFooterViewModelPresentationDelegate>
{
    double _lastUserScrollTime;
    BOOL _footerDidAutoScroll;
    NSTimer *_footerAutoScrollMinimumIdleTimer;
    PXCuratedLibraryFooterViewModel *_footerViewModel;
    long long _presentedZoomLevel;
    PXPhotosGlobalFooterView *_reusableFooterView;
    BOOL _isUpdatingFooter;
    BOOL _wantsFooterMask;
    BOOL _hasAppeared;
    BOOL _wantsFooter;
    BOOL _isFooterVisible;
    BOOL _hasAppearedOnce;
    BOOL _footerNeedsReveal;
    id <PXCuratedLibraryFooterControllerDelegate> _delegate;
    double _footerMaskVerticalOffset;
    PXGView *_gridView;
    PXCuratedLibraryLayout *_layout;
    PXCuratedLibraryViewModel *_viewModel;
    PXCuratedLibraryItemCountsController *_itemCountsController;
    PXUpdater *_updater;
    PXCuratedLibraryFooterViewModel *_footerViewModelIfLoaded;
    PXPhotosGlobalFooterView *_footerView;
    UIView *_footerMaskView;
}

+ (long long)_modeForZoomLevel:(long long)arg1;
@property(retain, nonatomic) UIView *footerMaskView; // @synthesize footerMaskView=_footerMaskView;
@property(retain, nonatomic) PXPhotosGlobalFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) PXCuratedLibraryFooterViewModel *footerViewModelIfLoaded; // @synthesize footerViewModelIfLoaded=_footerViewModelIfLoaded;
@property(nonatomic) BOOL footerNeedsReveal; // @synthesize footerNeedsReveal=_footerNeedsReveal;
@property(nonatomic) BOOL hasAppearedOnce; // @synthesize hasAppearedOnce=_hasAppearedOnce;
@property(nonatomic) BOOL isFooterVisible; // @synthesize isFooterVisible=_isFooterVisible;
@property(nonatomic) BOOL wantsFooter; // @synthesize wantsFooter=_wantsFooter;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) PXCuratedLibraryItemCountsController *itemCountsController; // @synthesize itemCountsController=_itemCountsController;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) PXCuratedLibraryLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) PXGView *gridView; // @synthesize gridView=_gridView;
@property(readonly, nonatomic) BOOL hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(readonly, nonatomic) double footerMaskVerticalOffset; // @synthesize footerMaskVerticalOffset=_footerMaskVerticalOffset;
@property(readonly, nonatomic) BOOL wantsFooterMask; // @synthesize wantsFooterMask=_wantsFooterMask;
@property(nonatomic) __weak id <PXCuratedLibraryFooterControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (NSObject )presentingViewControllerForFooterViewModel:(id)arg1;
- (void)photosGlobalFooterViewDidChangeHeight:(id)arg1;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_updateFooterMaskViewFrame;
- (void)_invalidateFooterMaskViewFrame;
- (void)_updateIsFooterVisible;
- (void)_invalidateIsFooterVisible;
- (void)_updateFooter;
- (void)_invalidateFooter;
- (void)_resetFooterViewModel;
- (void)_updateFooterMode;
- (void)_invalidateFooterMode;
- (void)_updateWantsFooter;
- (void)_invalidateWantsFooter;
- (void)_footerHasImportantInformationDidChange;
- (void)_conditionallyRevealPhotosFooterView;
- (void)_conditionallyRevealPhotosFooterViewWithLastUserScrollTime:(double)arg1;
- (BOOL)_shouldRevealPhotosFooterView;
- (BOOL)_shouldShowFooterForPresentedZoomLevel;
- (BOOL)_shouldShowFooterForGridViewState;
@property(readonly, nonatomic) BOOL isPullingFooter;
@property(readonly, nonatomic) BOOL isFooterOnlyPartiallyVisible;
- (double)footerVisibleAmountIncludingSafeAreaInsets:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isGridViewVisible;
- (void)_viewDidStartScrolling;
- (void)viewDidAppear;
- (void)performChanges:(id /* CDUnknownBlockType */)arg1;
- (void)_setNeedsUpdate;
- (void)didPerformChanges;
- (id)footerViewModel;
- (id)initWithGridView:(id)arg1 layout:(id)arg2 viewModel:(id)arg3 itemsCountsController:(id)arg4;
- (id)init;

@end
