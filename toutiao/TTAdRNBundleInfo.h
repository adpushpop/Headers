//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString, NSURL;

@interface TTAdRNBundleInfo : JSONModel
{
    NSString *_md5;
    NSString *_moduleName;
    NSString *_requireMinReactVersion;
    NSURL *_url;
    NSString *_version;
    long long _type;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *requireMinReactVersion; // @synthesize requireMinReactVersion=_requireMinReactVersion;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (void).cxx_destruct;

@end
