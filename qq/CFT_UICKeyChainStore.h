//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CFT_UICKeyChainStore : NSObject
{
}

+ (void)removeItemForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (void)removeItemForKey:(id)arg1;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4;
+ (id)dataForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (id)dataForKey:(id)arg1;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2;
+ (id)stringForKey:(id)arg1;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2;

@end

