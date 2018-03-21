//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface EmotionLoader : NSObject
{
}

+ (void)uploadData:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)uploadImageByFilePath:(id)arg1 emotionData:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)findLocalImageByPath:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)addCustomEmotion:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)createRemoteGifModelByCloudId:(id)arg1;
+ (id)createCustomEmotionModel:(id)arg1 orPath:(id)arg2;
+ (void)createCustomEmotionModelWithPath:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (id)createCustomEmotionModelWithPath:(id)arg1;
+ (id)createCustomEmotionModel:(id)arg1;
+ (void)collectFavoriteEmotion:(id)arg1 emotionFid:(id)arg2 hasGif:(_Bool)arg3 completionWithErrorText:(CDUnknownBlockType)arg4;
+ (void)collectFavoriteEmotion:(id)arg1 emotionFid:(id)arg2 hasGif:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)downloadFavoriteEmotion:(id)arg1;
+ (_Bool)checkFavoriteEmotions:(id)arg1 download:(_Bool)arg2 synced:(_Bool *)arg3;
+ (_Bool)deleteInvalidFavoriteEmotions:(id)arg1;
+ (void)syncFavoriteEmotions:(_Bool)arg1;
+ (void)deleteFavoriteEmotions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)addFavoriteEmotion:(id)arg1 emotionFid:(id)arg2 imageData:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)downloadDefaultPackage:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)downloadEmotionPackage:(id)arg1 packageFid:(id)arg2 name:(id)arg3 iconFid:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (unsigned long long)gifCollectiveLimit;
+ (void)completePackageDownloading:(id)arg1 success:(_Bool)arg2;
+ (void)cancelPackageDownloading:(id)arg1;
+ (_Bool)isPackageDownloading:(id)arg1;
+ (_Bool)isExceedFavoriteLimit;
+ (void)setFavoriteSynced:(_Bool)arg1;
+ (_Bool)favoriteSynched;
+ (void)setFavoriteSynching:(_Bool)arg1;
+ (_Bool)favoriteSynching;

@end
