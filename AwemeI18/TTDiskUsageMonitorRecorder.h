//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTBaseSystemMonitorRecorder.h"

@interface TTDiskUsageMonitorRecorder : TTBaseSystemMonitorRecorder
{
}

+ (id)_folderDescription:(const char *)arg1;
+ (long long)_folderSizeAtPath:(const char *)arg1;
+ (long long)folderSizeAtPath:(id)arg1;
- (float)getThisAppSpace;
- (void)getFolderDescriptionIfNeeded;
- (float)getFreeDiskSpace;
- (float)getTotalDiskSpace;
- (void)recordIfNeeded:(_Bool)arg1;
- (_Bool)isEnabled;
- (double)monitorInterval;
- (id)type;

@end

