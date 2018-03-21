//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MVTableRow.h"

@class NSString, UIColor;

@interface MVCommonSeperatorRow : MVTableRow
{
    UIColor *_backgroundColor;
    NSString *_reuseIdentifier;
    double _height;
    CDUnknownBlockType _customeCellBlock;
}

@property(copy, nonatomic) CDUnknownBlockType customeCellBlock; // @synthesize customeCellBlock=_customeCellBlock;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)updateCell:(id)arg1 indexPath:(id)arg2;
- (id)cellForTableView:(id)arg1 indexPath:(id)arg2;
- (double)cellHeight;
- (id)cellReuseIdentifier;
- (void)initData;
- (id)init;

@end
