//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class FMN1LookupFilter, FMNNLookupFilter, GPUImagePicture;

@interface KSImageLookupFilter : GPUImageFilterGroup
{
    GPUImagePicture *_pic;
    FMNNLookupFilter *_lookupFilter;
    FMN1LookupFilter *_lookupN1Filter;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) double intensity;
- (id)initWithImage:(id)arg1 lookupType:(unsigned long long)arg2 dimension:(float)arg3;
- (id)initWithImage:(id)arg1;
- (id)initWithLookupName:(id)arg1 lookupType:(unsigned long long)arg2 dimension:(float)arg3;

@end

