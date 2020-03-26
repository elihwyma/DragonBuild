//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PXPeopleScalableAvatarView, UIButton, UILabel;
@protocol PXPeopleMeViewControllerDataSource, PXPerson;

@interface PXPeopleMeViewController : UIViewController
{
    id <PXPeopleMeViewControllerDataSource> _dataSource;
    id /* CDUnknownBlockType */ _dismissHandler;
    id <PXPerson> _suggestedPerson;
    UIButton *_confirmButton;
    UIButton *_denyButton;
    UILabel *_descriptionLabel;
    PXPeopleScalableAvatarView *_avatarView;
}

@property(retain, nonatomic) PXPeopleScalableAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIButton *denyButton; // @synthesize denyButton=_denyButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain) id <PXPerson> suggestedPerson; // @synthesize suggestedPerson=_suggestedPerson;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(readonly, nonatomic) id <PXPeopleMeViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_rejectMe:(id)arg1;
- (void)_confirmMe:(id)arg1;
- (void)_dismissViewControllerAsConfirmed:(BOOL)arg1;
- (id)_buttonWithTitle:(id)arg1 action:(SEL)arg2 destructive:(BOOL)arg3;
@property(readonly, nonatomic) double preferredHeight;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 dismissHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithDataSource:(id)arg1;

@end
