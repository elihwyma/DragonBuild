//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIEmbeddedMediaViewDelegate-Protocol.h>

@class SKUIArtwork, SKUIEmbeddedMediaView;

__attribute__((visibility("hidden")))
@interface SKUIMediaPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate>
{
    SKUIArtwork *_artwork;
    NSUInteger _artworkRequestID;
    CGSize _imageSize;
    SKUIEmbeddedMediaView *_mediaView;
}

// - (void).cxx_destruct;
- (void)_loadImageWithReason:(long long)arg1;
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)setSectionIndex:(long long)arg1;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (long long)defaultItemPinningStyle;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

@end
