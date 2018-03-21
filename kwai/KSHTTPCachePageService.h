//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSUPageService-Protocol.h"

@class BFCancellationTokenSource, KSUPOSTHTTPRequest, NSArray, NSString;

@interface KSHTTPCachePageService : NSObject <KSUPageService>
{
    _Bool _hasMore;
    _Bool _loading;
    NSArray *_objects;
    CDUnknownBlockType _requestStartAspect;
    CDUnknownBlockType _requestFinishAspect;
    CDUnknownBlockType _additionProcessBlock;
    NSString *_pcursor;
    KSUPOSTHTTPRequest *_request;
    BFCancellationTokenSource *_cancelTokenSource;
}

@property(retain, nonatomic) BFCancellationTokenSource *cancelTokenSource; // @synthesize cancelTokenSource=_cancelTokenSource;
@property(retain, nonatomic) KSUPOSTHTTPRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *pcursor; // @synthesize pcursor=_pcursor;
@property(copy, nonatomic) CDUnknownBlockType additionProcessBlock; // @synthesize additionProcessBlock=_additionProcessBlock;
@property(copy, nonatomic) CDUnknownBlockType requestFinishAspect; // @synthesize requestFinishAspect=_requestFinishAspect;
@property(copy, nonatomic) CDUnknownBlockType requestStartAspect; // @synthesize requestStartAspect=_requestStartAspect;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (void)cancel;
- (void)loadMore:(CDUnknownBlockType)arg1;
- (void)reset;
- (id)initWithRequest:(id)arg1 response:(id)arg2;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
