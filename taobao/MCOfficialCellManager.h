//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IMThreadSafeMutableDictionary;

@interface MCOfficialCellManager : NSObject
{
    IMThreadSafeMutableDictionary *_cellInfo;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IMThreadSafeMutableDictionary *cellInfo; // @synthesize cellInfo=_cellInfo;
- (void).cxx_destruct;
- (id)getCellByWithStyle:(long long)arg1 tableView:(id)arg2 reuseIdentifier:(id)arg3;
- (void)registereCell:(Class)arg1 reuseIdentifier:(id)arg2;
- (id)init;

@end
