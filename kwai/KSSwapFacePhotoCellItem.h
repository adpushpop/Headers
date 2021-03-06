//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMScene, NSString, UIImage;

@interface KSSwapFacePhotoCellItem : NSObject
{
    _Bool _selected;
    _Bool _isNewVersion;
    long long _contentMode;
    UIImage *_image;
    UIImage *_thumbImage;
    NSString *_imageName;
    FMScene *_scene;
    CDUnknownBlockType _selectedBlock;
}

@property(nonatomic) _Bool isNewVersion; // @synthesize isNewVersion=_isNewVersion;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) FMScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
- (void).cxx_destruct;
- (id)init;

@end

