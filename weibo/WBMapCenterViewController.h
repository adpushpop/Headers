//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "MKMapViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "WBSearchViewControllerDelegate-Protocol.h"

@class MKMapView, NSString, NSTimer, SNHTTPRequestOperationWrapper, UIButton, UIImage, UIImageView, UILabel, WBMapLocationAnnotation, WBSearchBar;
@protocol WBMapCenterControllerDelegate;

@interface WBMapCenterViewController : WBViewController <MKMapViewDelegate, UISearchBarDelegate, WBSearchViewControllerDelegate>
{
    _Bool _showAnnotationAnimaton;
    _Bool _failedToLocateErrorMessageHasAlreadyShowed;
    _Bool _currentCoordinateHasBeenSet;
    _Bool _jumpCoordinateHasBeenSet;
    _Bool _backVCfullscreen;
    _Bool _viewIsVisible;
    id <WBMapCenterControllerDelegate> _mapDelegate;
    NSString *_customNaviagtionTitle;
    NSString *_searchTitle;
    NSString *_callBackSchemenameHead;
    NSString *_containerid;
    MKMapView *_mapView;
    UIImageView *_centerArrow;
    NSString *_backSchemeStr;
    WBMapLocationAnnotation *_currentAnnotation;
    UIImage *_currentAvatarImage;
    long long _orientation;
    UIButton *_showMyPositionButton;
    UIButton *_sureButton;
    UILabel *_detailLocationLabel;
    WBSearchBar *_searchBar;
    SNHTTPRequestOperationWrapper *_fetchAddressWrapper;
    NSTimer *_requestTimer;
    struct CLLocationCoordinate2D _expectJumpCoordinate;
    struct CLLocationCoordinate2D _centerCoordinate;
    struct CLLocationCoordinate2D _currentCoordinate;
}

@property(nonatomic) _Bool viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(retain, nonatomic) NSTimer *requestTimer; // @synthesize requestTimer=_requestTimer;
@property(retain, nonatomic) SNHTTPRequestOperationWrapper *fetchAddressWrapper; // @synthesize fetchAddressWrapper=_fetchAddressWrapper;
@property(retain, nonatomic) WBSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UILabel *detailLocationLabel; // @synthesize detailLocationLabel=_detailLocationLabel;
@property(retain, nonatomic) UIButton *sureButton; // @synthesize sureButton=_sureButton;
@property(retain, nonatomic) UIButton *showMyPositionButton; // @synthesize showMyPositionButton=_showMyPositionButton;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) UIImage *currentAvatarImage; // @synthesize currentAvatarImage=_currentAvatarImage;
@property(nonatomic) struct CLLocationCoordinate2D currentCoordinate; // @synthesize currentCoordinate=_currentCoordinate;
@property(retain, nonatomic) WBMapLocationAnnotation *currentAnnotation; // @synthesize currentAnnotation=_currentAnnotation;
@property(copy, nonatomic) NSString *backSchemeStr; // @synthesize backSchemeStr=_backSchemeStr;
@property(nonatomic) _Bool backVCfullscreen; // @synthesize backVCfullscreen=_backVCfullscreen;
@property(nonatomic) _Bool jumpCoordinateHasBeenSet; // @synthesize jumpCoordinateHasBeenSet=_jumpCoordinateHasBeenSet;
@property(nonatomic) _Bool currentCoordinateHasBeenSet; // @synthesize currentCoordinateHasBeenSet=_currentCoordinateHasBeenSet;
@property(nonatomic) _Bool failedToLocateErrorMessageHasAlreadyShowed; // @synthesize failedToLocateErrorMessageHasAlreadyShowed=_failedToLocateErrorMessageHasAlreadyShowed;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property(retain, nonatomic) UIImageView *centerArrow; // @synthesize centerArrow=_centerArrow;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) struct CLLocationCoordinate2D expectJumpCoordinate; // @synthesize expectJumpCoordinate=_expectJumpCoordinate;
@property(copy, nonatomic) NSString *containerid; // @synthesize containerid=_containerid;
@property(copy, nonatomic) NSString *callBackSchemenameHead; // @synthesize callBackSchemenameHead=_callBackSchemenameHead;
@property(copy, nonatomic) NSString *searchTitle; // @synthesize searchTitle=_searchTitle;
@property(copy, nonatomic) NSString *customNaviagtionTitle; // @synthesize customNaviagtionTitle=_customNaviagtionTitle;
@property(nonatomic) __weak id <WBMapCenterControllerDelegate> mapDelegate; // @synthesize mapDelegate=_mapDelegate;
@property(nonatomic) _Bool showAnnotationAnimaton; // @synthesize showAnnotationAnimaton=_showAnnotationAnimaton;
- (void).cxx_destruct;
- (id)computeDistance:(double)arg1 andLatOrigin:(double)arg2 andTargaetLng:(double)arg3 andTargetLng:(double)arg4;
- (id)createCurrentImageWithAvatarImage:(id)arg1;
- (void)resetMapViewCenterAndZoomLevel;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)showSearchResults;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)setupSearchBar;
- (void)killRequestTimer;
- (void)startRequestTimer;
- (void)cancelOperation;
- (void)placeRequestAction;
- (void)popOrDismisAction;
- (void)locationSure:(id)arg1;
- (void)showMyPosition:(id)arg1;
- (void)setUpDetailLocationLabel;
- (void)setUpSureButton;
- (void)setUpMyPositionButton;
- (void)updateAddressLabelText:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)onReceivedBackwardInfo:(id)arg1;
- (void)onRecievedBackwardNotification:(id)arg1;
- (id)allowedBackworkSchemes;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

