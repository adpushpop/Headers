//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPCommonResult.h"

@class NSString;

@interface TPWeexResult : TPCommonResult
{
    NSString *_popUrl;
    NSString *_sizeModeForShare;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSString *sizeModeForShare; // @synthesize sizeModeForShare=_sizeModeForShare;
@property(retain, nonatomic) NSString *popUrl; // @synthesize popUrl=_popUrl;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end
