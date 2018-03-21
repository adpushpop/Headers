//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSBeautyPreset, KSBeautySettingsViewModel, NSArray, NSString, UIImage;

@interface KSBeautyPresetViewModel : NSObject
{
    NSString *_displayName;
    UIImage *_icon;
    NSArray *_components;
    NSString *_logName;
    KSBeautyPreset *_preset;
    KSBeautySettingsViewModel *_settings;
}

@property(readonly, nonatomic) __weak KSBeautySettingsViewModel *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) KSBeautyPreset *preset; // @synthesize preset=_preset;
@property(readonly, nonatomic) NSString *logName; // @synthesize logName=_logName;
@property(retain, nonatomic) NSArray *components; // @synthesize components=_components;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)reset;
@property(readonly, nonatomic) _Bool customized;
@property(readonly, nonatomic) _Bool customizable;
- (id)initWithPreset:(id)arg1 settings:(id)arg2;

@end
