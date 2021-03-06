//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class MQZonePhotoView, NSMutableArray;

@protocol MQZonePhotoViewDelegate <NSObject>
- (void)photoCellCheckPhotoState:(MQZonePhotoView *)arg1 photoList:(NSMutableArray *)arg2;
- (void)photoCellChangeHeight:(MQZonePhotoView *)arg1 heightOffset:(double)arg2;
- (void)photoCellBecomeActive:(MQZonePhotoView *)arg1;

@optional
- (void)photoCellScrollToBottom;
- (void)updatephotoCell:(MQZonePhotoView *)arg1 photoList:(NSMutableArray *)arg2;
- (void)photoCell:(MQZonePhotoView *)arg1 didPressImageForIndex:(unsigned long long)arg2;
- (void)photoCellDidPressPlusButton:(MQZonePhotoView *)arg1;
@end

