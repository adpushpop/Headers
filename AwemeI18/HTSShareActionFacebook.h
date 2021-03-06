//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSDKSharingDelegate-Protocol.h"
#import "HTSShareAction-Protocol.h"

@class NSString;

@interface HTSShareActionFacebook : NSObject <FBSDKSharingDelegate, HTSShareAction>
{
    CDUnknownBlockType _cachedCompletion;
}

+ (void)load;
@property(copy, nonatomic) CDUnknownBlockType cachedCompletion; // @synthesize cachedCompletion=_cachedCompletion;
- (void).cxx_destruct;
- (void)finish:(_Bool)arg1 error:(id)arg2;
- (void)sharerDidCancel:(id)arg1;
- (void)sharer:(id)arg1 didFailWithError:(id)arg2;
- (void)sharer:(id)arg1 didCompleteWithResults:(id)arg2;
- (void)shareWithShareType:(long long)arg1 shareContentModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shareActionAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

