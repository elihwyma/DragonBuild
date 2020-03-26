//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKBasePlayerCell.h>

@class GKContiguousContainerView, GKLabel, GKTurnBasedMatch, GKTurnBasedParticipant, NSLayoutConstraint, UIButton, UIImageView;

@interface GKTurnParticipantCell : GKBasePlayerCell
{
    BOOL _isDetail;
    GKTurnBasedMatch *_match;
    GKTurnBasedParticipant *_participant;
    SEL _detailPressedAction;
    GKLabel *_topLabel;
    GKLabel *_bottomLabel;
    UIButton *_detailButton;
    UIImageView *_statusImageView;
    GKContiguousContainerView *_textContainerView;
    NSLayoutConstraint *_iconLeadingConstraint;
    NSLayoutConstraint *_statusImageTrailingConstraint;
    NSLayoutConstraint *_textContainerTrailingConstraint;
    NSLayoutConstraint *_detailButtonConstraint;
    UIEdgeInsets _insets;
}

+ (id)itemHeightList;
+ (double)defaultRowHeight;
+ (void)registerCellClassesForCollectionView:(id)arg1;
@property(retain, nonatomic) NSLayoutConstraint *detailButtonConstraint; // @synthesize detailButtonConstraint=_detailButtonConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textContainerTrailingConstraint; // @synthesize textContainerTrailingConstraint=_textContainerTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *statusImageTrailingConstraint; // @synthesize statusImageTrailingConstraint=_statusImageTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconLeadingConstraint; // @synthesize iconLeadingConstraint=_iconLeadingConstraint;
@property(retain, nonatomic) GKContiguousContainerView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) GKLabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) GKLabel *topLabel; // @synthesize topLabel=_topLabel;
@property(nonatomic) UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) BOOL isDetail; // @synthesize isDetail=_isDetail;
@property(nonatomic) SEL detailPressedAction; // @synthesize detailPressedAction=_detailPressedAction;
@property(retain, nonatomic) GKTurnBasedParticipant *participant; // @synthesize participant=_participant;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
- (void)updateMarginConstraints;
- (id)viewForPopover;
- (void)detailPressed:(id)arg1;
- (void)configureForDetail;
- (void)configureForMatch;
- (void)didUpdateModel;
- (BOOL)matchWantsLocalPlayerAttention;
- (void)dealloc;
- (void)establishConstraints;
- (id)initWithFrame:(CGRect)arg1;

@end
