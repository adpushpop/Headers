//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCOfficialMessageVO.h"

#import "MCOfficialMenuCardVOProtocol-Protocol.h"

@class NSArray, NSString;

@interface MCOfficialMenuCardVO : MCOfficialMessageVO <MCOfficialMenuCardVOProtocol>
{
    NSString *_title;
    NSString *_imageUrl;
    NSString *_tipText;
    NSArray *_maybeLike;
    NSString *_openUrl;
}

@property(retain, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(retain, nonatomic) NSArray *maybeLike; // @synthesize maybeLike=_maybeLike;
@property(retain, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

