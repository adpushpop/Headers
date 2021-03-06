//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction, NSString;

@interface DWComponentAnimationModel : NSObject
{
    NSString *_type;
    double _duration;
    NSString *_interpilatoryType;
    NSString *_orientation;
    long long _translateType1;
    long long _scaleType;
    long long _alphaType;
    CAMediaTimingFunction *_timingFunction;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) long long alphaType; // @synthesize alphaType=_alphaType;
@property(nonatomic) long long scaleType; // @synthesize scaleType=_scaleType;
@property(nonatomic) long long translateType1; // @synthesize translateType1=_translateType1;
@property(copy, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) NSString *interpilatoryType; // @synthesize interpilatoryType=_interpilatoryType;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;

@end

