//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, WDInviteUserStructModel;

@interface WDInviteUserTableCellViewModel : NSObject
{
    _Bool _hideBottomLine;
    _Bool _touchAble;
    WDInviteUserStructModel *_model;
    NSDictionary *_extraDicts;
    NSDictionary *_apiParams;
    NSString *_qID;
    NSString *_groupTitle;
}

@property(copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(copy, nonatomic) NSString *qID; // @synthesize qID=_qID;
@property(copy, nonatomic) NSDictionary *apiParams; // @synthesize apiParams=_apiParams;
@property(copy, nonatomic) NSDictionary *extraDicts; // @synthesize extraDicts=_extraDicts;
@property(nonatomic) _Bool touchAble; // @synthesize touchAble=_touchAble;
@property(nonatomic) _Bool hideBottomLine; // @synthesize hideBottomLine=_hideBottomLine;
@property(retain, nonatomic) WDInviteUserStructModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initWithUserStructModel:(id)arg1 groupTile:(id)arg2 hideLine:(_Bool)arg3 qid:(id)arg4 extraDic:(id)arg5 apiParams:(id)arg6;

@end
