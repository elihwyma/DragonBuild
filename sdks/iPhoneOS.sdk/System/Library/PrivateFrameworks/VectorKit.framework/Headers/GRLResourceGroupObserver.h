//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>

__attribute__((visibility("hidden")))
@interface GRLResourceGroupObserver : NSObject <GEOResourceManifestTileGroupObserver>
{
    struct GeoResourceProvider _resourceProvider;
}

- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)initWithResourceProvider:(struct GeoResourceProvider )arg1;

@end
