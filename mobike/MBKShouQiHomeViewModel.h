//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKLimoOperationConfig, RACSignal;

@interface MBKShouQiHomeViewModel : NSObject
{
    MBKLimoOperationConfig *_operationConfig;
    RACSignal *_operationConfigUpdatedSignal;
}

@property(retain, nonatomic) RACSignal *operationConfigUpdatedSignal; // @synthesize operationConfigUpdatedSignal=_operationConfigUpdatedSignal;
@property(retain, nonatomic) MBKLimoOperationConfig *operationConfig; // @synthesize operationConfig=_operationConfig;
- (void).cxx_destruct;
- (id)banner;
- (void)updateLimoOperationConfig;
- (id)init;

@end
