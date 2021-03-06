//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveTableViewCell.h"

#import "TBLiveHPPlayerDelegate-Protocol.h"

@class NSString;

@interface TBLiveHPWYSIWYGHomeCell : TBLiveTableViewCell <TBLiveHPPlayerDelegate>
{
    _Bool _enabledPlaying;
    NSString *_targetURL;
    NSString *_livingURL;
}

+ (struct CGSize)viewSizeWithModel:(id)arg1;
@property(nonatomic) _Bool enabledPlaying; // @synthesize enabledPlaying=_enabledPlaying;
@property(copy, nonatomic) NSString *livingURL; // @synthesize livingURL=_livingURL;
@property(copy, nonatomic) NSString *targetURL; // @synthesize targetURL=_targetURL;
- (void).cxx_destruct;
- (void)liveHPPlayer:(id)arg1 changeEvent:(int)arg2;
- (void)stopShortVideo;
- (void)playShortVideo;
- (void)updatePlayShortVideo;
- (void)stopScrollView;
- (void)buttonClickEvent:(id)arg1;
- (void)refreshWithModel:(id)arg1;
- (void)setupSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

