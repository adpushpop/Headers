//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GMSStreetViewLinkData : NSObject
{
    float _yawPosition;
    int _roadColor;
    NSString *_panoramaID;
    NSString *_linkText;
}

@property(readonly, nonatomic) int roadColor; // @synthesize roadColor=_roadColor;
@property(readonly, nonatomic) float yawPosition; // @synthesize yawPosition=_yawPosition;
@property(readonly, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(readonly, nonatomic) NSString *panoramaID; // @synthesize panoramaID=_panoramaID;
- (void).cxx_destruct;
- (id)initWithProto:(id)arg1;
- (id)init;

@end
