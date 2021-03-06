//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface KSDPhoto : NSObject
{
    _Bool _downgrade;
    int _width;
    int _height;
    NSString *_photoId;
    NSString *_coverUrl;
    NSString *_url;
    NSString *_faceUrl;
    NSString *_configUrl;
    long long _timestamp;
    NSDictionary *_extraParams;
}

@property(copy, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool downgrade; // @synthesize downgrade=_downgrade;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *configUrl; // @synthesize configUrl=_configUrl;
@property(copy, nonatomic) NSString *faceUrl; // @synthesize faceUrl=_faceUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *photoId; // @synthesize photoId=_photoId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end

