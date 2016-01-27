//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSLayerGroup.h"

#import "MSArrayDelegate.h"
#import "MSLayerGroup.h"
#import "MSSharedObjectInstance.h"

@class NSDictionary, NSMutableArray, NSObject<NSCopying><NSCoding>, NSString;

@interface MSLayerGroup : _MSLayerGroup <MSArrayDelegate, MSSharedObjectInstance, MSLayerGroup>
{
    long long ignoreChildrenRefreshCalls;
    BOOL _enableAutomaticScaling;
    BOOL _isOpen;
    BOOL _ignoreNextClickThrough;
    BOOL _ignoreNextSymbolSyncChange;
    BOOL _lightweightContainsSelectedItem;
    long long _hasLayerWithMaskMode;
    long long _preCalculatedHasSelectedLayer;
    NSMutableArray *_relativeChildFrames;
}

+ (unsigned long long)traits;
+ (BOOL)groupBoundsShouldBeIntegral;
+ (struct CGRect)groupBoundsForLayers:(id)arg1;
+ (void)setIgnoreLayerListDelegateCalls:(BOOL)arg1;
+ (id)symbolIDsFromLayers:(id)arg1;
+ (void)moveLayers:(id)arg1 intoGroup:(id)arg2;
+ (id)groupFromLayers:(id)arg1;
@property(retain, nonatomic) NSMutableArray *relativeChildFrames; // @synthesize relativeChildFrames=_relativeChildFrames;
@property(nonatomic) long long preCalculatedHasSelectedLayer; // @synthesize preCalculatedHasSelectedLayer=_preCalculatedHasSelectedLayer;
@property(nonatomic) BOOL lightweightContainsSelectedItem; // @synthesize lightweightContainsSelectedItem=_lightweightContainsSelectedItem;
@property(nonatomic) BOOL ignoreNextSymbolSyncChange; // @synthesize ignoreNextSymbolSyncChange=_ignoreNextSymbolSyncChange;
@property(nonatomic) BOOL ignoreNextClickThrough; // @synthesize ignoreNextClickThrough=_ignoreNextClickThrough;
@property(nonatomic) BOOL isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) long long hasLayerWithMaskMode; // @synthesize hasLayerWithMaskMode=_hasLayerWithMaskMode;
@property(nonatomic) BOOL enableAutomaticScaling; // @synthesize enableAutomaticScaling=_enableAutomaticScaling;
- (void).cxx_destruct;
- (id)candidatesForMasking;
- (unsigned long long)type;
- (void)addSlice:(id)arg1;
- (void)assignWithOriginalLinkedStyleIfNecessary;
- (id)children;
- (id)layerWithID:(id)arg1;
- (void)dataArray:(id)arg1 didRemoveObject:(id)arg2;
- (void)dataArray:(id)arg1 willRemoveObject:(id)arg2;
- (void)dataArray:(id)arg1 didAddObject:(id)arg2;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (void)resizeChildLayer:(id)arg1 atIndex:(unsigned long long)arg2 oldParentSize:(struct CGSize)arg3 widthChanged:(BOOL)arg4 heightChanged:(BOOL)arg5;
- (void)rectDidChange:(id)arg1 fromRect:(struct CGRect)arg2;
- (BOOL)hitTestCornerOfSelectedLayer:(id)arg1 mouse:(struct CGPoint)arg2 zoomValue:(double)arg3;
- (BOOL)shouldClickThroughMouse:(struct CGPoint)arg1 clickThroughBehavior:(long long)arg2 zoomValue:(double)arg3;
- (id)layersBelowPoint:(struct CGPoint)arg1 clickThroughBehavior:(long long)arg2 keepLockedLayers:(BOOL)arg3 zoomValue:(double)arg4;
- (BOOL)includeInLayersBelowPoint;
- (id)allLayersWithClickThroughBehavior:(long long)arg1;
- (BOOL)isOpenForFindingAllLayersWithClickThroughBehavior:(long long)arg1;
- (BOOL)clickThroughAllowedForBehavior:(long long)arg1;
- (void)setConstrainProportions:(BOOL)arg1;
- (void)multiplyBy:(double)arg1;
- (id)layersSharingStyle:(id)arg1;
- (BOOL)resizeToFitChildrenWithOption:(long long)arg1;
- (struct CGRect)requiredRect;
- (BOOL)handleDoubleClick;
- (void)setIsHovering:(BOOL)arg1;
- (void)changeLayerExpandedTypeToAutomaticIfCollapsed;
- (void)deselectAllLayers;
- (void)selectLayers:(id)arg1;
- (BOOL)containsSelectedItem;
- (void)layerFinishedResize;
- (void)layerWillResize;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isExpanded;
- (void)deselectLayerAndParent;
- (void)prepareObjectCopy:(id)arg1;
- (BOOL)includeChildrenInCalculatingStyleSize;
- (void)markLayerDirtyOfType:(unsigned long long)arg1;
- (void)moveInLayerTreeInBlock:(CDUnknownBlockType)arg1;
- (void)setLayers:(id)arg1;
- (void)setIsLocked:(BOOL)arg1;
- (BOOL)shouldStripShadowsAndInnerShadow;
- (void)setStyle:(id)arg1;
@property(readonly, nonatomic) BOOL hasClickThrough;
- (id)bezierPath;
- (id)defaultStyle;
- (void)objectDidChange;
- (BOOL)isSharedObject;
- (id)parentGroupRecursive;
- (void)objectDidInit;
- (void)performInitEmptyObject;
- (id)handlerName;
- (id)inspectorViewControllerNames;
- (void)drawHoverWithZoom:(double)arg1;
- (void)prepareAsMaskContainer;
- (void)drawPreviewInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (BOOL)canSnapSizeToLayer:(id)arg1;
- (id)addLayerOfType:(id)arg1;
- (BOOL)expandableInLayerList;
- (void)translateChildrenFrameToLayers:(id)arg1;
- (void)moveTransformsToChildren:(id)arg1;
- (id)moveLayersToParent;
- (void)unregisterAsSymbolIfNecessary;
- (id)ungroup;
- (void)setUpNewGroup;
- (id)sharedObjectOfType:(unsigned long long)arg1;
- (void)removeAllLayers;
- (void)removeLayerAtIndex:(unsigned long long)arg1;
- (void)removeLayer:(id)arg1;
- (void)insertLayers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertLayers:(id)arg1 afterLayer:(id)arg2;
- (void)insertLayers:(id)arg1 beforeLayer:(id)arg2;
- (void)replaceLayersWithLayers:(id)arg1;
- (void)addLayers:(id)arg1;
- (BOOL)wouldInsertSymbolIntoSymbol:(id)arg1;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (BOOL)canContainLayer:(id)arg1;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (id)closestSymbolInstance;
- (BOOL)isInstanceOfSameSymbolAs:(id)arg1;
- (BOOL)parentOrSelfIsSymbolWithID:(id)arg1;
- (BOOL)isSymbol;
- (BOOL)isActualSymbol;
- (BOOL)containsSymbols;
- (BOOL)parentOrSelfIsSymbol;
- (BOOL)canBeUsedAsSymbolDirectly;
- (id)CSSAttributeString;

// Remaining properties
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric;
@property(readonly, nonatomic) id <MSRect> frameGeneric;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatDoNotCascade;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, nonatomic) id <MSArray> layersGeneric; // @dynamic layersGeneric;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) NSObject<NSCopying><NSCoding> *originalObjectID;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) double rotation;
@property(retain, nonatomic) NSObject<NSCopying><NSCoding> *sharedObjectID;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly, nonatomic) id <MSStyle> styleGeneric;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;

@end

