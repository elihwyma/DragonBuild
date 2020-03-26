//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKScene.h>

@class CLKDevice, NSArray, NSMutableArray, NTKFaceEditView, NTKVariantNode, SKNode, SKSpriteNode, SKTexture, UIColor;

@interface NTKAnalogScene : SKScene
{
    SKNode *_root;
    SKNode *_faceChild;
    SKNode *_backgroundChild;
    UIColor *_faceColor;
    SKTexture *_faceCircleTexture;
    SKSpriteNode *_faceCircleSprite;
    BOOL _showContentForUnadornedSnapshot;
    BOOL _shouldHideVariantsBelowCurrent;
    CLKDevice *_device;
    SKNode *_background;
    SKNode *_circle;
    NSMutableArray *_variantNodes;
    NTKVariantNode *_currentVariantNode;
    NSUInteger _currentDensity;
    long long _dataMode;
    NTKFaceEditView *_editView;
    UIColor *_tickColor;
    UIColor *_alternativeTickColor;
}

+ (id)sceneWithSize:(CGSize)arg1 forDevice:(id)arg2;
@property(nonatomic) BOOL shouldHideVariantsBelowCurrent; // @synthesize shouldHideVariantsBelowCurrent=_shouldHideVariantsBelowCurrent;
@property(retain, nonatomic) UIColor *alternativeTickColor; // @synthesize alternativeTickColor=_alternativeTickColor;
@property(retain, nonatomic) UIColor *tickColor; // @synthesize tickColor=_tickColor;
@property(retain, nonatomic) NTKFaceEditView *editView; // @synthesize editView=_editView;
@property(readonly, nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) BOOL showContentForUnadornedSnapshot; // @synthesize showContentForUnadornedSnapshot=_showContentForUnadornedSnapshot;
@property(readonly, nonatomic) NSUInteger currentDensity; // @synthesize currentDensity=_currentDensity;
@property(retain, nonatomic) NTKVariantNode *currentVariantNode; // @synthesize currentVariantNode=_currentVariantNode;
@property(readonly, nonatomic) NSMutableArray *variantNodes; // @synthesize variantNodes=_variantNodes;
@property(readonly, nonatomic) SKNode *circle; // @synthesize circle=_circle;
@property(readonly, nonatomic) SKNode *background; // @synthesize background=_background;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (id)handColor;
- (id)auxiliaryScrubbingObscuredNodes;
- (void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)_setObscuredContentHiddenForScrubbing:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (NSUInteger)scrubbingObscured12ElementBottomIndex;
- (id)scrubbingObscuredCollectionNodes;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)forEachActiveVariant:(id /* CDUnknownBlockType */)arg1;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyDataMode:(long long)arg1;
- (void)_restoreToFullScreen;
- (void)_displayZoomScale:(double)arg1 fraction:(double)arg2;
- (void)cleanupAfterZoom;
- (void)setZoomFraction:(double)arg1 diameter:(double)arg2;
- (void)prepareToZoom;
@property(readonly) NSArray *activeVariantNodes;
@property(retain) UIColor *faceColor;
- (id)faceCircleSprite;
- (void)didMoveToView:(id)arg1;
- (void)enumerateTickCollectionNodes:(id /* CDUnknownBlockType */)arg1;
- (void)_updateTickColors;
- (void)preRender;
- (id)displayTime;
- (void)applyLabelPositions:(const struct NTKLabelPosition )arg1 withCenter:(CGPoint)arg2 toNodes:(id)arg3;
- (void)applyLabelPositions:(const struct NTKLabelPosition )arg1 toNodes:(id)arg2;
- (void)setDensity:(NSUInteger)arg1;
- (id)addVariantNodeWithElements:(id)arg1;
- (id)addVariantNodeWithElements:(id)arg1 parent:(id)arg2 hidden:(BOOL)arg3;
@property(nonatomic) BOOL shouldRasterizeBackground;
- (void)invalidateRasterization;
- (BOOL)_canRasterize;
- (void)setBackgroundAlpha:(double)arg1;
- (void)addNodeToBackground:(id)arg1;
- (void)addNodeToFace:(id)arg1;
- (id)initWithSize:(CGSize)arg1 forDevice:(id)arg2;
@property(readonly, nonatomic) SKNode *face;

@end
