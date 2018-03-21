//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NileDataHelper;
@protocol NileComponentProtocol, NileViewDelegate;

@interface NileView : UIView
{
    id <NileViewDelegate> _delegate;
    long long _state;
    id <NileComponentProtocol> _component;
    NileDataHelper *_helper;
    NSString *_componentId;
}

@property(copy, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
@property(retain, nonatomic) NileDataHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) id <NileComponentProtocol> component; // @synthesize component=_component;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <NileViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadData;

@end
