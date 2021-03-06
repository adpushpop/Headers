//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface QQMessageInfoModel : QQModel
{
    unsigned long long _msgID;
    unsigned long long _msgSeq;
    double _time;
    unsigned long long _offsetY;
    unsigned long long _lastOffsetY;
    NSString *_uin;
    int _xo;
}

- (void)read;
- (void)save;
- (id)GetSaveList;
- (id)GetFilePathInfo;
- (id)GetFileName;
- (void)encoderToSelfModel:(id)arg1;
- (id)decoderToDictionary;
- (void)dealloc;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned long long lastOffsetY; // @dynamic lastOffsetY;
@property(nonatomic) unsigned long long msgID; // @dynamic msgID;
@property(nonatomic) unsigned long long msgSeq; // @dynamic msgSeq;
@property(nonatomic) unsigned long long offsetY; // @dynamic offsetY;
@property(nonatomic) double time; // @dynamic time;
@property(retain, nonatomic) NSString *uin; // @dynamic uin;

@end

