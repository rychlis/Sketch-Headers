//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSPage, MSTile;

@protocol MSTileDelegate <NSObject>
- (void)tile:(MSTile *)arg1 renderOverlayForPage:(MSPage *)arg2 atZoom:(double)arg3 inRect:(struct CGRect)arg4;
@end

