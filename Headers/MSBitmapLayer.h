//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSBitmapLayer.h"

#import "MSBitmapLayer.h"

@class MSImageData, NSDictionary, NSObject<NSCopying><NSCoding>, NSString;

@interface MSBitmapLayer : _MSBitmapLayer <MSBitmapLayer>
{
}

+ (unsigned long long)traits;
+ (Class)overrideViewControllerClass;
+ (unsigned long long)scalingFactorForFilename:(id)arg1;
+ (struct CGSize)bestSizeAccountingForPixelDensityOfImage:(id)arg1;
+ (id)bitmapLayerFromImage:(id)arg1 withSizeScaledDownByFactor:(double)arg2;
+ (id)bitmapLayerWithImageFromPath:(id)arg1;
+ (id)bitmapLayerWithImageFromPasteboard:(id)arg1;
- (id)NSImage;
@property(readonly, nonatomic) BOOL canReduceImageSize;
- (BOOL)canInsertIntoGroup:(id)arg1;
@property(readonly, nonatomic) struct CGSize targetSizeForReduction;
- (void)reduceImageSize;
- (BOOL)hasNineSliceEnabled;
- (struct CGSize)minimumSize;
- (id)handlerName;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)performInitEmptyObject;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;
- (id)inspectorViewControllerNames;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;
- (void)applyOverrides:(id)arg1;
- (id)setupWithLayerBuilderDictionary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGRect clippingMask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric;
@property(readonly, nonatomic) BOOL fillReplacesImage;
@property(readonly, nonatomic) id <MSRect> frameGeneric;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MSImageData *image;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, nonatomic) struct CGRect nineSliceCenterRect;
@property(readonly, nonatomic) struct CGSize nineSliceScale;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) NSString *originalObjectID;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) unsigned long long resizingType;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly, nonatomic) id <MSStyle> styleGeneric;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;

@end

