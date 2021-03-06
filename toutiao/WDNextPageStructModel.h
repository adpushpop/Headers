//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface WDNextPageStructModel : WDBaseModel
{
    NSString<Optional> *_next_ansid;
    NSString<Optional> *_next_answer_schema;
    NSString<Optional> *_all_answer_text;
    NSString<Optional> *_next_answer_text;
    NSNumber<Optional> *_show_toast;
    NSNumber<Optional> *_has_next;
}

@property(retain, nonatomic) NSNumber<Optional> *has_next; // @synthesize has_next=_has_next;
@property(retain, nonatomic) NSNumber<Optional> *show_toast; // @synthesize show_toast=_show_toast;
@property(retain, nonatomic) NSString<Optional> *next_answer_text; // @synthesize next_answer_text=_next_answer_text;
@property(retain, nonatomic) NSString<Optional> *all_answer_text; // @synthesize all_answer_text=_all_answer_text;
@property(retain, nonatomic) NSString<Optional> *next_answer_schema; // @synthesize next_answer_schema=_next_answer_schema;
@property(retain, nonatomic) NSString<Optional> *next_ansid; // @synthesize next_ansid=_next_ansid;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

