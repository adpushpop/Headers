//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WeiboCubePhotoViewerUserInterfaceOptions-Protocol.h"

@class NSString;

@interface WBPhotoViewerUserInterfaceOptions : NSObject <WeiboCubePhotoViewerUserInterfaceOptions>
{
    _Bool saveButtonHidden;
    _Bool commentButtonHidden;
    _Bool dismissButtonHidden;
    _Bool writeCommentButtonHidden;
    _Bool photoIndexHidden;
    _Bool textContentHidden;
    _Bool originalButtonHidden;
}

@property(nonatomic) _Bool originalButtonHidden; // @synthesize originalButtonHidden;
@property(nonatomic) _Bool textContentHidden; // @synthesize textContentHidden;
@property(nonatomic) _Bool photoIndexHidden; // @synthesize photoIndexHidden;
@property(nonatomic) _Bool writeCommentButtonHidden; // @synthesize writeCommentButtonHidden;
@property(nonatomic) _Bool dismissButtonHidden; // @synthesize dismissButtonHidden;
@property(nonatomic) _Bool commentButtonHidden; // @synthesize commentButtonHidden;
@property(nonatomic) _Bool saveButtonHidden; // @synthesize saveButtonHidden;
- (void)setDefaultOptionsForPhotoSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

