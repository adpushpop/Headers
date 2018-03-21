//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMRGCSearcher;

@interface MMRGCSearchContext : NSObject
{
    MMRGCSearcher *_RGCSearcher;
}

+ (id)fastRGCSearchWithRequest:(id)arg1 error:(id *)arg2;
+ (id)standardResultForFRGCItem:(id)arg1 request:(id)arg2;
+ (id)defaultSearchContext;
@property(retain, nonatomic) MMRGCSearcher *RGCSearcher; // @synthesize RGCSearcher=_RGCSearcher;
- (void).cxx_destruct;
- (id)initWithRGCSearcher:(id)arg1;
- (void)RGCSearchWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fastRGCSearchReGeocodeWithCoordinate:(struct CLLocationCoordinate2D)arg1 completion:(CDUnknownBlockType)arg2;
- (void)RGCSearchWithCoordinate:(struct CLLocationCoordinate2D)arg1 completion:(CDUnknownBlockType)arg2;

@end
