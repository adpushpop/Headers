//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface CA_NetworkRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *apiPath; // @dynamic apiPath;
@property(copy, nonatomic) NSString *communicationType; // @dynamic communicationType;
@property(copy, nonatomic) NSString *eCol; // @dynamic eCol;
@property(copy, nonatomic) NSString *eLine; // @dynamic eLine;
@property(copy, nonatomic) NSString *eMsg; // @dynamic eMsg;
@property(copy, nonatomic) NSString *eStack; // @dynamic eStack;
@property(copy, nonatomic) NSString *eURL; // @dynamic eURL;
@property(nonatomic) int latencyMs; // @dynamic latencyMs;
@property(copy, nonatomic) NSString *mqttIsEnabled; // @dynamic mqttIsEnabled;
@property(copy, nonatomic) NSString *msg; // @dynamic msg;
@property(copy, nonatomic) NSString *networkURL; // @dynamic networkURL;
@property(copy, nonatomic) NSString *requestid; // @dynamic requestid;
@property(copy, nonatomic) NSString *statuscode; // @dynamic statuscode;
@property(nonatomic) long long tDmrd; // @dynamic tDmrd;
@property(nonatomic) long long tDns; // @dynamic tDns;
@property(nonatomic) long long tFb; // @dynamic tFb;
@property(nonatomic) long long tPgrd; // @dynamic tPgrd;
@property(nonatomic) long long tPsdm; // @dynamic tPsdm;
@property(nonatomic) long long tRq; // @dynamic tRq;
@property(nonatomic) long long tTcp; // @dynamic tTcp;
@property(copy, nonatomic) NSString *transportType; // @dynamic transportType;
@property(copy, nonatomic) NSString *userAgent; // @dynamic userAgent;
@property(copy, nonatomic) NSString *vendorid; // @dynamic vendorid;
@property(copy, nonatomic) NSString *vendorname; // @dynamic vendorname;

@end

