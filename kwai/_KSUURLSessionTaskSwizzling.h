//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_AFURLSessionTaskSwizzling.h"

@interface _KSUURLSessionTaskSwizzling : _AFURLSessionTaskSwizzling
{
}

+ (void)swizzleResumeAndSuspendAndCancelMethodForClass:(Class)arg1;
+ (void)load;
- (void)ks_cancel;
- (void)ks_suspend;
- (void)ks_resume;

@end

