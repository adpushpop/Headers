//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MCComposedMessageUtility : NSObject
{
}

+ (id)getHeightFromUrl:(id)arg1;
+ (id)weexUrlWithIdentity:(id)arg1 andVersion:(id)arg2;
+ (id)genDowngradeWeexUrlDict;
+ (id)messageToWeexFromComposedMessage:(id)arg1;
+ (id)messageToExtendFromComposedMessage:(id)arg1;
+ (id)nameFromCardBizIdEnum:(long long)arg1;
+ (id)strFromCardBizIdEnum:(long long)arg1;
+ (long long)cardBizIdEnumFromStr:(id)arg1;
+ (long long)headVoLayoutTypeFromStr:(id)arg1;

@end
