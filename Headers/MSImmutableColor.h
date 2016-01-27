//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableColor.h"

#import "MSColor.h"

@class NSObject<NSCopying><NSCoding>, NSString;

@interface MSImmutableColor : _MSImmutableColor <MSColor>
{
}

+ (id)availableRGBColorSpaces;
+ (id)colorWithNSColor:(id)arg1;
+ (id)whiteColor;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (BOOL)fuzzyIsEqual:(id)arg1;
- (id)hexValue;
- (BOOL)isBlack;
- (BOOL)isWhite;
- (id)NSColorWithColorSpace:(id)arg1;
- (id)NSColorForContext:(id)arg1;
- (id)svgRepresentation;

// Remaining properties
@property(readonly, nonatomic) double alpha;
@property(readonly, nonatomic) double blue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double green;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) double red;
@property(readonly) Class superclass;

@end

