//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString;

@interface TBAddShareGroupVideoModel : QQModel
{
    unsigned int _source;
    NSString *_unionID;
    NSArray *_videoObjList;
}

@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(retain, nonatomic) NSArray *videoObjList; // @synthesize videoObjList=_videoObjList;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
- (id)getAllVid;
- (void)dealloc;

@end
