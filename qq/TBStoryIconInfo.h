//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSDate, NSString;

@interface TBStoryIconInfo : QQModel
{
    unsigned int _errorCode;
    NSString *_unionID;
    NSArray *_userIconList;
    NSDate *_lastUpdateDate;
}

+ (id)createWithQQStory:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(retain, nonatomic) NSArray *userIconList; // @synthesize userIconList=_userIconList;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
- (void)dealloc;

@end
