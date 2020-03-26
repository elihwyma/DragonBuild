//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectModel, NSString;

@interface NotesMigrationMapping : NSObject
{
    NSManagedObjectModel *_destinationModel;
    NSArray *_sourceModels;
    NSString *_descriptionString;
    long long _type;
}

+ (id)customMappingFromSourceModelName:(id)arg1 toDestinationModelName:(id)arg2;
+ (id)inferredMappingFromSourceModelNames:(id)arg1 toDestinationModelName:(id)arg2;
+ (id)mappings;
+ (id)modelForModelName:(id)arg1;
+ (id)descriptionStringFromSourceStoreNames:(id)arg1 destinationStoreName:(id)arg2;
@property long long type; // @synthesize type=_type;
@property(copy) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(copy) NSArray *sourceModels; // @synthesize sourceModels=_sourceModels;
@property(retain) NSManagedObjectModel *destinationModel; // @synthesize destinationModel=_destinationModel;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)canMigrateStoreMetadata:(id)arg1;
- (id)mappingModelForStoreMetadata:(id)arg1;
- (id)sourceModelForStoreMetadata:(id)arg1;

@end
