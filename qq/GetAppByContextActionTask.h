//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface GetAppByContextActionTask : NSObject
{
    _Bool _isComplete;
    int _scene;
    NSString *_context;
    NSString *_action;
    NSArray *_metaList;
    NSArray *_historyMetaList;
    NSMutableArray *_appNameList;
    NSMutableArray *_appNameViewList;
    CDUnknownBlockType _callback;
}

@property(copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly) NSMutableArray *appNameViewList; // @synthesize appNameViewList=_appNameViewList;
@property(readonly) NSMutableArray *appNameList; // @synthesize appNameList=_appNameList;
@property(retain) NSArray *historyMetaList; // @synthesize historyMetaList=_historyMetaList;
@property(retain) NSArray *metaList; // @synthesize metaList=_metaList;
@property int scene; // @synthesize scene=_scene;
@property(copy) NSString *action; // @synthesize action=_action;
@property(copy) NSString *context; // @synthesize context=_context;
@property _Bool isComplete; // @synthesize isComplete=_isComplete;
- (void).cxx_destruct;
- (id)init;

@end

