//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMSearchRegion, NSString;

@interface MMSuggestionRequest : NSObject
{
    NSString *_keyword;
    NSString *_cityname;
    MMSearchRegion *_bounds;
}

@property(retain, nonatomic) MMSearchRegion *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) NSString *cityname; // @synthesize cityname=_cityname;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (void)cancelRequest;
@property(readonly, nonatomic, getter=isCanceled) _Bool cancel;
- (void)setCancel:(_Bool)arg1;
@property(copy, nonatomic) CDUnknownBlockType mbklbsSearchCallBack;

@end

