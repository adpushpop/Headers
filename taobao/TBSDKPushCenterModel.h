//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDictionary, NSError, NSString;

@interface TBSDKPushCenterModel : NSOperation
{
    NSString *_responseString;
    id _responseJSON;
    NSDictionary *_userInfo;
    NSError *_error;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) id responseJSON; // @synthesize responseJSON=_responseJSON;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
- (void).cxx_destruct;
- (void)performFailure;
- (void)performSuccess;

@end

