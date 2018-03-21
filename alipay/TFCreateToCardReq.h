//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFBaseReqVO.h"

@class NSDictionary, NSString;

@interface TFCreateToCardReq : TFBaseReqVO
{
    _Bool _cardNoHidden;
    _Bool _withVoice;
    NSString *_cardNo;
    NSString *_cardIndex;
    NSString *_bankShortName;
    NSString *_cardChannel;
    NSString *_receiverName;
    NSString *_memo;
    NSString *_transferAmount;
    NSString *_transferSpeed;
    NSString *_chargeFee;
    NSString *_mobileNo;
    NSString *_promotion;
    NSString *_orderSource;
    NSString *_emotionId;
    NSString *_emotionSource;
    NSString *_payCardIndex;
    NSString *_payCardChannel;
    NSDictionary *_extPropMap;
    NSString *_memberPoints;
    NSString *_exchangePoints;
    NSString *_exchangeAmount;
    NSString *_feeRate;
    NSString *_token;
    NSString *_confirmCode;
}

@property(retain, nonatomic) NSString *confirmCode; // @synthesize confirmCode=_confirmCode;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *feeRate; // @synthesize feeRate=_feeRate;
@property(retain, nonatomic) NSString *exchangeAmount; // @synthesize exchangeAmount=_exchangeAmount;
@property(retain, nonatomic) NSString *exchangePoints; // @synthesize exchangePoints=_exchangePoints;
@property(retain, nonatomic) NSString *memberPoints; // @synthesize memberPoints=_memberPoints;
@property(retain, nonatomic) NSDictionary *extPropMap; // @synthesize extPropMap=_extPropMap;
@property(nonatomic) _Bool withVoice; // @synthesize withVoice=_withVoice;
@property(retain, nonatomic) NSString *payCardChannel; // @synthesize payCardChannel=_payCardChannel;
@property(retain, nonatomic) NSString *payCardIndex; // @synthesize payCardIndex=_payCardIndex;
@property(retain, nonatomic) NSString *emotionSource; // @synthesize emotionSource=_emotionSource;
@property(retain, nonatomic) NSString *emotionId; // @synthesize emotionId=_emotionId;
@property(nonatomic) _Bool cardNoHidden; // @synthesize cardNoHidden=_cardNoHidden;
@property(retain, nonatomic) NSString *orderSource; // @synthesize orderSource=_orderSource;
@property(retain, nonatomic) NSString *promotion; // @synthesize promotion=_promotion;
@property(retain, nonatomic) NSString *mobileNo; // @synthesize mobileNo=_mobileNo;
@property(retain, nonatomic) NSString *chargeFee; // @synthesize chargeFee=_chargeFee;
@property(retain, nonatomic) NSString *transferSpeed; // @synthesize transferSpeed=_transferSpeed;
@property(retain, nonatomic) NSString *transferAmount; // @synthesize transferAmount=_transferAmount;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *receiverName; // @synthesize receiverName=_receiverName;
@property(retain, nonatomic) NSString *cardChannel; // @synthesize cardChannel=_cardChannel;
@property(retain, nonatomic) NSString *bankShortName; // @synthesize bankShortName=_bankShortName;
@property(retain, nonatomic) NSString *cardIndex; // @synthesize cardIndex=_cardIndex;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
- (void).cxx_destruct;

@end
