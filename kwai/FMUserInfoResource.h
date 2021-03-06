//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FMUserInfoResource : NSObject
{
    float _relativeWidth;
    float _relativeHeight;
    NSArray *_male_src;
    NSArray *_female_src;
    NSArray *_userNameArray;
    NSArray *_identityArray;
    NSArray *_avatarArray;
    NSArray *_genderArray;
    NSArray *_textArray;
    NSArray *_imageArray;
}

+ (id)objectWithKeyValues:(id)arg1;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) NSArray *textArray; // @synthesize textArray=_textArray;
@property(retain, nonatomic) NSArray *genderArray; // @synthesize genderArray=_genderArray;
@property(retain, nonatomic) NSArray *avatarArray; // @synthesize avatarArray=_avatarArray;
@property(retain, nonatomic) NSArray *identityArray; // @synthesize identityArray=_identityArray;
@property(retain, nonatomic) NSArray *userNameArray; // @synthesize userNameArray=_userNameArray;
@property(copy, nonatomic) NSArray *female_src; // @synthesize female_src=_female_src;
@property(copy, nonatomic) NSArray *male_src; // @synthesize male_src=_male_src;
@property(nonatomic) float relativeHeight; // @synthesize relativeHeight=_relativeHeight;
@property(nonatomic) float relativeWidth; // @synthesize relativeWidth=_relativeWidth;
- (void).cxx_destruct;

@end

