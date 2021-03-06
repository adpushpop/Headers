//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTDataAdapter-Protocol.h"

@class FBKVOController, NSDictionary, NSMutableSet, NSString;

@interface TTDataAdapter : NSObject <TTDataAdapter>
{
    _Bool _initPrepare;
    NSMutableSet *_banMetaKeyPathPrefixs;
    _Bool _banKVO;
    _Bool _isStatBanMetaKeyPath;
    FBKVOController *_dataKVOController;
    id _viewDataObj;
    id _metaDataObj;
    NSDictionary *_valueTransformersDictionary;
}

+ (_Bool)checkBanObserverWithObj:(id)arg1 keyPath:(id)arg2 inPrefifxs:(id)arg3;
+ (_Bool)isExistBanObserverKey:(id)arg1 inPrefifxs:(id)arg2;
+ (id)DAKeyMap;
+ (id)transformerForModelPropertiesOfClass:(Class)arg1;
+ (id)transformerForModelPropertiesOfObjCType:(const char *)arg1;
+ (id)valueTransformersForViewDataClass:(Class)arg1 metaDataClass:(Class)arg2;
@property(retain, nonatomic) NSDictionary *valueTransformersDictionary; // @synthesize valueTransformersDictionary=_valueTransformersDictionary;
@property _Bool isStatBanMetaKeyPath; // @synthesize isStatBanMetaKeyPath=_isStatBanMetaKeyPath;
@property _Bool banKVO; // @synthesize banKVO=_banKVO;
@property(nonatomic) __weak id metaDataObj; // @synthesize metaDataObj=_metaDataObj;
@property(nonatomic) __weak id viewDataObj; // @synthesize viewDataObj=_viewDataObj;
@property(nonatomic) __weak FBKVOController *dataKVOController; // @synthesize dataKVOController=_dataKVOController;
- (void).cxx_destruct;
- (Class)viewDataClass;
- (Class)metaDataClass;
- (void)dealloc;
- (void)mergeViewDataToMetaDataWithViewDataKey:(id)arg1 metaDataKey:(id)arg2;
- (void)mergeMetaDataToViewDataWithViewDataKey:(id)arg1 metaDataKey:(id)arg2;
- (_Bool)checkBanObserverKey:(id)arg1;
- (void)mergeValuesForKeysToViewDataObj;
- (void)registerMetaDataKVO;
- (void)registerViewDataKVO;
- (void)reBind;
- (void)prepareConstMetaData:(id)arg1 viewData:(id)arg2;
- (void)prepareWithViewData:(id)arg1;
- (id)initWithMetaData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

