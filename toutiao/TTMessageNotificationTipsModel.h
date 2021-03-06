//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString, TTMessageNotificationTipsImportantModel;
@protocol Optional;

@interface TTMessageNotificationTipsModel : JSONModel
{
    NSNumber *_total;
    NSString *_tips;
    NSString<Optional> *_followChannelTips;
    TTMessageNotificationTipsImportantModel<Optional> *_important;
    NSString *_actionType;
    NSNumber *_interval;
    NSString<Optional> *_lastImageUrl;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *lastImageUrl; // @synthesize lastImageUrl=_lastImageUrl;
@property(retain, nonatomic) NSNumber *interval; // @synthesize interval=_interval;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) TTMessageNotificationTipsImportantModel<Optional> *important; // @synthesize important=_important;
@property(copy, nonatomic) NSString<Optional> *followChannelTips; // @synthesize followChannelTips=_followChannelTips;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSNumber *total; // @synthesize total=_total;
- (void).cxx_destruct;

@end

