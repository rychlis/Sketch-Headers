//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSAssetCollection.h"

#import "MSAssetCollection.h"

@class NSObject<NSCopying><NSCoding>, NSString;

@interface MSAssetCollection : _MSAssetCollection <MSAssetCollection>
{
}

- (unsigned long long)indexOfObjectByComparingPointers:(id)arg1 inArray:(id)arg2;
- (BOOL)moveAssetAtIndex:(unsigned long long)arg1 beforeObjectAtIndex:(unsigned long long)arg2 ofType:(unsigned long long)arg3;
- (id)indexesOfAsset:(id)arg1;
- (id)arrayForType:(unsigned long long)arg1;
- (void)removeAssetAtIndex:(unsigned long long)arg1 ofType:(unsigned long long)arg2;
- (id)assetAtIndex:(unsigned long long)arg1 ofType:(unsigned long long)arg2;
- (void)addAsset:(id)arg1;
- (unsigned long long)numberOfAssetsOfType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, nonatomic) id <MSArray> colorsGeneric; // @dynamic colorsGeneric;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <MSArray> gradientsGeneric; // @dynamic gradientsGeneric;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <MSImageCollection> imageCollectionGeneric; // @dynamic imageCollectionGeneric;
@property(readonly, nonatomic) id <MSArray> imagesGeneric; // @dynamic imagesGeneric;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly) Class superclass;

@end

