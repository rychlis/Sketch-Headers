//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseLayerRenderer.h"

@interface MSTextLayerRenderer : MSBaseLayerRenderer
{
}

+ (void)drawLayer:(id)arg1 onPath:(id)arg2 atLength:(long long)arg3 context:(id)arg4 layoutManager:(id)arg5;
+ (double)startingPositionForTextLayer:(id)arg1 onShape:(id)arg2;
+ (void)drawTextLayerInsideTransform:(id)arg1 context:(id)arg2;
+ (void)drawTextLayer:(id)arg1 onUnderlyingPath:(id)arg2 context:(id)arg3;
+ (void)drawTextLayerAsText:(id)arg1 ignoreDirtyRect:(BOOL)arg2 context:(id)arg3;
+ (void)drawTextLayerWithMissingFonts:(id)arg1 context:(id)arg2;
+ (void)doDrawLayer:(id)arg1 ignoreDirtyRect:(BOOL)arg2 context:(id)arg3;

@end

