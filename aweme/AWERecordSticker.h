//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

#import "AWEResourceProtocol-Protocol.h"

@class AWEURLModel, NSNumber, NSString;

@interface AWERecordSticker : AWEBaseApiModel <AWEResourceProtocol>
{
    AWEURLModel *resourceURL;
    long long resourceID;
    AWEURLModel *_iconURL;
    NSString *_name;
    NSString *_hint;
    long long _type;
    NSNumber *_musicID;
    unsigned long long _usageScenario;
}

+ (id)resourceURLJSONTransformer;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) unsigned long long usageScenario; // @synthesize usageScenario=_usageScenario;
@property(retain, nonatomic) NSNumber *musicID; // @synthesize musicID=_musicID;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) AWEURLModel *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) long long resourceID; // @synthesize resourceID;
@property(retain, nonatomic) AWEURLModel *resourceURL; // @synthesize resourceURL;
- (void).cxx_destruct;
- (_Bool)stickerResourceForItemExist;

@end

