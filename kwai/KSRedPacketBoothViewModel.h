//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSRedPacketCountDownViewModel.h"

@class KSPopoverURL;

@interface KSRedPacketBoothViewModel : KSRedPacketCountDownViewModel
{
    _Bool _opened;
    id _redPackGrabedObserver;
}

@property(retain, nonatomic) id redPackGrabedObserver; // @synthesize redPackGrabedObserver=_redPackGrabedObserver;
@property(nonatomic) _Bool opened; // @synthesize opened=_opened;
- (void).cxx_destruct;
@property(readonly, nonatomic) KSPopoverURL *destURL;
- (void)dealloc;
- (id)initWithRedPacket:(id)arg1 states:(id)arg2 currentUser:(id)arg3;

@end

