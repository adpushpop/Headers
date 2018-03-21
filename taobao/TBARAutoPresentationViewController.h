//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBARBaseViewController.h"

#import "TBARAutoPreJSHandlerProtocol-Protocol.h"
#import "TBARJSHandlerProtocol-Protocol.h"

@class NSDictionary, NSString, TBAREventInfo, TBARPresentationHelper, TBARSendJS, TBARTaskQueue, TBARVideoCapture, TBHUDActivityView, UIView;

@interface TBARAutoPresentationViewController : TBARBaseViewController <TBARJSHandlerProtocol, TBARAutoPreJSHandlerProtocol>
{
    _Bool _started;
    _Bool _setuped;
    _Bool _eventInfoLoaded;
    _Bool _viewDidAppeared;
    _Bool _needUpdatePic;
    _Bool _dynamicLoaded;
    NSString *_shopId;
    NSString *_eventId;
    NSString *_h5Url;
    NSDictionary *_externalParams;
    TBAREventInfo *_eventInfo;
    UIView *_glContainerView;
    UIView *_glView;
    TBARPresentationHelper *_helper;
    TBARVideoCapture *_videoCapture;
    long long _recogStatus;
    TBARSendJS *_sendJS;
    TBARTaskQueue *_taskQueue;
    NSString *_downloadLocalPath;
    NSString *_picUrl;
    TBHUDActivityView *_activityView;
    struct CGPoint _picPoint;
    struct CGSize _picSize;
}

@property(nonatomic) _Bool dynamicLoaded; // @synthesize dynamicLoaded=_dynamicLoaded;
@property(retain, nonatomic) TBHUDActivityView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) struct CGSize picSize; // @synthesize picSize=_picSize;
@property(nonatomic) struct CGPoint picPoint; // @synthesize picPoint=_picPoint;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic) _Bool needUpdatePic; // @synthesize needUpdatePic=_needUpdatePic;
@property(nonatomic) _Bool viewDidAppeared; // @synthesize viewDidAppeared=_viewDidAppeared;
@property(copy, nonatomic) NSString *downloadLocalPath; // @synthesize downloadLocalPath=_downloadLocalPath;
@property(retain, nonatomic) TBARTaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) _Bool eventInfoLoaded; // @synthesize eventInfoLoaded=_eventInfoLoaded;
@property(nonatomic) _Bool setuped; // @synthesize setuped=_setuped;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) TBARSendJS *sendJS; // @synthesize sendJS=_sendJS;
@property(nonatomic) long long recogStatus; // @synthesize recogStatus=_recogStatus;
@property(retain, nonatomic) TBARVideoCapture *videoCapture; // @synthesize videoCapture=_videoCapture;
@property(retain, nonatomic) TBARPresentationHelper *helper; // @synthesize helper=_helper;
@property(nonatomic) __weak UIView *glView; // @synthesize glView=_glView;
@property(retain, nonatomic) UIView *glContainerView; // @synthesize glContainerView=_glContainerView;
@property(retain, nonatomic) TBAREventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(copy, nonatomic) NSDictionary *externalParams; // @synthesize externalParams=_externalParams;
@property(copy, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (void)setupInitTask;
- (id)resourceRootPath;
- (void)_stop;
- (void)_start;
- (void)showUpgradeView;
- (void)showUnSupportDeviceView;
- (void)showUnSupportView;
- (_Bool)isUnSupportDevice;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)stopWithCallback:(CDUnknownBlockType)arg1;
- (void)startWithCallback:(CDUnknownBlockType)arg1;
- (void)navigationUrl:(id)arg1;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)startAnimation:(int)arg1 repeat:(_Bool)arg2 speed:(float)arg3;
- (void)setPng:(id)arg1 point:(struct CGPoint)arg2 size:(struct CGSize)arg3;
- (id)getExternalParams;
- (id)addImage:(id)arg1 toImage:(id)arg2 toRect:(struct CGRect)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithShopId:(id)arg1 eventId:(id)arg2 loadH5Url:(id)arg3;
- (id)initWithShopId:(id)arg1 eventId:(id)arg2;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
