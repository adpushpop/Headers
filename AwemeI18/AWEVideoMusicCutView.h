//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HTSVideoAudioSlider, UIButton;

@interface AWEVideoMusicCutView : UIView
{
    HTSVideoAudioSlider *_musicSlider;
    UIButton *_musicStartIndicator;
    UIButton *_musicCutDoneButton;
}

@property(retain, nonatomic) UIButton *musicCutDoneButton; // @synthesize musicCutDoneButton=_musicCutDoneButton;
@property(retain, nonatomic) UIButton *musicStartIndicator; // @synthesize musicStartIndicator=_musicStartIndicator;
@property(retain, nonatomic) HTSVideoAudioSlider *musicSlider; // @synthesize musicSlider=_musicSlider;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

