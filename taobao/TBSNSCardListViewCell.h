//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBSNSCardEventHandler, TBSNSCardListViewController, TBSNSCardView, TBSNSCardViewBinding, TBSNSCardViewInfo;

@interface TBSNSCardListViewCell : UITableViewCell
{
    TBSNSCardEventHandler *_evendHandler;
    TBSNSCardViewBinding *_viewBinding;
    TBSNSCardView *_cardView;
    TBSNSCardViewInfo *_cardInfo;
    TBSNSCardListViewController *_controller;
    id _cardData;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) id cardData; // @synthesize cardData=_cardData;
@property(nonatomic) __weak TBSNSCardListViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) TBSNSCardViewInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(retain, nonatomic) TBSNSCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) TBSNSCardViewBinding *viewBinding; // @synthesize viewBinding=_viewBinding;
@property(retain, nonatomic) TBSNSCardEventHandler *evendHandler; // @synthesize evendHandler=_evendHandler;
- (void).cxx_destruct;
- (_Bool)refresh;
- (void)setData:(id)arg1;
- (void)setCardInfo:(id)arg1 withCardListController:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

