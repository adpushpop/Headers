//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRateComponent.h"

@class NSString;

@interface TBRateTextRateComponent : TBRateComponent
{
    NSString *_commitId;
    NSString *_hint;
    NSString *_max;
    NSString *_value;
}

@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *max; // @synthesize max=_max;
@property(retain, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(retain, nonatomic) NSString *commitId; // @synthesize commitId=_commitId;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end
