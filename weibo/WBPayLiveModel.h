//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WBPayLiveModel : NSObject
{
    long long _userPayType;
    long long _tryRestTime;
    NSString *_mPremiumUrl;
    NSString *_shortPremiumUrl;
    long long _price;
}

@property(nonatomic) long long price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *shortPremiumUrl; // @synthesize shortPremiumUrl=_shortPremiumUrl;
@property(copy, nonatomic) NSString *mPremiumUrl; // @synthesize mPremiumUrl=_mPremiumUrl;
@property(nonatomic) long long tryRestTime; // @synthesize tryRestTime=_tryRestTime;
@property(nonatomic) long long userPayType; // @synthesize userPayType=_userPayType;
- (void).cxx_destruct;

@end

