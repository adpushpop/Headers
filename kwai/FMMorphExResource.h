//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FMMorphExResource : NSObject
{
    int _pointCoordinateSystem;
    NSString *_fsShaderName;
    NSString *_vsShaderName;
    NSArray *_pointsIndexArray;
}

+ (id)objectWithKeyValues:(id)arg1;
@property(nonatomic) int pointCoordinateSystem; // @synthesize pointCoordinateSystem=_pointCoordinateSystem;
@property(retain, nonatomic) NSArray *pointsIndexArray; // @synthesize pointsIndexArray=_pointsIndexArray;
@property(retain, nonatomic) NSString *vsShaderName; // @synthesize vsShaderName=_vsShaderName;
@property(retain, nonatomic) NSString *fsShaderName; // @synthesize fsShaderName=_fsShaderName;
- (void).cxx_destruct;

@end
