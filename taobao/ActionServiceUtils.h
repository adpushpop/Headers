//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ActionServiceUtils : NSObject
{
}

+ (void)ctrlClicked:(id)arg1 onPage:(id)arg2 args:(id)arg3;
+ (void)commitOnPage:(id)arg1 eventId:(int)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 args:(id)arg6;
+ (void)showToastWithMessage:(id)arg1 duration:(double)arg2;
+ (id)currentVC;
+ (id)currentNavigationController;
+ (void)loadDataWithURL:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (long long)compareWithCurrentVersion:(id)arg1;
+ (void)loadHttpUrl:(id)arg1 response:(CDUnknownBlockType)arg2;

@end

