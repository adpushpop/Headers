//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol CTShareMessageAlert;

@interface CTCoverAlertView : UIView
{
    id <CTShareMessageAlert> _content;
    UIView *_bgView;
    UIView *_boardView;
}

@property(retain, nonatomic) UIView *boardView; // @synthesize boardView=_boardView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) id <CTShareMessageAlert> content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)hideAlert;
- (void)showAlertInView:(id)arg1;
- (struct CGRect)boardViewFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

