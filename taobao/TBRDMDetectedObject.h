//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBRDMDetectedObject : NSObject
{
    int _category;
    float _left;
    float _top;
    float _right;
    float _bottom;
    float _screenLeft;
    float _screenTop;
    float _screenRight;
    float _screenBottom;
    long long _timestamp;
    NSString *_label;
    double _state;
    struct CGSize _screenSize;
    struct CGSize _imageSize;
}

@property(nonatomic) float screenBottom; // @synthesize screenBottom=_screenBottom;
@property(nonatomic) float screenRight; // @synthesize screenRight=_screenRight;
@property(nonatomic) float screenTop; // @synthesize screenTop=_screenTop;
@property(nonatomic) float screenLeft; // @synthesize screenLeft=_screenLeft;
@property(nonatomic) double state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) float bottom; // @synthesize bottom=_bottom;
@property(nonatomic) float right; // @synthesize right=_right;
@property(nonatomic) float top; // @synthesize top=_top;
@property(nonatomic) float left; // @synthesize left=_left;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int category; // @synthesize category=_category;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
- (void).cxx_destruct;
- (void)convertToScreenCoordinate;
- (id)toDictionary;
- (id)description;
- (id)initWithDetectionObject:(id)arg1;

@end
