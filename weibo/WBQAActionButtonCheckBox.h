//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBQAActionButtonCheckBox : WBModelObject
{
    NSString *_desc;
    unsigned long long _defaultValue;
    unsigned long long _currentValue;
    NSString *_key;
}

@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) unsigned long long defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (_Bool)updateWithDictionary:(id)arg1;

@end

