//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DSConfig, DSViewGroup;
@protocol DSPayForResultDelegate;

@interface DSSDK : NSObject
{
    DSViewGroup *_viewGroup;
    DSConfig *_config;
    id <DSPayForResultDelegate> _delegate;
}

+ (id)instance;
@property(nonatomic) id <DSPayForResultDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DSConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) DSViewGroup *viewGroup; // @synthesize viewGroup=_viewGroup;
- (void).cxx_destruct;
- (void)closeViewGroup:(id)arg1;
- (id)getUIWindow;
- (void)showDefault;
- (void)show;
- (void)setContentView:(id)arg1;
- (void)setAlipayDefaultService:(_Bool)arg1;

@end

