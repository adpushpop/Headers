//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KLAccessPoint : NSObject
{
    unsigned int _port;
    NSString *_host;
}

@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)toDictionary;
- (id)initWithPB:(id)arg1;
- (id)initWithDict:(id)arg1;
- (id)initWithHost:(id)arg1 port:(unsigned int)arg2;

@end

