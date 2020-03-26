//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EPStyleFlattener.h>

@class EDPivotTable;

__attribute__((visibility("hidden")))
@interface EPPivotTableStyleFlattener : EPStyleFlattener
{
    EDPivotTable *mPivotTable;
    long long mFirstHeaderRow;
    long long mFirstDataRow;
    long long mFirstDataColumn;
    NSUInteger mRowFieldsCount;
    NSUInteger mColumnFieldsCount;
    NSUInteger mPageFieldsCount;
}

// - (void).cxx_destruct;
- (void)clearCache;
- (void)cacheSizes:(id)arg1 inObject:(id)arg2;
- (int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3;
- (id)keysInTheOrderTheyShouldBeApplied;
- (id)newExtractedCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4;
- (id)newExtractedRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3;
- (id)styleFromObject:(id)arg1;
- (id)collectionFromWorksheet:(id)arg1;
- (BOOL)isObjectSupported:(id)arg1;
- (void)addSubtotalColumnLevel:(unsigned int)arg1 to:(id)arg2;
- (void)addSubtotalRowLevel:(unsigned int)arg1 to:(id)arg2;
- (void)addColumnSubheadingLevel:(unsigned int)arg1 to:(id)arg2;
- (void)addRowSubheadingLevel:(unsigned int)arg1 to:(id)arg2;
- (unsigned int)constrainLevel:(unsigned int)arg1;
- (int)stripeOffset:(int)arg1 row:(BOOL)arg2;

@end
