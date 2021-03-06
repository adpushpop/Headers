//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface MCChatPageConfig : NSObject
{
    _Bool _showSendIdentity;
    _Bool _showReceiveIdentity;
    _Bool _hasAtmosphre;
    _Bool _hasMenu;
    _Bool _previewMode;
    int _servicesType;
    int _sessionType;
    unsigned long long _menuConfig;
    unsigned long long _showNameType;
    unsigned long long _functionConfig;
    unsigned long long _inputConfig;
    NSString *_moduleSPM;
    NSString *_moduleSPM_A;
    NSString *_moduleSPM_B;
    NSString *_pageName;
    NSString *_previewExt;
    NSString *_defualtTitle;
    unsigned long long _chatGoodsConfig;
    NSString *_noSupportDoc;
    NSDictionary *_ext;
    NSString *_receiverID;
}

@property(retain, nonatomic) NSString *receiverID; // @synthesize receiverID=_receiverID;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *noSupportDoc; // @synthesize noSupportDoc=_noSupportDoc;
@property(nonatomic) unsigned long long chatGoodsConfig; // @synthesize chatGoodsConfig=_chatGoodsConfig;
@property(copy, nonatomic) NSString *defualtTitle; // @synthesize defualtTitle=_defualtTitle;
@property(copy, nonatomic) NSString *previewExt; // @synthesize previewExt=_previewExt;
@property(nonatomic) _Bool previewMode; // @synthesize previewMode=_previewMode;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *moduleSPM_B; // @synthesize moduleSPM_B=_moduleSPM_B;
@property(retain, nonatomic) NSString *moduleSPM_A; // @synthesize moduleSPM_A=_moduleSPM_A;
@property(copy, nonatomic) NSString *moduleSPM; // @synthesize moduleSPM=_moduleSPM;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) int servicesType; // @synthesize servicesType=_servicesType;
@property(nonatomic) unsigned long long inputConfig; // @synthesize inputConfig=_inputConfig;
@property(nonatomic) unsigned long long functionConfig; // @synthesize functionConfig=_functionConfig;
@property(nonatomic) _Bool hasMenu; // @synthesize hasMenu=_hasMenu;
@property(nonatomic) _Bool hasAtmosphre; // @synthesize hasAtmosphre=_hasAtmosphre;
@property(nonatomic) _Bool showReceiveIdentity; // @synthesize showReceiveIdentity=_showReceiveIdentity;
@property(nonatomic) _Bool showSendIdentity; // @synthesize showSendIdentity=_showSendIdentity;
@property(nonatomic) unsigned long long showNameType; // @synthesize showNameType=_showNameType;
@property(nonatomic) unsigned long long menuConfig; // @synthesize menuConfig=_menuConfig;
- (void).cxx_destruct;
- (id)init;

@end

