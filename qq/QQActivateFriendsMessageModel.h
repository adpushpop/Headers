//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString, QQMessageModel;

@interface QQActivateFriendsMessageModel : QQModel
{
    unsigned int _giftID;
    long long _toUserUin;
    unsigned long long _createTime;
    unsigned long long _blessingTime;
    NSString *_sendString;
    QQMessageModel *_messageModel;
}

@property(retain, nonatomic) QQMessageModel *messageModel; // @synthesize messageModel=_messageModel;
@property(copy, nonatomic) NSString *sendString; // @synthesize sendString=_sendString;
@property(nonatomic) unsigned int giftID; // @synthesize giftID=_giftID;
@property(nonatomic) unsigned long long blessingTime; // @synthesize blessingTime=_blessingTime;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long toUserUin; // @synthesize toUserUin=_toUserUin;
- (void).cxx_destruct;

@end

