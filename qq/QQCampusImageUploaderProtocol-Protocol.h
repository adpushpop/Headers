//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSError;

@protocol QQCampusImageUploaderProtocol <NSObject>
- (_Bool)cancelUploadImage:(long long)arg1;
- (long long)uploadImages:(struct NSArray *)arg1 success:(void (^)(NSArray *))arg2 failure:(void (^)(NSError *))arg3;

@optional
- (_Bool)isTimeoutError:(NSError *)arg1;
- (_Bool)isNoNetworkError:(NSError *)arg1;
@end
