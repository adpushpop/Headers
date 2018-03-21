//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APSKMessage, APSKShareContent, NSString;
@protocol APSKPluginDelegate;

@protocol APSKSharePlugin <NSObject>

@optional
+ (_Bool)isChannelAppSupportOpenAPI;
+ (_Bool)isInstalled;
+ (_Bool)isChannelAppInstalled;
- (void)getUserAvatarUrl:(NSString *)arg1 forChannel:(NSString *)arg2 start:(void (^)(void))arg3 completion:(void (^)(NSError *, NSString *))arg4;
- (void)shareContent:(APSKShareContent *)arg1 toChannel:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)shareMessage:(APSKMessage *)arg1 toChannel:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)shareMessage:(APSKMessage *)arg1 delegate:(id <APSKPluginDelegate>)arg2 channel:(NSString *)arg3;
@end
