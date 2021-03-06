//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/AvatarServiceDelegate-Protocol.h>
#import <QQMainProject/GetMidiaListDelegate-Protocol.h>

@class ARMediaGetResult, GetARMediaList, NSString;
@protocol MediaControllerDelegate;

@interface ARMediaController : NSObject <GetMidiaListDelegate, AvatarServiceDelegate>
{
    _Bool _isListEnd;
    _Bool _isUpdateIng;
    int _indexPicReadyDonload;
    int _showMediaIndex;
    int _isFristUpdate;
    GetARMediaList *_getARmedia;
    ARMediaGetResult *_result;
    NSString *_fromuin;
    NSString *_touin;
    NSString *_shareId;
    NSString *_loadHeadUin;
    NSString *_fromname;
    NSString *_sendtime;
    unsigned long long _taskID;
    id <MediaControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MediaControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) NSString *sendtime; // @synthesize sendtime=_sendtime;
@property(retain, nonatomic) NSString *fromname; // @synthesize fromname=_fromname;
@property(retain, nonatomic) NSString *loadHeadUin; // @synthesize loadHeadUin=_loadHeadUin;
@property(retain, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) NSString *touin; // @synthesize touin=_touin;
@property(retain, nonatomic) NSString *fromuin; // @synthesize fromuin=_fromuin;
@property(nonatomic) int isFristUpdate; // @synthesize isFristUpdate=_isFristUpdate;
@property(nonatomic) _Bool isUpdateIng; // @synthesize isUpdateIng=_isUpdateIng;
@property(nonatomic) _Bool isListEnd; // @synthesize isListEnd=_isListEnd;
@property(nonatomic) int showMediaIndex; // @synthesize showMediaIndex=_showMediaIndex;
@property(nonatomic) int indexPicReadyDonload; // @synthesize indexPicReadyDonload=_indexPicReadyDonload;
@property(retain, nonatomic) ARMediaGetResult *result; // @synthesize result=_result;
@property(retain, nonatomic) GetARMediaList *getARmedia; // @synthesize getARmedia=_getARmedia;
- (void).cxx_destruct;
- (void)failCallBack:(id)arg1;
- (void)updateMediaListCallBack:(id)arg1;
- (void)didFailedDownloadingImage:(id)arg1 type:(int)arg2 size:(int)arg3 shape:(int)arg4 avatarInfo:(id)arg5;
- (void)didFailedGetAvatarInfo:(id)arg1 type:(int)arg2;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (id)getUinHeadAndNameImg:(id)arg1 textone:(id)arg2 texttwo:(id)arg3;
- (id)createShareImage:(id)arg1 headImg:(id)arg2 textOne:(id)arg3 textTwo:(id)arg4;
- (id)getImageWithColor:(id)arg1 rect:(struct CGRect)arg2;
- (void)downloadResourcePic:(id)arg1 path:(id)arg2;
- (void)clearAll;
- (void)downloadMediaToCatch;
- (id)preMedia;
- (id)nextMedia;
- (void)checkPicFile:(id)arg1;
- (id)currentMedia;
- (void)updateMedia;
- (void)updateMediaList:(id)arg1 touin:(id)arg2 shareId:(id)arg3 taskID:(unsigned long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

