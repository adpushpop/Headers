//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTIMSeqIdManager : NSObject
{
    long long _mSequenceId;
}

+ (id)sharedInstance;
@property(nonatomic) long long mSequenceId; // @synthesize mSequenceId=_mSequenceId;
- (long long)getSequenceId;
- (void)initSequenceId;
- (id)init;

@end

