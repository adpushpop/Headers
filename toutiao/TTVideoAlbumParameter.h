//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTApiParameter.h"

@class NSString;

@interface TTVideoAlbumParameter : TTApiParameter
{
    NSString *_item_id;
    NSString *_col_no;
    NSString *_media_id;
}

@property(copy, nonatomic) NSString *media_id; // @synthesize media_id=_media_id;
@property(copy, nonatomic) NSString *col_no; // @synthesize col_no=_col_no;
@property(copy, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
- (void).cxx_destruct;
- (id)requestModel;

@end

