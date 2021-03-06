//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, WBNetworkClient;

@interface TabbarReplaceManager : NSObject
{
    _Bool isDownloading;
    WBNetworkClient *networkClient;
    NSArray *_tabbarItems;
    long long _version;
    NSString *_iconUrl;
}

+ (id)shareManager;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSArray *tabbarItems; // @synthesize tabbarItems=_tabbarItems;
- (void).cxx_destruct;
- (void)saveToLocal;
- (void)loadFromLocal;
- (void)clearTo:(long long)arg1;
- (void)downloadTabbarImages;
- (void)updateTabbarInfo;
- (void)tabInfo:(long long)arg1 result:(CDUnknownBlockType)arg2;
- (void)currentSkinDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

