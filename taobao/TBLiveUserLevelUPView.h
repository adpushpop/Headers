//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TBLiveUserLevelItem;

@interface TBLiveUserLevelUPView : UIView
{
    NSString *_userLevel;
    TBLiveUserLevelItem *_item;
}

+ (id)privilegeLabel:(id)arg1 x:(double)arg2;
@property(retain, nonatomic) TBLiveUserLevelItem *item; // @synthesize item=_item;
@property(copy, nonatomic) NSString *userLevel; // @synthesize userLevel=_userLevel;
- (void).cxx_destruct;
- (void)onTap;
- (void)setupViews;
- (id)initWithUserLevel:(struct CGRect)arg1 level:(id)arg2 item:(id)arg3;

@end
