//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderComponent.h"

@class NSMutableArray;

@interface TBOrderServiceInfoComponent : TBOrderComponent
{
    NSMutableArray *_main;
    NSMutableArray *_mainExt;
}

@property(retain, nonatomic) NSMutableArray *mainExt; // @synthesize mainExt=_mainExt;
@property(retain, nonatomic) NSMutableArray *main; // @synthesize main=_main;
- (void).cxx_destruct;
- (id)serviceWithKey:(id)arg1;
- (id)initWithData:(id)arg1;

@end

