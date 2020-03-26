//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDCollection.h>

@class OITSUIntegerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDKeyedCollection : EDCollection
{
    OITSUIntegerKeyDictionary *mMap;
}

// - (void).cxx_destruct;
- (id)objectWithKey:(long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (NSUInteger)addObject:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isOverwritingKeyOK;
- (void)removeFromMap:(id)arg1;
- (void)insertIntoMap:(id)arg1;
- (BOOL)isObjectInMap:(id)arg1;

@end
