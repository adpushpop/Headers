//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MovieSDKWeiboCellSubViewProtcol-Protocol.h"

@class MovieSDKBaseTableViewCell, MovieSDKMovieCardData, NSString, UIButton, UIImageView, UILabel;
@protocol MovieSDKTableViewCellDelegate;

@interface MovieSDKMovieBigCardView : UIView <MovieSDKWeiboCellSubViewProtcol>
{
    UIView *_bgView;
    UIImageView *_posterImageView;
    UIButton *_playBtn;
    UILabel *_titleLabel;
    UILabel *_actorLabel;
    UILabel *_scoreLabel;
    UIImageView *_actionImageView;
    UILabel *_actionLabel;
    UIView *_respondView;
    MovieSDKMovieCardData *_data;
    MovieSDKBaseTableViewCell *_cell;
    id <MovieSDKTableViewCellDelegate> _delegate;
}

+ (double)preferredHeightForData:(id)arg1 fitWidth:(double)arg2;
@property(nonatomic) __weak id <MovieSDKTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MovieSDKBaseTableViewCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) MovieSDKMovieCardData *data; // @synthesize data=_data;
@property(retain, nonatomic) UIView *respondView; // @synthesize respondView=_respondView;
@property(retain, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) UIImageView *actionImageView; // @synthesize actionImageView=_actionImageView;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *actorLabel; // @synthesize actorLabel=_actorLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)tapCard;
- (void)tapAction;
- (void)tapPlay;
- (void)sizeToFitWidth:(double)arg1;
- (void)updateWithData:(id)arg1;
- (void)setRespondDelegate:(id)arg1 contentCell:(id)arg2;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

