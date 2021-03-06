//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MCUnacceptErrorInfo : NSObject
{
    NSString *_errorCode;
    NSString *_errorName;
    NSString *_functionName;
    NSString *_ccode;
    NSString *_messageId;
    NSString *_userId;
    NSString *_exception;
    NSMutableDictionary *_userInfo;
}

@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *exception; // @synthesize exception=_exception;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) NSString *ccode; // @synthesize ccode=_ccode;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(retain, nonatomic) NSString *errorName; // @synthesize errorName=_errorName;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;
- (id)initWithCcode:(id)arg1 messageId:(id)arg2 userId:(id)arg3 errorCode:(id)arg4 errorName:(id)arg5 functionName:(id)arg6 exception:(id)arg7 userInfo:(id)arg8;

@end

