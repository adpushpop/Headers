//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber;
@protocol Optional;

@interface TTVPlayerTipRelatedEngityStats : JSONModel
{
    NSNumber<Optional> *_play_count;
    NSNumber<Optional> *_impr_count;
    NSNumber<Optional> *_digg_count;
    NSNumber<Optional> *_bury_count;
    NSNumber<Optional> *_favorite_count;
    NSNumber<Optional> *_comment_count;
    NSNumber<Optional> *_share_count;
}

@property(retain, nonatomic) NSNumber<Optional> *share_count; // @synthesize share_count=_share_count;
@property(retain, nonatomic) NSNumber<Optional> *comment_count; // @synthesize comment_count=_comment_count;
@property(retain, nonatomic) NSNumber<Optional> *favorite_count; // @synthesize favorite_count=_favorite_count;
@property(retain, nonatomic) NSNumber<Optional> *bury_count; // @synthesize bury_count=_bury_count;
@property(retain, nonatomic) NSNumber<Optional> *digg_count; // @synthesize digg_count=_digg_count;
@property(retain, nonatomic) NSNumber<Optional> *impr_count; // @synthesize impr_count=_impr_count;
@property(retain, nonatomic) NSNumber<Optional> *play_count; // @synthesize play_count=_play_count;
- (void).cxx_destruct;

@end
