//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTActivity.h"

@class TTActivityModel;

@interface _TTActivityOfPromotion : TTActivity
{
    TTActivityModel *_model;
}

@property(retain, nonatomic) TTActivityModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (id)activityTitle;
- (id)activityImageUrl;
- (long long)activityType;
- (id)initWithModel:(id)arg1;

@end

