//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSString;
@protocol Optional;

@interface YXLPEViewModel : YXModel
{
    _Bool _shouldDownloadAvatar;
    NSString<Optional> *_memberid;
    long long _vtype;
}

@property(nonatomic) _Bool shouldDownloadAvatar; // @synthesize shouldDownloadAvatar=_shouldDownloadAvatar;
@property(nonatomic) long long vtype; // @synthesize vtype=_vtype;
@property(copy, nonatomic) NSString<Optional> *memberid; // @synthesize memberid=_memberid;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getAvatarUrlSuccess:(CDUnknownBlockType)arg1;

@end

