//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSSliceLayer.h"

#import "MSLayerWithBackgroundColour.h"
#import "MSSliceLayer.h"

@class NSDictionary, NSObject<NSCopying><NSCoding>, NSString;

@interface MSSliceLayer : _MSSliceLayer <MSLayerWithBackgroundColour, MSSliceLayer>
{
    id <MSSliceLayerWatcher> _sliceWatcher;
}

+ (id)keyPathsForValuesAffectingPreviewImages;
+ (id)sliceLayerFromLayer:(id)arg1;
@property(nonatomic) __weak id <MSSliceLayerWatcher> sliceWatcher; // @synthesize sliceWatcher=_sliceWatcher;
- (void).cxx_destruct;
- (id)rootForNameUniquing;
- (BOOL)canRotate;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (id)selectionHitTest:(struct CGPoint)arg1 options:(unsigned long long)arg2 zoomValue:(double)arg3 resultIndex:(unsigned long long *)arg4;
- (BOOL)canBeTransformed;
- (void)setName:(id)arg1;
- (void)performInitEmptyObject;
- (BOOL)canBeHidden;
- (unsigned long long)filterType;
- (void)handleBadgeClickWithAltState:(BOOL)arg1;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) id <MSColor> backgroundColorGeneric; // @dynamic backgroundColorGeneric;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric;
@property(readonly, nonatomic) id <MSRect> frameGeneric;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLayerExportable;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) NSString *originalObjectID;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) unsigned long long resizingType;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;

@end

