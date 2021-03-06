//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface MSShapeChangeContext : NSObject <NSCopying>
{
    NSArray *_layers;
    NSArray *_handleIndexPaths;
}

@property(readonly, copy, nonatomic) NSArray *handleIndexPaths; // @synthesize handleIndexPaths=_handleIndexPaths;
@property(readonly, copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)rectOfSelectedPoints;
- (id)selectedHandlesSortedByAxis:(unsigned long long)arg1;
- (void)setLocation:(struct CGPoint)arg1 ofHandleAtIndexPath:(id)arg2;
- (struct CGPoint)locationOfHandleAtIndexPath:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *orderedHandleIndexPaths;
- (id)initWithLayers:(id)arg1 handleIndexPaths:(id)arg2;

@end

