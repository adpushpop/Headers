//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface APSocialTagListItem : NSObject
{
    NSString *_socialTagText;
    NSString *_socialTagId;
    NSMutableArray *_friendsSocialTag;
    NSMutableArray *_noFriendsSocialTag;
}

@property(retain, nonatomic) NSMutableArray *noFriendsSocialTag; // @synthesize noFriendsSocialTag=_noFriendsSocialTag;
@property(retain, nonatomic) NSMutableArray *friendsSocialTag; // @synthesize friendsSocialTag=_friendsSocialTag;
@property(retain, nonatomic) NSString *socialTagId; // @synthesize socialTagId=_socialTagId;
@property(retain, nonatomic) NSString *socialTagText; // @synthesize socialTagText=_socialTagText;
- (void).cxx_destruct;
- (id)init;

@end

