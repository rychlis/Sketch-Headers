//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSPasteboardLayers, NSArray, NSPasteboard;

@protocol MSPasteboardReader <NSObject>
- (MSPasteboardLayers *)pasteboardDataFromPasteboard:(NSPasteboard *)arg1 options:(unsigned long long)arg2 sender:(id <NSDraggingInfo>)arg3;
- (NSArray *)supportedPasteboardTypes;
@end

