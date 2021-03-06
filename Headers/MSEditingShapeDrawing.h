//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSContentDrawView, NSArray, NSIndexPath;

@interface MSEditingShapeDrawing : NSObject
{
    NSArray *_shapePathLayers;
    MSContentDrawView *_view;
    id <MSEditingShapeDrawingDelegate> _delegate;
    NSIndexPath *_insertionIndexPath;
    NSArray *_indexPathsForSelectedHandles;
    NSIndexPath *_indexPathForHoveringHandle;
    NSArray *_indexPathsForSnappedToHandles;
    struct CGPoint _insertionPoint;
}

@property(copy, nonatomic) NSArray *indexPathsForSnappedToHandles; // @synthesize indexPathsForSnappedToHandles=_indexPathsForSnappedToHandles;
@property(copy, nonatomic) NSIndexPath *indexPathForHoveringHandle; // @synthesize indexPathForHoveringHandle=_indexPathForHoveringHandle;
@property(copy, nonatomic) NSArray *indexPathsForSelectedHandles; // @synthesize indexPathsForSelectedHandles=_indexPathsForSelectedHandles;
@property(nonatomic) struct CGPoint insertionPoint; // @synthesize insertionPoint=_insertionPoint;
@property(copy, nonatomic) NSIndexPath *insertionIndexPath; // @synthesize insertionIndexPath=_insertionIndexPath;
@property(nonatomic) __weak id <MSEditingShapeDrawingDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MSContentDrawView *view; // @synthesize view=_view;
@property(copy, nonatomic) NSArray *shapePathLayers; // @synthesize shapePathLayers=_shapePathLayers;
- (void).cxx_destruct;
- (struct CGPoint)convertPointToView:(struct CGPoint)arg1 fromPathCoordinatesOfShape:(id)arg2;
- (void)drawLineFromHandleAtPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)drawAdjustmentHandle:(id)arg1 atLocation:(struct CGPoint)arg2 andLineFromPoint:(struct CGPoint)arg3;
- (void)drawPointAtIndexPath:(id)arg1 pointOrAdjustmentHandleSelected:(BOOL)arg2;
- (void)drawHandles;
- (void)drawHighlightedSegment;
- (void)draw;

@end

