//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMapKitAnnotationView.h"

@class EWImageView, UIImageView;
@protocol EWAnnotationViewProtocal;

@interface EWServiceMapAnnotationView : APMapKitAnnotationView
{
    _Bool _active;
    id <EWAnnotationViewProtocal> _dataSource;
    EWImageView *_avatarImageView;
    UIImageView *_bgImageView;
}

@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) EWImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) id <EWAnnotationViewProtocal> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateAvatar;
- (void)updateAnnotation:(id)arg1;
- (void)prepareForReuse;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end
