//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TDBaseModel.h"

@class NSString;

@interface TDDeviceHardwareConfig : TDBaseModel
{
    NSString *_manufacture;
    NSString *_brand;
    NSString *_model;
    NSString *_pixel;
    NSString *_densityDpi;
    long long _totalDiskSpace;
}

@property(nonatomic) long long totalDiskSpace; // @synthesize totalDiskSpace=_totalDiskSpace;
@property(retain, nonatomic) NSString *densityDpi; // @synthesize densityDpi=_densityDpi;
@property(retain, nonatomic) NSString *pixel; // @synthesize pixel=_pixel;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(retain, nonatomic) NSString *manufacture; // @synthesize manufacture=_manufacture;
- (void).cxx_destruct;
- (id)archiveToDictionary;

@end
