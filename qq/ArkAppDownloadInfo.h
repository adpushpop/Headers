//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface ArkAppDownloadInfo : NSObject
{
    int _updatePeriodByMinutes;
    NSString *_url;
    NSString *_version;
    NSData *_signature;
    NSData *_md5;
}

@property(nonatomic) int updatePeriodByMinutes; // @synthesize updatePeriodByMinutes=_updatePeriodByMinutes;
@property(retain, nonatomic) NSData *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

