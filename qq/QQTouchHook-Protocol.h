//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSSet, UIEvent, UIResponder;

@protocol QQTouchHook <NSObject>
- (void)touchesCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2 from:(UIResponder *)arg3;
- (void)touchesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2 from:(UIResponder *)arg3;
- (void)touchesMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2 from:(UIResponder *)arg3;
- (void)touchesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2 from:(UIResponder *)arg3;
@end

