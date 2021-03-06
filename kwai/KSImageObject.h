//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface KSImageObject : NSObject
{
    int _indexOfArray;
    int _longthOfArray;
    int _leftx1;
    int _lefty1;
    int _rightx1;
    int _righty1;
    int _mouthx1;
    int _mouthy1;
    int _leftx2;
    int _lefty2;
    int _rightx2;
    int _righty2;
    int _mouthx2;
    int _mouthy2;
    UIImage *_image;
    char *_imageData;
}

@property(nonatomic) char *imageData; // @synthesize imageData=_imageData;
@property int mouthy2; // @synthesize mouthy2=_mouthy2;
@property int mouthx2; // @synthesize mouthx2=_mouthx2;
@property int righty2; // @synthesize righty2=_righty2;
@property int rightx2; // @synthesize rightx2=_rightx2;
@property int lefty2; // @synthesize lefty2=_lefty2;
@property int leftx2; // @synthesize leftx2=_leftx2;
@property int mouthy1; // @synthesize mouthy1=_mouthy1;
@property int mouthx1; // @synthesize mouthx1=_mouthx1;
@property int righty1; // @synthesize righty1=_righty1;
@property int rightx1; // @synthesize rightx1=_rightx1;
@property int lefty1; // @synthesize lefty1=_lefty1;
@property int leftx1; // @synthesize leftx1=_leftx1;
@property int longthOfArray; // @synthesize longthOfArray=_longthOfArray;
@property int indexOfArray; // @synthesize indexOfArray=_indexOfArray;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (struct CGContext *)createARGBBitmapContextFromImage:(struct CGImage *)arg1;
- (void)dealloc;

@end

