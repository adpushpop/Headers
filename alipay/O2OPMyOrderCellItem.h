//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistListItem.h"

@class NSString;

@interface O2OPMyOrderCellItem : O2OMistListItem
{
    _Bool _needUpdate;
    _Bool _isLastInList;
    NSString *_orderNo;
    NSString *_tradeNo;
    NSString *_status;
    unsigned long long _listOrderStatus;
    NSString *_templateType;
}

+ (id)itemWithOrderInfo:(id)arg1 templateId:(id)arg2 templateJson:(id)arg3 viewController:(id)arg4;
@property(copy, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(nonatomic) unsigned long long listOrderStatus; // @synthesize listOrderStatus=_listOrderStatus;
@property(nonatomic) _Bool isLastInList; // @synthesize isLastInList=_isLastInList;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
@property(copy, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
- (void).cxx_destruct;
- (void)updateModel:(id)arg1 constrainedSize:(struct CGSize)arg2 context:(id)arg3;
- (void)tryToUpdate;
- (void)updateFromeItem:(id)arg1;
- (id)initWithOrderInfo:(id)arg1 templateId:(id)arg2 templateJson:(id)arg3 viewController:(id)arg4;

@end
