//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface CNLogisticPackageListItem : TBJSONModel
{
    NSString *_itemPic;
    NSString *_price;
    NSString *_quantity;
    NSString *_itemSku;
    NSString *_title;
    NSString *_itemId;
}

@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *itemSku; // @synthesize itemSku=_itemSku;
@property(retain, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *itemPic; // @synthesize itemPic=_itemPic;
- (void).cxx_destruct;

@end

