//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TAGObjectAndStatic : NSObject
{
    _Bool _isStatic;
    NSObject *_object;
}

@property(readonly, retain, nonatomic) NSObject *object; // @synthesize object=_object;
@property(readonly, nonatomic) _Bool isStatic; // @synthesize isStatic=_isStatic;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 isStatic:(_Bool)arg2;

@end
