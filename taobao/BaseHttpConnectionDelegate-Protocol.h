//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BaseHttpConnection, NSNumber;

@protocol BaseHttpConnectionDelegate <NSObject>

@optional
- (void)httpRequest:(BaseHttpConnection *)arg1 didUpdateProgress:(NSNumber *)arg2;
- (void)httpRequestFailed:(BaseHttpConnection *)arg1;
- (void)httpRequestFinished:(BaseHttpConnection *)arg1;
- (void)httpRequestStarted:(BaseHttpConnection *)arg1;
@end

