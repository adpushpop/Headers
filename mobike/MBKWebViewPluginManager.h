//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MBKWebViewPluginManager : NSObject
{
    NSMutableDictionary *_supportPlugins;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *supportPlugins; // @synthesize supportPlugins=_supportPlugins;
- (void).cxx_destruct;
- (void)registerPlugin:(Class)arg1 supportMethodName:(id)arg2;
- (id)getHandlerForMethodName:(id)arg1;

@end

