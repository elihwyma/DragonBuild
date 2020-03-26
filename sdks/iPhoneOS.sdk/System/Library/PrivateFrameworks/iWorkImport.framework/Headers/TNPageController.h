//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TNDocumentRoot, TNPageCoordinateDictionary, TNPrintProperties, TNSheet, TSUPointerKeyDictionary;
@protocol TNPageControllerDelegate;

__attribute__((visibility("hidden")))
@interface TNPageController : NSObject
{
    BOOL _pageCountsValid;
    BOOL _computingPageCounts;
    BOOL _maxPageCoordinateValid;
    BOOL _processingChanges;
    BOOL _updateViewScaleForDrawablesChangeAfterProcessingChanges;
    BOOL _postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges;
    BOOL _inDynamicContentScaleChange;
    NSObject<TNPageControllerDelegate> *_delegate;
    TNDocumentRoot *_documentRoot;
    TNSheet *_sheet;
    double _userViewScale;
    double _headerTextHeight;
    double _footerTextHeight;
    TNPageCoordinateDictionary *_pageLayoutCache;
    TSUPointerKeyDictionary *_hintCacheDictionary;
    TSUPointerKeyDictionary *_sheetPageCountCache;
    TNPageCoordinateDictionary *_headerLayerCache;
    TNPageCoordinateDictionary *_footerLayerCache;
    long long _cachedPageCountDuringDynamicContentScaleChange;
    long long _priorPageCount;
    long long _subsequentPageCount;
    struct TSUCellCoord _maxPageCoordinate;
    TNPrintProperties *_printProperties;
}

+ (double)autoFitContentScaleForSheet:(id)arg1;
+ (double)p_unclampedAutoFitContentScaleForSheet:(id)arg1;
+ (id)cachedAutoFitContentScaleDictionary;
@property(readonly, nonatomic) BOOL inDynamicContentScaleChange; // @synthesize inDynamicContentScaleChange=_inDynamicContentScaleChange;
@property(nonatomic) BOOL postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges; // @synthesize postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges=_postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges;
@property(nonatomic) BOOL updateViewScaleForDrawablesChangeAfterProcessingChanges; // @synthesize updateViewScaleForDrawablesChangeAfterProcessingChanges=_updateViewScaleForDrawablesChangeAfterProcessingChanges;
@property(nonatomic, getter=isProcessingChanges) BOOL processingChanges; // @synthesize processingChanges=_processingChanges;
@property(retain, nonatomic) TNPrintProperties *printProperties; // @synthesize printProperties=_printProperties;
@property(nonatomic) BOOL maxPageCoordinateValid; // @synthesize maxPageCoordinateValid=_maxPageCoordinateValid;
@property(nonatomic) struct TSUCellCoord maxPageCoordinate; // @synthesize maxPageCoordinate=_maxPageCoordinate;
@property(nonatomic) BOOL computingPageCounts; // @synthesize computingPageCounts=_computingPageCounts;
@property(nonatomic) BOOL pageCountsValid; // @synthesize pageCountsValid=_pageCountsValid;
@property(nonatomic) long long subsequentPageCount; // @synthesize subsequentPageCount=_subsequentPageCount;
@property(nonatomic) long long priorPageCount; // @synthesize priorPageCount=_priorPageCount;
@property(nonatomic) long long cachedPageCountDuringDynamicContentScaleChange; // @synthesize cachedPageCountDuringDynamicContentScaleChange=_cachedPageCountDuringDynamicContentScaleChange;
@property(retain, nonatomic) TNPageCoordinateDictionary *footerLayerCache; // @synthesize footerLayerCache=_footerLayerCache;
@property(retain, nonatomic) TNPageCoordinateDictionary *headerLayerCache; // @synthesize headerLayerCache=_headerLayerCache;
@property(retain, nonatomic) TSUPointerKeyDictionary *sheetPageCountCache; // @synthesize sheetPageCountCache=_sheetPageCountCache;
@property(retain, nonatomic) TSUPointerKeyDictionary *hintCacheDictionary; // @synthesize hintCacheDictionary=_hintCacheDictionary;
@property(retain, nonatomic) TNPageCoordinateDictionary *pageLayoutCache; // @synthesize pageLayoutCache=_pageLayoutCache;
@property(nonatomic) double footerTextHeight; // @synthesize footerTextHeight=_footerTextHeight;
@property(nonatomic) double headerTextHeight; // @synthesize headerTextHeight=_headerTextHeight;
@property(nonatomic) double userViewScale; // @synthesize userViewScale=_userViewScale;
@property(nonatomic) __weak TNSheet *sheet; // @synthesize sheet=_sheet;
@property(nonatomic) __weak TNDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
// - (void).cxx_destruct;
- (void)layoutAtPageIndex:(NSUInteger)arg1 forLayoutController:(id)arg2;
- (NSUInteger)pageCount;
- (id)pageInfoForPageIndex:(NSUInteger)arg1;
- (id)p_pageInfoForPageAtIndex:(NSUInteger)arg1;
- (void)p_layoutInfo:(id)arg1 intoPageRange:(CDStruct_39acd760)arg2;
- (void)p_layoutInfo:(id)arg1 intoPageLayout:(id)arg2 atPageCoordinate:(struct TSUCellCoord)arg3;
- (CDStruct_39acd760)pageRangeForInfo:(id)arg1 upperBound:(struct TSUCellCoord)arg2;
- (void)syncPositionOfLayout:(id)arg1 atCoordinate:(struct TSUCellCoord)arg2;
- (id)p_layoutForInfo:(id)arg1 atCoordinate:(struct TSUCellCoord)arg2 parentLayout:(id)arg3;
- (id)p_hintCacheForInfo:(id)arg1;
- (void)p_updateVisiblePageRange:(CDStruct_39acd760)arg1 forLayoutController:(id)arg2;
- (void)p_enumerateOverPageRange:(CDStruct_39acd760)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)registerPageLayout:(id)arg1 atPageCoordinate:(struct TSUCellCoord)arg2;
- (BOOL)p_headersOrFootersContainPageNumberRelatedAttachments;
- (void)p_didEndDynamicContentScaleChange:(id)arg1;
- (void)p_willBeginDynamicContentScaleChange:(id)arg1;
- (void)i_setLayer:(id)arg1 forHeaderType:(long long)arg2 fragment:(long long)arg3 atPageCoordinate:(struct TSUCellCoord)arg4;
- (id)i_layerForHeaderType:(long long)arg1 fragment:(long long)arg2 atPageCoordinate:(struct TSUCellCoord)arg3;
- (void)invalidatePageLayout;
- (void)p_invalidateCachedAutoFitContentScaleForSheet:(id)arg1 notify:(BOOL)arg2;
- (void)invalidateCachedAutoFitContentScaleForSheet:(id)arg1;
- (void)p_postAutoFitContentScaleDidChangeNotification;
- (void)i_invalidateHintCache;
- (void)invalidateDrawableLayouts;
- (void)invalidatePageLayoutGeometries;
- (void)p_invalidatePageCounts;
- (void)p_clearHintCache;
- (void)i_invalidatePageLayoutCache;
- (void)removeLayoutsFromPages;
- (void)willExitPrintView;
- (CDStruct_39acd760)pageRangeForPageIndex:(NSUInteger)arg1;
- (struct TSUCellCoord)pageCoordinateForPageIndex:(NSUInteger)arg1;
- (id)p_pageLayoutAtCoordinate:(struct TSUCellCoord)arg1;
- (CGRect)printingLayoutRectForPageIndex:(NSUInteger)arg1;
- (id)pageLayoutGeometryForPageCoordinate:(struct TSUCellCoord)arg1;
- (id)pageLayoutGeometryForPrintingAtPageCoordinate:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)pageCoordinateForDrawableAtUnscaledPoint:(CGPoint)arg1;
- (struct TSUCellCoord)p_pageCoordinateForPageLayoutAtDevicePoint:(CGPoint)arg1;
- (struct TSUCellCoord)pageCoordinateForPageLayoutAtUnscaledPoint:(CGPoint)arg1;
- (void)layoutInPageRange:(CDStruct_39acd760)arg1 forLayoutController:(id)arg2;
- (void)p_measureHeadersAndFooters;
- (CGRect)firstPartitionFrameForInfo:(id)arg1 outStartPageCoordinate:(out struct TSUCellCoord )arg2;
- (NSUInteger)pageNumberForPageCoordinate:(struct TSUCellCoord)arg1;
- (BOOL)isPagePlaceholderAtPageCoordinate:(struct TSUCellCoord)arg1;
@property(readonly, nonatomic) NSUInteger numPages;
- (CDStruct_39acd760)pageRangeWithPlaceholdersWithUpperBound:(struct TSUCellCoord)arg1;
- (CGSize)contentSizeForCanvasLayer;
- (struct TSUCellCoord)pageCoordinateForMaxVisiblePage;
- (CDStruct_39acd760)pageRangeForContentWithUpperBound:(struct TSUCellCoord)arg1;
- (CDStruct_39acd760)pageRangeForContent;
- (void)updatePrintMargins;
- (void)updateContentScale;
- (void)updateViewScale;
- (void)updateUserViewScale;
- (void)canvasViewScaleDidChange:(double)arg1;
- (long long)p_priorPageCount;
- (CGSize)pageSizeWithGutter;
@property(readonly, nonatomic) CGRect contentFrame;
@property(readonly, nonatomic) CGSize pageSize;
- (void)p_computePriorPageCountForCurrentSheet;
- (void)p_computeSubsequentPageCountForCurrentSheet;
- (long long)p_pageCountForSheet:(id)arg1;
- (long long)p_updateCachedPageCountForCurrentSheet;
@property(readonly, nonatomic, getter=isPortrait) BOOL portrait;
@property(readonly, nonatomic) double contentScale;
@property(nonatomic) __weak NSObject<TNPageControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;
- (double)p_printViewDefaultUserViewScale;

@end
