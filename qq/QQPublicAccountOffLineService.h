//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface QQPublicAccountOffLineService : NSObject
{
    _Bool _isLoadingFromLocalFile;
    NSMutableArray *_excludeAccounts;
    NSMutableArray *_offlineAccounts;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *offlineAccounts; // @synthesize offlineAccounts=_offlineAccounts;
- (void).cxx_destruct;
- (void)asyncCheckUpdate;
- (void)_reloadOfflineAccountsFromLocalFile;
- (_Bool)isEnableOfflineSearch;
- (unsigned long long)getCurrOfflineAccCount;
- (id)getOfflineAccounts;
- (_Bool)checkExist:(long long)arg1;
- (id)init;

@end
