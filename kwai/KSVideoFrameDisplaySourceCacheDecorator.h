//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSVideoFrameDisplaySourceAbstractDecorator.h"

@class KSLRUCache, KSVideoFrameCache;

@interface KSVideoFrameDisplaySourceCacheDecorator : KSVideoFrameDisplaySourceAbstractDecorator
{
    KSLRUCache *_memoryCache;
    KSVideoFrameCache *_diskCache;
}

@property(retain, nonatomic) KSVideoFrameCache *diskCache; // @synthesize diskCache=_diskCache;
@property(retain, nonatomic) KSLRUCache *memoryCache; // @synthesize memoryCache=_memoryCache;
- (void).cxx_destruct;
- (id)frameImageAtIndex:(unsigned long long)arg1;

@end
