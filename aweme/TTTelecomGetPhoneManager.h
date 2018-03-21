//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTTelecomGetPhoneManager : NSObject
{
    long long _carrierType;
    Class _networkManagerClass;
    CDUnknownBlockType _networkCellPhoneCollected;
    NSString *_carrierName;
}

+ (_Bool)isAddressBookGranted;
+ (_Bool)shouldStartGetPhoneService;
+ (void)getTelecomAuthMobile;
+ (void)startWithSettings:(id)arg1;
+ (void)start;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(copy, nonatomic) CDUnknownBlockType networkCellPhoneCollected; // @synthesize networkCellPhoneCollected=_networkCellPhoneCollected;
@property(retain, nonatomic) Class networkManagerClass; // @synthesize networkManagerClass=_networkManagerClass;
@property(readonly, nonatomic) long long carrierType; // @synthesize carrierType=_carrierType;
- (void).cxx_destruct;
- (void)telecomGetPhoneDidReceiveNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end
