//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString;

@interface dynamicPlastic : NSObject
{
    NSString *_dPFolderPath;
    NSString *_dPModelFilePath;
    NSArray *_rpcModelList;
    NSMutableArray *_classMethodsAry;
    NSString *_dPSubFolderName;
    NSMutableSet *_dpBuildingClass;
}

+ (id)dPGetObjectFactory:(id)arg1;
@property(retain, nonatomic) NSMutableSet *dpBuildingClass; // @synthesize dpBuildingClass=_dpBuildingClass;
@property(retain, nonatomic) NSString *dPSubFolderName; // @synthesize dPSubFolderName=_dPSubFolderName;
@property(retain, nonatomic) NSMutableArray *classMethodsAry; // @synthesize classMethodsAry=_classMethodsAry;
@property(retain, nonatomic) NSArray *rpcModelList; // @synthesize rpcModelList=_rpcModelList;
@property(retain, nonatomic) NSString *dPModelFilePath; // @synthesize dPModelFilePath=_dPModelFilePath;
@property(retain, nonatomic) NSString *dPFolderPath; // @synthesize dPFolderPath=_dPFolderPath;
- (void).cxx_destruct;
- (void)addClassMethods;
- (void)createProperties:(id)arg1 forClass:(Class)arg2 forClassName:(id)arg3 withParentClassName:(id)arg4;
- (_Bool)createOneProperty:(id)arg1 forClass:(Class)arg2 withParentClassName:(id)arg3 checkPropertyExist:(_Bool)arg4;
- (_Bool)createOneProperty:(id)arg1 forClass:(Class)arg2 withParentClassName:(id)arg3;
- (id)OwnershipFormatter:(id)arg1;
- (_Bool)findParent:(id *)arg1 ofClass:(id)arg2 classDic:(id *)arg3;
- (void)CreateClassByName:(id)arg1;
- (void)CreatePropertyClassByName:(id)arg1;
- (void)CreateSuperClassByName:(id)arg1;
- (_Bool)CreateClassByName:(id)arg1 parentClass:(id)arg2 classDic:(id)arg3;
- (_Bool)CreateSingleClass:(id)arg1;
- (void)CreateSingleClass:(id)arg1 withCbString:(id *)arg2;
- (void)dPGenerateClassByFullfilepath:(id)arg1 InBundleName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dPGenerateClassBy_NOZIP_File:(id)arg1 InBundleName:(id)arg2;
- (id)isNeedUpdateForFile:(id)arg1;
- (void)removeDigestFile:(id)arg1;
- (id)getFolderPath:(id)arg1;
- (id)unZip:(id)arg1 toPath:(id)arg2;
- (id)init;

@end

