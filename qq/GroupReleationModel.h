//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupPropertyModel.h>

@class NSArray, NSMutableDictionary;

@interface GroupReleationModel : QQGroupPropertyModel
{
}

- (id)nickForGroup:(unsigned long long)arg1;
- (void)setNickForGroup:(unsigned long long)arg1 nick:(id)arg2;
- (id)getSavePath:(_Bool)arg1;
- (id)getGroupSharePath:(_Bool)arg1;
- (void)save;
- (void)load;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSArray *groupAdministrators; // @dynamic groupAdministrators;
@property(nonatomic) unsigned long long groupCode; // @dynamic groupCode;
@property(retain, nonatomic) NSMutableDictionary *groupNickDict; // @dynamic groupNickDict;
@property(nonatomic) unsigned long long groupOwner; // @dynamic groupOwner;
@property(nonatomic) unsigned long long selfUIN; // @dynamic selfUIN;

@end

