//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

@interface MovieSDKStarControl : UIView
{
    double _starNumber;
    long long _type;
    UIImage *_oneStarImage;
    UIImage *_emptyStarImage;
    UIImage *_halfStarImage;
    double _starSize;
    double _starMargin;
}

@property(nonatomic) double starMargin; // @synthesize starMargin=_starMargin;
@property(nonatomic) double starSize; // @synthesize starSize=_starSize;
@property(retain, nonatomic) UIImage *halfStarImage; // @synthesize halfStarImage=_halfStarImage;
@property(retain, nonatomic) UIImage *emptyStarImage; // @synthesize emptyStarImage=_emptyStarImage;
@property(retain, nonatomic) UIImage *oneStarImage; // @synthesize oneStarImage=_oneStarImage;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double starNumber; // @synthesize starNumber=_starNumber;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (long long)starType:(double)arg1 atIndex:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2 starNumber:(double)arg3;
- (id)initWithType:(long long)arg1 starNumber:(double)arg2;
- (void)dealloc;

@end

