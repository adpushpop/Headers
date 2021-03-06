//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface HTSCafeSchemeUrls : NSObject
{
    NSString *_cafeUrl;
    NSString *_appId;
    NSDictionary *_defaultParams;
}

@property(retain, nonatomic) NSDictionary *defaultParams; // @synthesize defaultParams=_defaultParams;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *cafeUrl; // @synthesize cafeUrl=_cafeUrl;
- (void).cxx_destruct;
- (id)writeSchemeUrlWithParams:(id)arg1;
- (id)readSchemeUrlWithArticleId:(unsigned long long)arg1;
- (id)cafeSchemeUrl;
- (id)initWithCafeUrl:(id)arg1 appId:(id)arg2;

@end

