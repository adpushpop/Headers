//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LOTKeyframeGroup, NSNumber, NSString;

@interface LOTShapePath : NSObject
{
    _Bool _closed;
    NSString *_keyname;
    NSNumber *_index;
    LOTKeyframeGroup *_shapePath;
}

@property(readonly, nonatomic) LOTKeyframeGroup *shapePath; // @synthesize shapePath=_shapePath;
@property(readonly, nonatomic) NSNumber *index; // @synthesize index=_index;
@property(readonly, nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
