//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface MSCloudUserShare : NSObject
{
    NSString *_identifier;
    NSDate *_createdAt;
    NSString *_name;
    NSURL *_publicURL;
    NSDate *_updatedAt;
}

@property(readonly, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(readonly, nonatomic) NSURL *publicURL; // @synthesize publicURL=_publicURL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)applyDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

