//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSString, UIImage;
@protocol JDEggDataDelegate;

@interface JDEggActionData : NSObject <IEngineDispatchDelegate>
{
    id <JDEggDataDelegate> delegate;
    _Bool _isInLoadState;
    _Bool hasPermission;
    _Bool _isTimeOut;
    int timeDelay;
    unsigned long long lastTime;
    UIImage *enterIcon;
}

+ (_Bool)hasRedBagFloat;
+ (id)getInstance;
@property(nonatomic) _Bool isTimeOut; // @synthesize isTimeOut=_isTimeOut;
@property(retain, nonatomic) UIImage *enterIcon; // @synthesize enterIcon;
@property(nonatomic) int timeDelay; // @synthesize timeDelay;
@property(nonatomic) id <JDEggDataDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool hasPermission; // @synthesize hasPermission;
@property(nonatomic) unsigned long long lastTime; // @synthesize lastTime;
- (void)reportWithTvalue:(int)arg1;
- (void)reportEnterShow:(int)arg1 sourceType:(int)arg2 sourceUin:(id)arg3 carTypeStr:(id)arg4;
- (int)getNetWorkSatus;
- (id)getCodeTip:(int)arg1 showType:(int *)arg2;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)callBack:(_Bool)arg1 showEnter:(_Bool)arg2 actId:(int)arg3 showModeleInfo:(id)arg4;
- (void)fetchActionInfoTimeOut;
- (int)sendReq:(int)arg1 cmd:(id)arg2 isStateReq:(_Bool)arg3 sourceType:(int)arg4 sourceUin:(int)arg5;
- (int)fetchActionInfo:(int)arg1 sourceType:(int)arg2 sourceUin:(int)arg3;
- (void)reqIsShowEnter:(int)arg1;
- (void)saveInfo:(unsigned long long)arg1 permission:(_Bool)arg2;
- (void)loadInfo;
- (void)changeAccount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
