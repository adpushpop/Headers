//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface STPAlertTuple : NSObject
{
    NSString *_title;
    CDUnknownBlockType _action;
    unsigned long long _style;
}

+ (id)tupleWithTitle:(id)arg1 style:(unsigned long long)arg2 action:(CDUnknownBlockType)arg3;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

