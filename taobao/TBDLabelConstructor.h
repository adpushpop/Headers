//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBDViewAdvancedConstructor.h"

@interface TBDLabelConstructor : TBDViewAdvancedConstructor
{
}

+ (long long)lineBreakMode:(id)arg1;
+ (id)textColor:(id)arg1;
+ (long long)maxLines:(id)arg1;
+ (long long)textAlignment:(id)arg1;
+ (id)fontWithTextSize:(id)arg1 textStyle:(id)arg2;
+ (struct CGSize)labelSizeForFont:(id)arg1 text:(id)arg2 maxLines:(long long)arg3 maxWidth:(double)arg4;
- (void)view:(id)arg1 dStrikeThroughStyle:(id)arg2 dText:(id)arg3;
- (void)view:(id)arg1 dText:(id)arg2 dMaxWidth:(id)arg3 dWidth:(id)arg4 dHeight:(id)arg5;
- (void)view:(id)arg1 dLineBreakMode:(id)arg2;
- (void)view:(id)arg1 dTextColor:(id)arg2;
- (void)view:(id)arg1 dMaxLines:(id)arg2;
- (void)view:(id)arg1 dTextAlignment:(id)arg2 dTextGravity:(id)arg3;
- (void)view:(id)arg1 dTextSize:(id)arg2 dTextStyle:(id)arg3 dTextTheme:(id)arg4;
- (struct CGSize)viewSizeForDWidth:(id)arg1 dHeight:(id)arg2 dMaxWidth:(id)arg3 dMaxLines:(id)arg4 dText:(id)arg5 dTextSize:(id)arg6 dTextStyle:(id)arg7 dTextTheme:(id)arg8;
- (id)initializeView;

@end

