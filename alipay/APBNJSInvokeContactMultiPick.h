//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APFullPageViewController;

@interface APBNJSInvokeContactMultiPick : NSObject
{
    APFullPageViewController *_viewController;
    CDUnknownBlockType _pickerCallback;
}

@property(copy, nonatomic) CDUnknownBlockType pickerCallback; // @synthesize pickerCallback=_pickerCallback;
@property(nonatomic) __weak APFullPageViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;

@end

