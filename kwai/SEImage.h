//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SEImage : NSObject
{
}

+ (void)drawGrid:(struct CGContext *)arg1 DrawRect:(struct CGRect)arg2 GridSize:(struct CGSize)arg3;
+ (void)drawImage:(struct CGContext *)arg1 Image:(struct CGImage *)arg2 AtPoint:(struct CGPoint)arg3 RolateAtPoint:(struct CGPoint)arg4 Rolate:(float)arg5 Zoom:(float)arg6;
+ (void)drawImage:(struct CGContext *)arg1 Image:(struct CGImage *)arg2 AtPoint:(struct CGPoint)arg3 RolateAtPoint:(struct CGPoint)arg4 Rolate:(float)arg5 Zoom:(float)arg6 FlipX:(_Bool)arg7;
+ (void)drawImage:(struct CGContext *)arg1 Image:(struct CGImage *)arg2 AtPoint:(struct CGPoint)arg3 RolateAtPoint:(struct CGPoint)arg4 Rolate:(float)arg5;
+ (void)drawImage:(struct CGContext *)arg1 Image:(struct CGImage *)arg2 AtPoint:(struct CGPoint)arg3 RolateAtPoint:(struct CGPoint)arg4 Rolate:(float)arg5 FlipX:(_Bool)arg6;
+ (void)drawImage:(struct CGContext *)arg1 Image:(struct CGImage *)arg2 AtPoint:(struct CGPoint)arg3 Zoom:(float)arg4;
+ (void)drawImage:(struct CGContext *)arg1 Image:(struct CGImage *)arg2 AtPoint:(struct CGPoint)arg3 Zoom:(float)arg4 FlipX:(_Bool)arg5;
+ (void)drawImage:(struct CGContext *)arg1 Image:(struct CGImage *)arg2 AtPoint:(struct CGPoint)arg3 FlipX:(_Bool)arg4;
+ (void)drawImage:(struct CGContext *)arg1 Image:(struct CGImage *)arg2 AtPoint:(struct CGPoint)arg3;

@end
