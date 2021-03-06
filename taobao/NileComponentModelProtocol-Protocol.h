//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol NileStatsModelProtocol;

@protocol NileComponentModelProtocol <NSObject>
@property(retain, nonatomic) id <NileStatsModelProtocol> statsModel;
@property(nonatomic) long long childIndex;
@property(copy, nonatomic) NSString *componentDataId;
@property(copy, nonatomic) NSString *componentId;
- (void)configWithData:(NSDictionary *)arg1;
- (_Bool)isValid;

@optional
@property(copy, nonatomic) CDUnknownBlockType createComponentBlock;
- (void)destroy;
- (id)getBindComponentWithSize:(struct CGSize)arg1;
- (void)setComponent:(id)arg1;
@end

