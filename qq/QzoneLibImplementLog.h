//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QzoneFeedMediaInterfaceDelegate-Protocol.h>
#import <QQMainProject/QzoneFeedReportInterfaceDelegate-Protocol.h>
#import <QQMainProject/QzoneFeedThemeInterfaceDelegate-Protocol.h>
#import <QQMainProject/QzoneFeedURLCacheInterfaceDelegate-Protocol.h>
#import <QQMainProject/QzoneFeedWnsInterfaceDelegate-Protocol.h>
#import <QQMainProject/QzoneLibInterfaceDelegate-Protocol.h>

@class NSDictionary, NSString;

@interface QzoneLibImplementLog : NSObject <QzoneLibInterfaceDelegate, QzoneFeedThemeInterfaceDelegate, QzoneFeedWnsInterfaceDelegate, QzoneFeedURLCacheInterfaceDelegate, QzoneFeedMediaInterfaceDelegate, QzoneFeedReportInterfaceDelegate>
{
    NSDictionary *_fontDic;
    NSDictionary *_templateDic;
}

+ (_Bool)reportToast;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *templateDic; // @synthesize templateDic=_templateDic;
@property(retain, nonatomic) NSDictionary *fontDic; // @synthesize fontDic=_fontDic;
- (void).cxx_destruct;
- (void)reportToCampusForLayoutKitParam:(id)arg1;
- (void)openFloatVideoWindow:(id)arg1 videoModel:(id)arg2 uiViewController:(id)arg3;
- (void)handelOpenUrl:(id)arg1 backoff:(_Bool)arg2 param:(id)arg3 controller:(id)arg4;
- (id)weakTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
- (void)doLikeAnimationInView:(id)arg1 colorNumb:(unsigned long long)arg2 imageType:(long long)arg3;
- (void)loadOCSWithBlock:(CDUnknownBlockType)arg1;
- (void)showShareMenu:(id)arg1 feedModel:(id)arg2;
- (void)setAccessibilityElement:(id)arg1 withFeedModel:(id)arg2 shouldQueryVoiceOver:(_Bool)arg3 param:(id)arg4;
- (void)setAccessibilityElement:(id)arg1 withFeedModel:(id)arg2;
- (void)setAccessibilityElement:(id)arg1 withBlogListFeedModel:(id)arg2;
- (void)setAccessibilityElement:(id)arg1 label:(id)arg2 hint:(id)arg3 traits:(unsigned long long)arg4;
- (void)reportEventKey:(id)arg1 param:(id)arg2 option:(id)arg3;
- (id)qzColorWithThemeString:(id)arg1;
- (_Bool)isRunningOniPhone6PlusAndLater;
- (_Bool)isReachableViaWiFi;
- (_Bool)isQQInstalled;
- (_Bool)isDesigner;
- (void)incrementalEnd:(id)arg1;
- (void)incrementalBegin:(id)arg1;
- (void)deleteFeedDirectly:(id)arg1;
- (id)getProgressViewWithFrame:(struct CGRect)arg1 deleteTime:(unsigned long long)arg2;
- (void)setFeedLayoutStatus:(_Bool)arg1;
- (void)setCurrentLayoutUGCKey:(id)arg1;
- (long long)getGrayOperateMask;
- (long long)wnsSuperLikeLowDevice;
- (id)wnsGetAvatarURL;
- (id)wnsAllowPrivateCommentBusinessTypes;
- (id)getLuckyMoneyInputCellWithFrame:(struct CGRect)arg1 object:(id *)arg2 parentController:(id)arg3;
- (id)getRedBonusIconStr;
- (id)currentUinValueForKey:(id)arg1;
- (_Bool)hasDataFor:(id)arg1 isResource:(_Bool)arg2 forCurrentUin:(_Bool)arg3;
- (void)removeDataFor:(id)arg1 isResource:(_Bool)arg2 forCurrentUin:(_Bool)arg3;
- (id)loadDataForKey:(id)arg1 isResource:(_Bool)arg2 forCurrentUin:(_Bool)arg3;
- (void)cacheData:(id)arg1 forKey:(id)arg2 isResource:(_Bool)arg3 forCurrentUin:(_Bool)arg4;
- (int)currentNetworkStatus;
- (void)reportDataToCompass:(long long)arg1 firstAction:(long long)arg2 secondAction:(long long)arg3 thridAction:(long long)arg4;
- (void)reportVisitorWithAppid:(long long)arg1 subid:(long long)arg2 uin:(long long)arg3 cid:(id)arg4 gameid:(unsigned long long)arg5 visitType:(long long)arg6 busiParam:(id)arg7;
- (void)reportVisitorWithAppid:(long long)arg1 cid:(id)arg2 uin:(long long)arg3;
- (void)reportMessage:(id)arg1 retCode:(long long)arg2 detail:(id)arg3;
- (void)reportData:(id)arg1 firstActionType:(id)arg2 reverse1:(id)arg3 level:(long long)arg4;
- (void)reportData:(id)arg1;
- (void)reportAllMessage:(id)arg1 retCode:(long long)arg2 detail:(id)arg3;
- (id)getReferId:(id)arg1;
- (void)reportGDTVideoTimeFrom:(double)arg1 timeTo:(double)arg2 playScene:(long long)arg3 isPlayToEnd:(_Bool)arg4 cookie:(id)arg5 cellIndex:(long long)arg6;
- (void)reportDataTotal:(long long)arg1 uin:(long long)arg2 touin:(long long)arg3 firstActionType:(long long)arg4 secondActionType:(long long)arg5 thridActionType:(long long)arg6 info:(id)arg7 readSource:(id)arg8 refer:(id)arg9 appid:(long long)arg10 externDict:(id)arg11;
- (void)reportData:(long long)arg1 uin:(long long)arg2 touin:(long long)arg3 firstActionType:(id)arg4 secondActionType:(id)arg5 thridActionType:(id)arg6 readSource:(id)arg7 refer:(id)arg8 appid:(long long)arg9 externDict:(id)arg10;
- (void)reportData:(long long)arg1 uin:(long long)arg2 touin:(long long)arg3 firstActionType:(id)arg4 secondActionType:(id)arg5 thridActionType:(id)arg6 readSource:(id)arg7 refer:(id)arg8 appid:(long long)arg9;
- (void)setAccessibilityElement:(id)arg1 label:(id)arg2 hint:(id)arg3;
- (void)disableAccessibilitySupport:(id)arg1;
- (void)saveImage:(id)arg1 forUrl:(id)arg2;
- (id)getHeadIconParam;
- (_Bool)expireDataForURL:(id)arg1 withDate:(id)arg2;
- (id)makeRoundCornerImage:(id)arg1 cornerWidth:(long long)arg2 cornerHeight:(long long)arg3;
- (_Bool)isBgAudioTempList;
- (id)getCurrentPlayingSongInfo;
- (_Bool)isPlayingMusic;
- (void)startTempSong:(id)arg1;
- (void)startOrResumeTempSong:(id)arg1;
- (void)startPlayUrl:(id)arg1 pageUrl:(id)arg2 title:(id)arg3 author:(id)arg4 needStart:(_Bool)arg5;
- (void)startPlayUrl:(id)arg1 pageUrl:(id)arg2 title:(id)arg3 author:(id)arg4;
- (void)startPlayTempSong:(id)arg1;
- (void)pausePlaying;
- (_Bool)judgeIsCurrentTemporaryPlayingUrl:(id)arg1;
- (_Bool)judgeIsCurrentTemporaryPlayingSong:(long long)arg1;
- (id)videoBufferConfigure;
- (id)videoErrorDesc;
- (long long)videoLoadTimeout;
- (_Bool)videoIsInQQAudioChat;
- (_Bool)videoUrlIsEqual:(id)arg1 toURL:(id)arg2;
- (id)videoCacheDirectory;
- (id)videoCacheDirectoryByUrl:(id)arg1 vid:(id)arg2;
- (void)showComfirmAlertViewWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3;
- (void)postBannerPrompt:(id)arg1;
- (id)queryComponents:(id)arg1;
- (void)videoFloatingWindowReleaseQQAudioDevice;
- (_Bool)videoFloatingWindowRequestQQAudioDevice;
- (_Bool)requestQQAudioDevice;
- (id)convertTextAsReadable:(id)arg1;
- (id)parseToReadableText:(id)arg1;
- (id)dataWithURL:(id)arg1;
- (_Bool)hasDataWithURL:(id)arg1;
- (id)dealWithTheURL:(id)arg1;
- (void)updatePlaying:(double)arg1 forwardPlay:(_Bool)arg2 url:(id)arg3;
- (long long)frameCountOfGif:(id)arg1;
- (void)addDecode:(id)arg1 key:(id)arg2 data:(id)arg3 dataType:(id)arg4;
- (void)addDecode:(id)arg1 url:(id)arg2 data:(id)arg3 param:(id)arg4;
- (void)removeDecode:(id)arg1 url:(id)arg2;
- (void)requestEmotionImageWithURL:(id)arg1 target:(id)arg2 succBlock:(CDUnknownBlockType)arg3;
- (_Bool)startLoadEmotionForView:(id)arg1 url:(id)arg2;
- (_Bool)isLocalSourceEmotionGif:(id)arg1;
- (_Bool)tryLoadEmotionFirstFrameGif:(id)arg1 imageview:(id)arg2;
- (id)firstFrameWithURL:(id)arg1 viewSize:(struct CGSize)arg2;
- (void)firstFrameWithURL:(id)arg1 viewSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearWithTarget:(id)arg1 isContinueDonwload:(_Bool)arg2;
- (id)resizeableImage:(id)arg1;
- (void)requestWithURL:(id)arg1 isGDTPhoto:(_Bool)arg2 target:(id)arg3 succBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 param:(id)arg7;
- (id)applyBlurWithimage:(id)arg1 radius:(double)arg2 tintColor:(id)arg3 saturationDeltaFactor:(double)arg4 maskImage:(id)arg5;
- (void)removeCacheImage:(id)arg1 size:(struct CGSize)arg2 alpha:(_Bool)arg3 focus:(struct CGPoint)arg4;
- (void)cacheImage:(id)arg1 url:(id)arg2 size:(struct CGSize)arg3 alpha:(_Bool)arg4 focus:(struct CGPoint)arg5;
- (void)raiseRequestsWithURLs:(id)arg1;
- (id)imageWithURLInMem:(id)arg1 size:(struct CGSize)arg2 alpha:(_Bool *)arg3 focus:(struct CGPoint)arg4;
- (id)pointToCropInfo:(struct CGPoint)arg1;
- (id)imageFromFeedImagePoolWithURL:(id)arg1 size:(struct CGSize)arg2 alpha:(_Bool *)arg3 focus:(struct CGPoint)arg4;
- (id)imageWithURL:(id)arg1 size:(struct CGSize)arg2 alpha:(_Bool *)arg3;
- (id)imageWithURL:(id)arg1;
- (_Bool)isNocacheImg:(id)arg1;
- (void)didMenuItemWithFeedModel:(id)arg1;
- (_Bool)shouldShowFeedModelMenuItem:(id)arg1;
- (void)crashHelperMarkLastCoreTextText:(id)arg1;
- (void)showLog:(id)arg1;
- (_Bool)isDevelopeVersion;
- (_Bool)isFavouriteAddedOnFeed:(id)arg1;
- (_Bool)isWeiXinInstalled;
- (_Bool)isDeveloper;
- (void)printAttachLog:(id)arg1 key:(id)arg2;
- (void)printCILog:(id)arg1 actionEvent:(id)arg2;
- (id)filterSecurityInfoOfUrl:(id)arg1;
- (void)log:(long long)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 module:(id)arg5 EFDict:(id)arg6 fullmsg:(id)arg7;
- (id)scaleImage:(id)arg1 scaleW:(double)arg2 scaleH:(double)arg3 clip:(struct CGSize)arg4 isCenter:(_Bool)arg5 focusInfo:(id)arg6;
- (long long)getDetailNetworkStatus;
- (_Bool)reachableViaWiFi;
- (id)decodeAtString:(id)arg1;
- (id)string:(id)arg1 replacingOccurrencesOfRegex:(id)arg2 withString:(id)arg3;
- (void)offlineRegisterPlugin:(id)arg1;
- (void)offlineRemoveData:(id)arg1;
- (id)sweetVipIcon;
- (id)starVipIconWith:(id)arg1;
- (id)qzoneVipIconWith:(id)arg1 customVipInfo:(id)arg2;
- (_Bool)isFullScrentPhotoInFeed;
- (_Bool)isNonePhotoInFeed;
- (double)dynamicFontSizeForValue:(double)arg1;
- (id)templateColorForKey:(id)arg1;
- (id)styleFontForKey:(id)arg1;
- (long long)typeFromFeed:(id)arg1;
- (id)getDiyFontWithModel:(id)arg1 isReply:(_Bool)arg2 comment:(id)arg3;
- (void)addReplyWithFeedModel:(id)arg1 replyContent:(id)arg2 comment:(id)arg3 reply:(id)arg4;
- (void)addCommentWithFeedModel:(id)arg1 comment:(id)arg2;
- (id)nickNameByUin:(long long)arg1;
- (long long)getCurrentUin;
- (double)wnsDetailVideoMediaRectHeightRate;
- (double)wnsVideoMediaRectHeightRate;
- (double)wnsNewVideoMediaRectWidthForPlus;
- (double)wnsNewVideoMediaRectWidthFor6;
- (double)wnsNewVideoMediaRectWidthFor5;
- (double)wnsNewMediaRectHeightRate;
- (double)wnsNewMediaRectWidthForPlus;
- (double)wnsNewMediaRectWidthFor6;
- (double)wnsNewMediaRectWidthFor5;
- (double)wnsLargePicRate;
- (_Bool)wnsSpecialBirthGiftMoreFriendPage;
- (_Bool)wnsMediaRectSetLiveShow;
- (double)wnsLuckyMoneyMediaRectWidthForPlus;
- (double)wnsLuckyMoneyMediaRectWidth;
- (_Bool)wnsUseNewPermissionLocation;
- (long long)wnsGetUpdateFeedUndealCntOnce;
- (long long)wnsFeedNickNameSplashCount;
- (double)wnsAdFeedExposeTime;
- (double)wnsGetFeedPictureFullColumnRatio;
- (long long)wnsGetFeedSummaryShowNumUnExpand;
- (long long)wnsGetFeedSummaryMinMaxLine;
- (long long)wnsConfigIntegerWithFirstKey:(id)arg1 secondKey:(id)arg2;
- (id)wnsConfigStringWithFirstKey:(id)arg1 secondKey:(id)arg2;
- (long long)wnsGetFeedSummaryMaxMaxLine;
- (_Bool)wnsGetFeedSummaryExpandDirect;
- (long long)wnsRenderEngineClearImageNumForIp4;
- (long long)wnsRenderEngineClearImageNumForIp5;
- (long long)wnsRenderEngineClearImageNumForIp6;
- (long long)wnsRenderEngineMaxImageCacheNumForIp4;
- (long long)wnsRenderEngineMaxImageCacheNumForIp5;
- (long long)wnsRenderEngineMaxCacheSize;
- (long long)wnsRenderEngineMaxImageCacheNumForIp6;
- (long long)wnsGetFeedTextMaxLine;
- (id)wnsEmotionURL;
- (void)wnsReportData:(id)arg1 ret:(long long)arg2 uin:(long long)arg3 tmcost:(long long)arg4 reqsize:(long long)arg5 rspsize:(long long)arg6 sdkversion:(id)arg7 seq:(id)arg8 serverip:(id)arg9 port:(long long)arg10 detail:(id)arg11 dtype:(long long)arg12 odetails:(id)arg13;
- (_Bool)canAutoPlayGifInSetting;
- (void)cleanCacheForUrl:(id)arg1;
- (id)cStringWithFirstLevel:(const char *)arg1 andSecondLevel:(const char *)arg2;
- (id)stringWithFirstLevel:(id)arg1 andSecondLevel:(id)arg2;
- (_Bool)unZipFile:(id)arg1 toPath:(id)arg2;
- (void)modelToJce:(id)arg1 andWriteToFile:(id)arg2;
- (_Bool)hasPassiveMessage;
- (void)getUpdateFeedWithFeedList:(id)arg1 reqType:(int)arg2;
- (void)sendFileToQQ:(id)arg1;
- (void)addJobToSendBoxWithPath:(id)arg1;
- (id)getCachePath;
- (id)getDocPath;
- (id)getUserPath;
- (void)creatPath:(id)arg1;
- (_Bool)checkPanoramaViewInWindow;
- (_Bool)stringContainsEmoji:(id)arg1;
- (id)emotionStringFormServerIndex:(long long)arg1;
- (id)dressUrlOfFeedmodel:(id)arg1;
- (id)scaleImg:(id)arg1 toSize:(struct CGSize)arg2;
- (_Bool)isCurrentThemeNight;
- (id)cacheImageInCurrentThemeNamed:(id)arg1;
- (id)imageInDefaultThemeNamed:(id)arg1;
- (id)imageInCurrentThemeNamed:(id)arg1;
- (id)resizeableImageInCurrentThemeNamed:(id)arg1;
- (id)defaultAccessoryImage;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
