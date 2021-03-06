//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface TBErrorInfo : QQModel
{
    unsigned int _errorCode;
    NSString *_errorDesc;
}

+ (id)createErrorInfo:(unsigned int)arg1 withDesc:(id)arg2;
@property(retain, nonatomic) NSString *errorDesc; // @synthesize errorDesc=_errorDesc;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
- (_Bool)isLimitError;
- (_Bool)isNoChangeData;
- (_Bool)isIncompleteData;
- (_Bool)isNormalData;
- (void)dealloc;

@end

