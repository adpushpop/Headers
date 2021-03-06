//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTimelineItem.h"

@class NSDictionary, NSString;

@interface WBTimelineNewYearItem : WBTimelineItem
{
    NSString *pic;
    NSString *scheme;
    NSDictionary *_actionlog;
    NSDictionary *_click_actionlog;
}

+ (_Bool)shouldShowNewYearCell;
+ (Class)textContentViewClass;
+ (Class)contentViewClass;
+ (Class)drawingContextClass;
+ (Class)tableViewCellClass;
@property(retain, nonatomic) NSDictionary *click_actionlog; // @synthesize click_actionlog=_click_actionlog;
@property(retain, nonatomic) NSDictionary *actionlog; // @synthesize actionlog=_actionlog;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme;
@property(copy, nonatomic) NSString *pic; // @synthesize pic;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)updateWithDictionary:(id)arg1;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

