//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSUUID, TSPObject;

@protocol TSPExternalReferenceDelegate
- (TSPObject *)explicitComponentRootObjectForObject:(TSPObject *)arg1;
- (BOOL)wasComponentCopied:(long long)arg1;
- (long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(TSPObject *)arg2 objectUUIDOrNil:(NSUUID *)arg3 outComponentIsVersioned:(BOOL )arg4;
- (TSPObject *)objectForIdentifier:(long long)arg1;
@end
