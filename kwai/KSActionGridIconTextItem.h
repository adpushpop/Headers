//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSActionGridItem-Protocol.h"

@class NSString, UIColor, UIImage;

@interface KSActionGridIconTextItem : NSObject <KSActionGridItem>
{
    Class _cellClass;
    _Bool _enabled;
    UIImage *_icon;
    UIImage *_highlightIcon;
    NSString *_text;
    double _textTopMargin;
    UIColor *_textColor;
    CDUnknownBlockType _selectedBlock;
}

+ (id)itemWithIcon:(id)arg1 highlightIcon:(id)arg2 text:(id)arg3 block:(CDUnknownBlockType)arg4;
+ (id)itemWithIcon:(id)arg1 text:(id)arg2 block:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double textTopMargin; // @synthesize textTopMargin=_textTopMargin;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *highlightIcon; // @synthesize highlightIcon=_highlightIcon;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
- (void).cxx_destruct;
- (void)didSelected;
- (void)updateCell:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

