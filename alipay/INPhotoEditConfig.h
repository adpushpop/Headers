//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol INPhotoEditDelegate;

@interface INPhotoEditConfig : NSObject
{
    NSString *_cacheDirPath;
    long long _supportEditItem;
    unsigned long long _outputImageMaxPixel;
    id <INPhotoEditDelegate> _delegate;
    NSString *_photoEditItemTextStr;
    NSString *_photoEditItemCancelStr;
}

@property(copy, nonatomic) NSString *photoEditItemCancelStr; // @synthesize photoEditItemCancelStr=_photoEditItemCancelStr;
@property(copy, nonatomic) NSString *photoEditItemTextStr; // @synthesize photoEditItemTextStr=_photoEditItemTextStr;
@property(nonatomic) __weak id <INPhotoEditDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long outputImageMaxPixel; // @synthesize outputImageMaxPixel=_outputImageMaxPixel;
@property(nonatomic) long long supportEditItem; // @synthesize supportEditItem=_supportEditItem;
@property(copy, nonatomic) NSString *cacheDirPath; // @synthesize cacheDirPath=_cacheDirPath;
- (void).cxx_destruct;

@end

