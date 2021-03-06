//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIAttachmentBehavior, UIButton, UIDynamicAnimator;
@protocol WBDraggalbeDelegate;

@interface WBDraggalbeView : UIView
{
    _Bool _hideCloseBtn;
    _Bool _moving;
    BOOL _delegateMethod;
    _Bool _isCachePos;
    id <WBDraggalbeDelegate> _delegate;
    UIDynamicAnimator *_animator;
    UIAttachmentBehavior *_attchment;
    UIButton *_closeButton;
    UIButton *_closeResponder;
    struct CGPoint _offset;
    struct CGPoint _cachePos;
    struct CGRect _moveScreenArea;
}

@property(nonatomic) struct CGPoint cachePos; // @synthesize cachePos=_cachePos;
@property(nonatomic) _Bool isCachePos; // @synthesize isCachePos=_isCachePos;
@property(nonatomic) BOOL delegateMethod; // @synthesize delegateMethod=_delegateMethod;
@property(retain, nonatomic) UIButton *closeResponder; // @synthesize closeResponder=_closeResponder;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIAttachmentBehavior *attchment; // @synthesize attchment=_attchment;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool moving; // @synthesize moving=_moving;
@property(nonatomic) struct CGRect moveScreenArea; // @synthesize moveScreenArea=_moveScreenArea;
@property(nonatomic) __weak id <WBDraggalbeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hideCloseBtn; // @synthesize hideCloseBtn=_hideCloseBtn;
- (void).cxx_destruct;
- (void)stopAnimal;
- (void)recover:(id)arg1;
- (void)closeButtonClick:(id)arg1;
- (struct CGPoint)bestAttachPoint:(struct CGPoint)arg1;
- (struct CGPoint)centerPosWithPoint:(struct CGPoint)arg1;
- (void)moveToPos:(struct CGPoint)arg1;
- (void)drag:(id)arg1;
- (struct CGPoint)ptInMoveArea:(struct CGPoint)arg1;
- (struct CGPoint)ptWithPanPoint:(struct CGPoint)arg1;
- (struct CGPoint)panoOffset:(struct CGPoint)arg1;
- (void)didAddSubview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

