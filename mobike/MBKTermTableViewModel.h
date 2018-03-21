//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBKTermTableViewModel : NSObject
{
    _Bool _required;
    _Bool _selected;
    NSString *_title;
    NSString *_subTitle;
    NSString *_url;
    NSString *_termId;
    double _cellHeight;
}

@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(readonly, copy, nonatomic) NSString *termId; // @synthesize termId=_termId;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic, getter=isRequired) _Bool required; // @synthesize required=_required;
@property(readonly, copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canTransition;
- (id)initWithDictionary:(id)arg1;

@end
