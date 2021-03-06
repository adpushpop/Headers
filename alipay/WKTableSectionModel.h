//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WKTableSectionModel : NSObject
{
    NSString *_sectionIdentifier;
    NSString *_headerTemplateId;
    NSObject *_headerData;
    NSArray *_cellModelArray;
    NSString *_footerTemplateId;
    NSObject *_footerData;
}

@property(retain, nonatomic) NSObject *footerData; // @synthesize footerData=_footerData;
@property(retain, nonatomic) NSString *footerTemplateId; // @synthesize footerTemplateId=_footerTemplateId;
@property(retain, nonatomic) NSArray *cellModelArray; // @synthesize cellModelArray=_cellModelArray;
@property(retain, nonatomic) NSObject *headerData; // @synthesize headerData=_headerData;
@property(retain, nonatomic) NSString *headerTemplateId; // @synthesize headerTemplateId=_headerTemplateId;
@property(copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
- (void).cxx_destruct;

@end

