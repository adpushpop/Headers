//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NileBizModel.h"

@class NSDictionary;

@interface NileCountDownModel : NileBizModel
{
    NileBizModel *_beginModel;
    NileBizModel *_previewModel;
    double _beginTime;
    double _endTime;
    NSDictionary *_begin;
    NSDictionary *_preview;
}

@property(retain, nonatomic) NSDictionary *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) NSDictionary *begin; // @synthesize begin=_begin;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NileBizModel *previewModel; // @synthesize previewModel=_previewModel;
@property(retain, nonatomic) NileBizModel *beginModel; // @synthesize beginModel=_beginModel;
- (void).cxx_destruct;
- (_Bool)hasBegan;
- (id)actionTitle;
- (id)timeTitle;
- (double)leftTime;
- (void)setData:(id)arg1;

@end

