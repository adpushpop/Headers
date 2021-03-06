//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSArray, NSNumber, NSString;
@protocol KDMagicUrlStructModel><Optional;

@interface KDImageUrlStructModel : WDBaseModel
{
    NSNumber *_height;
    NSNumber *_width;
    NSString *_uri;
    NSString *_url;
    NSArray<KDMagicUrlStructModel><Optional> *_url_list;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray<KDMagicUrlStructModel><Optional> *url_list; // @synthesize url_list=_url_list;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

