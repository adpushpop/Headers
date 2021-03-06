//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface HTSNetworkDomainServiceResponseModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_enableRetry;
    NSNumber *_retryTimeout;
    NSNumber *_speedInterval;
    NSNumber *_enableLinkSelect;
    NSArray *_unions;
    NSArray *_groups;
    NSArray *_paths;
}

+ (id)pathsJSONTransformer;
+ (id)groupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(readonly, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, nonatomic) NSArray *unions; // @synthesize unions=_unions;
@property(readonly, nonatomic) NSNumber *enableLinkSelect; // @synthesize enableLinkSelect=_enableLinkSelect;
@property(readonly, nonatomic) NSNumber *speedInterval; // @synthesize speedInterval=_speedInterval;
@property(readonly, nonatomic) NSNumber *retryTimeout; // @synthesize retryTimeout=_retryTimeout;
@property(readonly, nonatomic) NSNumber *enableRetry; // @synthesize enableRetry=_enableRetry;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

