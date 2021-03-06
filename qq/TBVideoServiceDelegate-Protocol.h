//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString;

@protocol TBVideoServiceDelegate <NSObject>

@optional
- (void)updateUploadingVideoSize:(long long)arg1 withVideoPath:(NSString *)arg2 withUserData:(id)arg3;
- (void)uploadVideoFail:(NSString *)arg1 withError:(NSError *)arg2 withUserData:(id)arg3;
- (void)uploadVideoProgress:(NSString *)arg1 withProgress:(double)arg2 withUserData:(id)arg3;
- (void)uploadVideoSuccess:(NSString *)arg1 withVideoPath:(NSString *)arg2 withDoodleUrl:(NSString *)arg3 withDoodlePath:(NSString *)arg4 withThumbPath:(NSString *)arg5 withResultDict:(NSDictionary *)arg6 withUserData:(id)arg7;
- (void)uploadVideoBegin:(NSString *)arg1 withVideoSize:(long long)arg2 withVideoCover:(NSString *)arg3 withDoodlePath:(NSString *)arg4 withUserData:(id)arg5;
@end

