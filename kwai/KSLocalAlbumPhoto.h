//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class KSLocalAlbumWorkspace, NSDate, NSString;

@interface KSLocalAlbumPhoto : NSObject <NSCopying>
{
    _Bool _isSelected;
    NSString *_photoPath;
    NSString *_name;
    long long _localAlbumPhotoType;
    NSDate *_time;
    id _resourceInfo;
}

@property(retain, nonatomic) id resourceInfo; // @synthesize resourceInfo=_resourceInfo;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(nonatomic) long long localAlbumPhotoType; // @synthesize localAlbumPhotoType=_localAlbumPhotoType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *photoPath; // @synthesize photoPath=_photoPath;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(nonatomic) _Bool deleted;
@property(nonatomic) int lockCount;
- (id)ks_iconImage;
- (_Bool)isPictures;
- (id)reloadWorkspace;
@property(readonly, nonatomic) KSLocalAlbumWorkspace *workspace;

@end

