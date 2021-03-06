//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TDMTemplateManger : NSObject
{
    _Bool _useDinamicCellPreload;
    _Bool _isAvailable;
    NSMutableDictionary *_managedTemplateInfos;
    NSMutableDictionary *_avaiableTemplateItems;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *avaiableTemplateItems; // @synthesize avaiableTemplateItems=_avaiableTemplateItems;
@property(retain, nonatomic) NSMutableDictionary *managedTemplateInfos; // @synthesize managedTemplateInfos=_managedTemplateInfos;
@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(nonatomic) _Bool useDinamicCellPreload; // @synthesize useDinamicCellPreload=_useDinamicCellPreload;
- (void).cxx_destruct;
- (void)readConfigurations;
- (void)saveConfigurations;
- (void)downloadTemplates:(id)arg1 businessType:(long long)arg2;
- (id)stringBusinessType:(long long)arg1;
- (id)_templateItemKey:(id)arg1;
- (id)_availableTemplateItem:(id)arg1 businessType:(long long)arg2;
- (void)_updateAvailbleTemplateConfig:(id)arg1 businessType:(long long)arg2;
- (void)_clearTemplateInfosForbusinessType:(long long)arg1;
- (void)_addTemplateInfos:(id)arg1 businessType:(long long)arg2;
- (void)setTemplateCacheStrategy:(unsigned long long)arg1 type:(long long)arg2;
- (id)businessTypeName:(long long)arg1;
- (id)viewGeneratorForType:(long long)arg1;
- (id)templateManagerForType:(long long)arg1;
- (void)setTemplateInfoDisable:(id)arg1 businessType:(long long)arg2;
- (long long)templateConfigVersion:(long long)arg1;
- (void)addTemplateInfos:(id)arg1 businessType:(long long)arg2;
- (id)availableTemplateItem:(id)arg1 businessType:(long long)arg2;
- (id)init;
- (void)dealloc;

@end

