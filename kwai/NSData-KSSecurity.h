//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (KSSecurity)
+ (id)ks_dataFromHexString:(id)arg1;
- (id)ks_hexString;
- (id)ks_MD5;
- (id)ks_SHA256;
- (id)ks_SHA512;
- (id)ks_AESDecryptWithKey:(id)arg1;
- (id)ks_AESDecryptWithKey:(id)arg1 options:(unsigned int)arg2 initVector:(id)arg3;
- (id)ks_AESEncryptWithKey:(id)arg1;
- (id)ks_AESEncryptWithKey:(id)arg1 options:(unsigned int)arg2 initVector:(id)arg3;
@end
