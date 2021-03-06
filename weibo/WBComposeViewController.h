//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WBComposeElementDelegate-Protocol.h"
#import "WBComposeToolBarDelegate-Protocol.h"
#import "WBComposeUserGuideElementDelegate-Protocol.h"
#import "WBComposerAddonsViewDelegate-Protocol.h"
#import "WBFunnyPictureViewDelegate-Protocol.h"
#import "WBTextEditorViewAutoScrollDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UIScrollView, WBComposeCameraElementView, WBComposeCardElementView, WBComposeCheckElementView, WBComposeDelayedSendTimeElementView, WBComposeGroupElementView, WBComposeImagesElementView, WBComposeJob, WBComposePOIElementView, WBComposeProductEditElementView, WBComposeProductElementView, WBComposeRatingElementView, WBComposeStoryElementView, WBComposeTextElementView, WBComposeToolbar, WBComposeUserGuideElement, WBComposeVideoElementView, WBDoubleLineNavigationBarTitleView, WBExtraComposerAddonsView, WBFunnyPictureView, WBProgressHUD;
@protocol WBComposeViewControllerDelegate;

@interface WBComposeViewController : WBViewController <UIScrollViewDelegate, WBTextEditorViewAutoScrollDelegate, WBComposerAddonsViewDelegate, WBComposeUserGuideElementDelegate, UIGestureRecognizerDelegate, WBFunnyPictureViewDelegate, WBComposeElementDelegate, WBComposeToolBarDelegate>
{
    UIScrollView *_containerView;
    WBDoubleLineNavigationBarTitleView *_titleView;
    NSMutableDictionary *_composeDatas;
    UIImageView *_statusBar;
    UIImageView *_picLocBar;
    UIScrollView *picLocScrollView;
    UIButton *closePicLocButton;
    int picLocNetWorkRetryTime;
    int picLocBarShowTime;
    NSArray *picLocItems;
    UIImageView *transitionImageView;
    struct CLLocationCoordinate2D imageCoordinateWhenSendRequest;
    UILabel *_characterCountLabel;
    _Bool isViewAppear;
    double _keyboardHeight;
    _Bool _isCheckin;
    _Bool _isRating;
    long long _toolbarPanelType;
    struct {
        unsigned int orientationChanged:1;
        unsigned int needLayoutWhenViewWillAppear:1;
        unsigned int viewControllerSizeChanged:1;
        unsigned int setNeedsLayoutContent:1;
        unsigned int shouldAnimateSendButton:1;
        unsigned int pendingAnimateSendButtonWhenViewDidAppear:1;
        unsigned int shouldHideGroupElementView:1;
    } _layoutFlag;
    CDStruct_9fa6184f _flags;
    _Bool _fromComposeGuide;
    _Bool _callbackThirdPartyImmediatelyAfterSentout;
    _Bool _goHomeAfterSendOut;
    _Bool _openKeyboardWhenViewApear;
    _Bool _allowMedia;
    _Bool _isEditComposer;
    _Bool _contentWasModifiedByUser;
    _Bool _showCharacterCount;
    _Bool _hasPhoto;
    NSString *_composeTitle;
    NSArray *_composeElements;
    NSArray *_composeElementViews;
    unsigned long long _maxCharacterCount;
    id <WBComposeViewControllerDelegate> _delegate;
    WBComposeJob *_job;
    WBComposeToolbar *_toolBar;
    WBProgressHUD *_progressHUD;
    NSMutableDictionary *_extraParameters;
    WBComposeUserGuideElement *_userGuideElement;
    UIImageView *_addonsContainerView;
    UIButton *_changeToArticleButton;
    unsigned long long _v_content;
    long long _imageDownloadCount;
    unsigned long long _loadingImageCount;
    unsigned long long _loadingFailedImageCount;
    WBFunnyPictureView *_funnyView;
    WBComposeTextElementView *_titleElementView;
    WBComposeTextElementView *_textElementView;
    WBComposeImagesElementView *_imagesElementView;
    WBComposePOIElementView *_poiElementView;
    WBComposeGroupElementView *_groupElementView;
    WBComposeRatingElementView *_ratingElementView;
    WBComposeCardElementView *_cardElementView;
    WBComposeCheckElementView *_checkElementView;
    WBComposeProductElementView *_productElementView;
    WBComposeProductEditElementView *_productEditElementView;
    WBComposeCameraElementView *_cameraElementView;
    WBComposeStoryElementView *_storyElementView;
    WBComposeVideoElementView *_shareVideoElementView;
    WBComposeDelayedSendTimeElementView *_delayedSendTimeElementView;
    long long _composeElementTypes;
    long long _necessaryElements;
    long long _optionRequiredElements;
    WBExtraComposerAddonsView *_addonsView;
    NSString *_defaultContentText;
}

+ (long long)elementTypesForOpenURLContext;
+ (id)navigationControllerOfViewController:(id)arg1;
+ (id)controllerToHandleOpenURLContext:(id)arg1;
+ (_Bool)couldHandleOpenURLForNewController:(Class)arg1;
+ (id)classesCouldHandleOpenURLContext;
+ (_Bool)handleOpenURLWithExistingController;
+ (_Bool)shouldUsePushedInputLimits;
+ (long long)compositionType;
@property(readonly, nonatomic) _Bool isRating; // @synthesize isRating=_isRating;
@property(readonly, nonatomic) _Bool isCheckin; // @synthesize isCheckin=_isCheckin;
@property(readonly, nonatomic) _Bool hasPhoto; // @synthesize hasPhoto=_hasPhoto;
@property(retain, nonatomic) NSString *defaultContentText; // @synthesize defaultContentText=_defaultContentText;
@property(nonatomic) _Bool showCharacterCount; // @synthesize showCharacterCount=_showCharacterCount;
@property(nonatomic) _Bool contentWasModifiedByUser; // @synthesize contentWasModifiedByUser=_contentWasModifiedByUser;
@property(retain, nonatomic) WBExtraComposerAddonsView *addonsView; // @synthesize addonsView=_addonsView;
@property(nonatomic) long long optionRequiredElements; // @synthesize optionRequiredElements=_optionRequiredElements;
@property(nonatomic) long long necessaryElements; // @synthesize necessaryElements=_necessaryElements;
@property(nonatomic) long long composeElementTypes; // @synthesize composeElementTypes=_composeElementTypes;
@property(retain, nonatomic) WBComposeDelayedSendTimeElementView *delayedSendTimeElementView; // @synthesize delayedSendTimeElementView=_delayedSendTimeElementView;
@property(retain, nonatomic) WBComposeVideoElementView *shareVideoElementView; // @synthesize shareVideoElementView=_shareVideoElementView;
@property(retain, nonatomic) WBComposeStoryElementView *storyElementView; // @synthesize storyElementView=_storyElementView;
@property(retain, nonatomic) WBComposeCameraElementView *cameraElementView; // @synthesize cameraElementView=_cameraElementView;
@property(retain, nonatomic) WBComposeProductEditElementView *productEditElementView; // @synthesize productEditElementView=_productEditElementView;
@property(retain, nonatomic) WBComposeProductElementView *productElementView; // @synthesize productElementView=_productElementView;
@property(retain, nonatomic) WBComposeCheckElementView *checkElementView; // @synthesize checkElementView=_checkElementView;
@property(retain, nonatomic) WBComposeCardElementView *cardElementView; // @synthesize cardElementView=_cardElementView;
@property(retain, nonatomic) WBComposeRatingElementView *ratingElementView; // @synthesize ratingElementView=_ratingElementView;
@property(retain, nonatomic) WBComposeGroupElementView *groupElementView; // @synthesize groupElementView=_groupElementView;
@property(retain, nonatomic) WBComposePOIElementView *poiElementView; // @synthesize poiElementView=_poiElementView;
@property(retain, nonatomic) WBComposeImagesElementView *imagesElementView; // @synthesize imagesElementView=_imagesElementView;
@property(retain, nonatomic) WBComposeTextElementView *textElementView; // @synthesize textElementView=_textElementView;
@property(retain, nonatomic) WBComposeTextElementView *titleElementView; // @synthesize titleElementView=_titleElementView;
@property(retain, nonatomic) WBFunnyPictureView *funnyView; // @synthesize funnyView=_funnyView;
@property(nonatomic) unsigned long long loadingFailedImageCount; // @synthesize loadingFailedImageCount=_loadingFailedImageCount;
@property(nonatomic) unsigned long long loadingImageCount; // @synthesize loadingImageCount=_loadingImageCount;
@property(nonatomic) long long imageDownloadCount; // @synthesize imageDownloadCount=_imageDownloadCount;
@property(nonatomic) unsigned long long v_content; // @synthesize v_content=_v_content;
@property(retain, nonatomic) UIButton *changeToArticleButton; // @synthesize changeToArticleButton=_changeToArticleButton;
@property(retain, nonatomic) UIImageView *addonsContainerView; // @synthesize addonsContainerView=_addonsContainerView;
@property(retain, nonatomic) WBComposeUserGuideElement *userGuideElement; // @synthesize userGuideElement=_userGuideElement;
@property(nonatomic) _Bool isEditComposer; // @synthesize isEditComposer=_isEditComposer;
@property(retain, nonatomic) NSMutableDictionary *extraParameters; // @synthesize extraParameters=_extraParameters;
@property(retain, nonatomic) WBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(nonatomic) _Bool allowMedia; // @synthesize allowMedia=_allowMedia;
@property(retain, nonatomic) WBComposeToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) WBComposeJob *job; // @synthesize job=_job;
@property(nonatomic) _Bool openKeyboardWhenViewApear; // @synthesize openKeyboardWhenViewApear=_openKeyboardWhenViewApear;
@property(nonatomic) _Bool goHomeAfterSendOut; // @synthesize goHomeAfterSendOut=_goHomeAfterSendOut;
@property(nonatomic) _Bool callbackThirdPartyImmediatelyAfterSentout; // @synthesize callbackThirdPartyImmediatelyAfterSentout=_callbackThirdPartyImmediatelyAfterSentout;
@property(nonatomic) _Bool fromComposeGuide; // @synthesize fromComposeGuide=_fromComposeGuide;
@property(nonatomic) __weak id <WBComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxCharacterCount; // @synthesize maxCharacterCount=_maxCharacterCount;
@property(readonly, nonatomic) NSArray *composeElementViews; // @synthesize composeElementViews=_composeElementViews;
@property(readonly, nonatomic) NSArray *composeElements; // @synthesize composeElements=_composeElements;
@property(retain, nonatomic) NSString *composeTitle; // @synthesize composeTitle=_composeTitle;
@property(readonly, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (_Bool)allowedPopupUpgradeAlertWindow;
- (void)checkFinish:(long long)arg1;
- (void)updateImageElementViewByNewImage:(id)arg1 andUrl:(id)arg2;
- (void)imageDownloadComplete:(id)arg1 count:(long long)arg2 imageUrl:(id)arg3;
- (void)downloadImages:(id)arg1;
- (void)loadPicsFormOriginalStatus:(id)arg1;
- (void)showSendOutTips:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showSendOutTips:(id)arg1 needImage:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showTips:(id)arg1 duration:(double)arg2 type:(long long)arg3 coverOption:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)hideProgress:(_Bool)arg1;
- (void)dismissProgressHudIfExist;
- (void)showError:(id)arg1;
- (void)showProgress:(id)arg1;
- (void)showTips:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)hideFunnyPictureView:(id)arg1;
- (void)funnyPictureView:(id)arg1 didSelectImage:(id)arg2 imagePid:(id)arg3 isFree:(_Bool)arg4;
- (void)hideStatusBar:(_Bool)arg1;
- (void)hideToolBar:(_Bool)arg1;
@property(readonly, nonatomic) _Bool imageShrinksCard;
@property(readonly, nonatomic) _Bool openedByThirdPartyApplicationViaOpenURL;
- (id)baseViewForUserGuide:(long long)arg1;
- (void)composeUserGuideElement:(id)arg1 didSelectUserGuide:(id)arg2 type:(long long)arg3;
- (id)referenceViewForUserGuide:(long long)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)appWillTerminate:(id)arg1;
- (id)defaultContentFromCards:(id)arg1;
- (id)timelineURLsFromSchemeParams:(id)arg1;
- (void)addTimelineURLs:(id)arg1 toTextElementView:(id)arg2;
- (void)addTimelineURLs:(id)arg1;
- (_Bool)handleOpenURLContext:(id)arg1;
- (void)insertMSGRecordToText;
- (void)updateWithOpenUrlLink:(id)arg1 paras:(id)arg2 init:(_Bool)arg3;
- (void)setShouldHideGroupElementView:(_Bool)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didComfirmSend;
- (void)chooseSendDate;
- (void)addonsView:(id)arg1 didSelectAddon:(id)arg2;
- (void)textEditorView:(id)arg1 autoscrollWithDeltaY:(double)arg2;
- (double)textEditorView:(id)arg1 distanceToYEdgeForTouchPoint:(struct CGPoint)arg2;
- (_Bool)textEditorView:(id)arg1 shouldPerformAutoscrollWithTouchPoint:(struct CGPoint)arg2;
- (void)setCard:(id)arg1;
- (void)removeAllImageAndVideos;
- (void)removeAllImageToAddNewImage:(id)arg1 cameraParames:(id)arg2;
- (void)addImage:(id)arg1 withCameraParames:(id)arg2;
- (void)addVideoWithCacheURL:(id)arg1;
- (void)addImage:(id)arg1 parames:(id)arg2;
- (void)addImage:(id)arg1 fromSDK:(_Bool)arg2;
- (void)addImage:(id)arg1 Default:(_Bool)arg2;
- (void)addImage:(id)arg1;
- (void)addVideoAsset:(id)arg1 fromSDK:(_Bool)arg2;
- (void)addImageAssetArray:(id)arg1 fromSDK:(_Bool)arg2;
- (void)composeToolBarDidSelectButton:(id)arg1 type:(unsigned long long)arg2;
- (void)emoticonInputView:(id)arg1 didSelectGif:(id)arg2;
- (void)animateSendButton;
- (void)updateCharacterCountLabel;
- (_Bool)isShowCharacterCount;
- (_Bool)canChangeToArticle;
- (void)addonViewRefreshAddons;
- (void)relayoutAddonView;
- (void)toggleAddonView;
- (void)closeAddonsView;
- (void)toggleEmoticonInputView;
- (id)composeElement:(id)arg1 composeValueForKey:(id)arg2;
- (void)composeElement:(id)arg1 setComposeValue:(id)arg2 forKey:(id)arg3;
- (void)composeElementDidCancelPickData:(id)arg1;
- (void)composeElementDidFinishPickData:(id)arg1;
- (id)baseViewControllerForComposeElement:(id)arg1;
- (id)buttonWithSpotName:(id)arg1;
- (void)moreSpot;
- (void)setPoiElementSpot:(id)arg1;
- (void)locateCallBackWithArray:(id)arg1;
- (void)closePicLoc;
- (void)composeElementContentDidChanged:(id)arg1;
- (void)composeElementContentDidBeginEdit:(id)arg1;
- (_Bool)shouldShowImageNearPlaceView;
- (void)orientationChanged:(id)arg1;
- (void)keyboardFrameWillChange:(id)arg1;
- (void)keyboardDidChangeFrameNotification:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)setupWithCurrentJob;
- (void)prepareJobForPosting;
- (void)prepareJobForDraftBox;
- (void)prepareJobForSaving;
- (void)saveComposeData;
- (void)recoverProducts;
- (void)recoverImages;
- (void)removeAllComposeElement;
- (void)removeJob;
- (void)saveJob;
- (void)createJobIfNeed;
- (Class)jobClass;
- (void)didDissmiss;
- (void)performDismiss;
- (void)updateNavigationBarButtons;
- (_Bool)closeAllInputViews:(CDUnknownBlockType)arg1;
- (void)scrollViewSetNil;
- (void)cancelButtonPressed;
- (void)sendButtonPressed;
- (void)tapContainerView;
- (_Bool)isPickingData;
@property(readonly, nonatomic) _Bool showsToolBar;
@property(readonly, nonatomic) _Bool showsStatusBar;
@property(readonly, nonatomic) unsigned long long characterCount;
@property(readonly, nonatomic) _Bool elementsChangedFromDraft;
@property(readonly, nonatomic) _Bool elementsChangedFromDefault;
- (_Bool)hasContentToSave;
@property(readonly, nonatomic) _Bool canPostNow;
@property(retain, nonatomic) NSString *textContent;
- (id)defaultComposeTitle;
- (void)setGroupType:(unsigned long long)arg1;
- (void)setComposeValuesWithDictionary:(id)arg1;
- (void)setComposeValue:(id)arg1 forKey:(id)arg2;
- (id)composeValueForKey:(id)arg1;
- (id)elementViewWithElementClass:(Class)arg1;
- (id)creatComposeElementWithClass:(Class)arg1;
- (id)composeElementWithClass:(Class)arg1 create:(_Bool)arg2;
- (id)composeElementWithClass:(Class)arg1;
- (id)composeElementWithType:(long long)arg1;
@property(readonly, nonatomic) unsigned long long composeToolbarType;
- (void)relayoutStatusBar;
- (void)relayoutElementViewsAnimated:(_Bool)arg1;
- (void)showUserGuide;
- (void)setNeedsLayoutContentView:(_Bool)arg1 duration:(double)arg2 curve:(long long)arg3;
- (void)layoutContentViews:(_Bool)arg1 duration:(double)arg2 curve:(long long)arg3;
- (void)layoutContentViews:(_Bool)arg1 duration:(double)arg2;
- (void)layoutContentViews:(_Bool)arg1;
- (void)removeComposeElement:(id)arg1;
- (void)addComposeElement:(id)arg1;
- (id)elementViewForElement:(id)arg1;
- (void)configElementViews;
- (void)buildComposeElements;
- (void)processKeyboardAsync:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setKeyWindow;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isPresentingViewControllerSilent;
- (void)initPicLocStaff;
- (void)viewDidLoad;
- (void)initComposeDatas;
- (id)initWithComposeElements:(id)arg1 datas:(id)arg2;
- (id)initWithComposeDatas:(id)arg1;
- (id)initWithTextContent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithJob:(id)arg1;
- (id)initEditComposerWithStatus:(id)arg1;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
- (void)dealloc;
@property(nonatomic) _Bool supportsPageTopics;
- (void)addComposeElementWithTypes:(long long)arg1;
- (void)removeComposeElementWithTypes:(long long)arg1;
@property(retain, nonatomic) NSString *placeholderText;
- (_Bool)migrateLegacyDataFromJob:(id)arg1;
- (void)setSharingWebpageWithTitle:(id)arg1 url:(id)arg2;
- (void)setSharingPageTopic:(id)arg1;
- (void)setSharingUser:(id)arg1;
- (void)setSharingQRCodeImage:(id)arg1 forGroup:(id)arg2;
- (void)setSharingQRCodeImage:(id)arg1 forSegment:(id)arg2;
- (void)setSharingQRCodeImage:(id)arg1 forPage:(id)arg2;
- (void)setSharingPage:(id)arg1;
- (void)setSharingObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

