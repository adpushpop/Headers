//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ComicDanmuQueryReqBody : NSObject
{
    NSString *_comicId;
    NSString *_sectionId;
    NSString *_picId;
    NSString *_lastDanmuId;
    int _num;
    int _xo;
}

+ (id)ReqWithComicId:(id)arg1 sectionId:(id)arg2 picId:(id)arg3 lastDanmuId:(id)arg4 num:(int)arg5;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *comicId; // @dynamic comicId;
@property(copy, nonatomic) NSString *lastDanmuId; // @dynamic lastDanmuId;
@property(nonatomic) int num; // @dynamic num;
@property(copy, nonatomic) NSString *picId; // @dynamic picId;
@property(copy, nonatomic) NSString *sectionId; // @dynamic sectionId;

@end

