//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSImmutableLayoutGrid, MSImmutableRulerData, MSImmutableSimpleGrid;

@protocol MSImmutableRootLayer <NSObject>
@property(readonly, nonatomic) struct CGRect contentBounds;
@property(readonly, nonatomic) struct CGPoint rulerBase;
@property(readonly, copy, nonatomic) MSImmutableRulerData *verticalRulerData;
@property(readonly, copy, nonatomic) MSImmutableRulerData *horizontalRulerData;
@property(readonly, copy, nonatomic) MSImmutableLayoutGrid *layout;
@property(readonly, copy, nonatomic) MSImmutableSimpleGrid *grid;
@end

