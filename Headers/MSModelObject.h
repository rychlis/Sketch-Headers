//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSModelObject.h"
#import "NSCopying.h"

@class MSModelObjectCache, NSObject<NSCopying><NSCoding>, NSString;

@interface MSModelObject : NSObject <NSCopying, MSModelObject>
{
    MSModelObjectCache *_cache;
    struct NSObject *_objectID;
}

+ (id)defaultName;
+ (void)clearInstanceCount;
+ (void)printInstanceCount:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasCache;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyIncludingObjectIDS;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (id)primitiveObjectID;
- (void)setPrimitiveObjectID:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID; // @synthesize objectID=_objectID;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (BOOL)hasObjectID;
- (id)generateObjectID;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)setNilValueForKey:(id)arg1;
- (id)defaultName;
- (void)objectDidInit;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (void)performInitEmptyObject;
- (id)initWithNoSetup;
- (id)init;
- (void)clearCachedValueForKey:(id)arg1;
- (void)clearCache;
- (void)updateCachedValue:(id)arg1 forKey:(id)arg2;
- (id)cachedValueForKey:(id)arg1 setUsingBlock:(CDUnknownBlockType)arg2;
- (id)cachedValueForKey:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)treeAsDictionary;
- (id)simpleTreeStructure;
- (id)treeStructure;
- (void)appendTreeStructureToString:(id)arg1 withIndent:(unsigned long long)arg2;
- (void)appendSimpleStructureToString:(id)arg1 withIndent:(unsigned long long)arg2;
- (void)recordDeallocation;
- (void)recordAllocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

