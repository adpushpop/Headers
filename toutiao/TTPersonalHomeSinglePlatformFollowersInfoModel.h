//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSNumber, NSString;

@interface TTPersonalHomeSinglePlatformFollowersInfoModel : TTResponseModel
{
    NSString *_name;
    NSString *_icon;
    NSNumber *_fansCount;
    NSString *_openUrl;
    NSString *_appleId;
    NSString *_downloadUrl;
    NSString *_appName;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(copy, nonatomic) NSString *appleId; // @synthesize appleId=_appleId;
@property(copy, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(retain, nonatomic) NSNumber *fansCount; // @synthesize fansCount=_fansCount;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

