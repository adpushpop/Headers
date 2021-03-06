//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

@interface YEBTransferListCell : UITableViewCell
{
    _Bool _withArrow;
    UILabel *_transferTypeLabel;
    UILabel *_transferTimeLabel;
    UILabel *_transferAmountLabel;
    UIImageView *_arrowImage;
    UIView *_separaterLine;
    NSString *_title;
    NSString *_tradeNo;
    NSString *_freezeType;
    NSString *_subTransCode;
}

@property(copy, nonatomic) NSString *subTransCode; // @synthesize subTransCode=_subTransCode;
@property(copy, nonatomic) NSString *freezeType; // @synthesize freezeType=_freezeType;
@property(copy, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool withArrow; // @synthesize withArrow=_withArrow;
@property(retain, nonatomic) UIView *separaterLine; // @synthesize separaterLine=_separaterLine;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UILabel *transferAmountLabel; // @synthesize transferAmountLabel=_transferAmountLabel;
@property(retain, nonatomic) UILabel *transferTimeLabel; // @synthesize transferTimeLabel=_transferTimeLabel;
@property(retain, nonatomic) UILabel *transferTypeLabel; // @synthesize transferTypeLabel=_transferTypeLabel;
- (void).cxx_destruct;
- (void)isLast:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithArrow:(_Bool)arg1 reusebleIdentifier:(id)arg2;

@end

