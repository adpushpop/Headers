//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WXStackTribeOperation : NSObject
{
    NSString *_tribeId;
    NSString *_operation;
    NSString *_userInfo;
    NSDictionary *_params;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSString *tribeId; // @synthesize tribeId=_tribeId;
- (void).cxx_destruct;

@end
