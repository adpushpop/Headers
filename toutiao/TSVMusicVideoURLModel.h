//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;

@interface TSVMusicVideoURLModel : JSONModel
{
    NSString *_uri;
    NSArray *_urlList;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(copy, nonatomic) NSArray *urlList; // @synthesize urlList=_urlList;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;

@end
