//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKComponentController.h>

#import <WorkflowUI/WFLocationPickerViewControllerDelegate-Protocol.h>

@interface WFLocationParameterComponentController : CKComponentController <WFLocationPickerViewControllerDelegate>
{
}

- (void)locationPickerDidCancel:(id)arg1;
- (void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2;
- (void)buttonTapped:(id)arg1;
- (void)parameterLayoutTapped:(id)arg1;

@end
