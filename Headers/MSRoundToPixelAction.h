//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseAction.h"

@interface MSRoundToPixelAction : MSBaseAction
{
}

- (void)roundCurvePoints:(id)arg1 path:(id)arg2;
- (void)roundCurvePointsInPath:(id)arg1;
- (void)roundLayerPoints:(id)arg1;
- (void)doRoundLayerFrame:(id)arg1;
- (void)roundLayerFrame:(id)arg1;
- (void)roundSelectedShapeHandlerPoints;
- (void)doPerformAction:(id)arg1;
- (BOOL)pathPointsAreNotIntegral:(id)arg1;
- (BOOL)layerPointsAreNotIntegral:(id)arg1;
- (BOOL)layerFrameIsNotIntegral:(id)arg1;
- (unsigned long long)roundingModeForLayer:(id)arg1;
- (unsigned long long)roundModeForShapeHandler;
- (unsigned long long)roundingMode;
- (id)imageName;
- (id)tooltip;
- (id)label;
- (id)recipeName;
- (BOOL)validate;
- (void)roundToPixel:(id)arg1;

@end

