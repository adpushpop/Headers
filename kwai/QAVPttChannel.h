//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class NSMutableArray, NSString, NSURLSession;

@interface QAVPttChannel : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSMutableArray *requestArray;
    CDUnknownBlockType _QAVCsPttTransBlock;
    CDUnknownBlockType _pttReportBlock;
    NSURLSession *_session;
}

@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)dealloc;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performHttpsRequestWithBuffer:(struct CBIBuffer)arg1 taskDescription:(id)arg2;
- (_Bool)RequestWithSSOInfo:(struct tagSsoInfo *)arg1 request:(struct tagPttRequest *)arg2 result:(CDUnknownBlockType)arg3;
- (_Bool)requestSendMessageCmdWithAppid:(int)arg1 identifier:(id)arg2 host:(id)arg3 sign:(id)arg4 ptturl:(id)arg5 result:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

