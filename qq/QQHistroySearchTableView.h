//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@class QQHistorySearchModel, UILongPressGestureRecognizer;
@protocol QQHistroySearchTableViewDelegate;

@interface QQHistroySearchTableView : UITableView
{
    struct CGPoint _longPressPoint;
    UILongPressGestureRecognizer *_longPressGR;
    QQHistorySearchModel *_longPressCellModel;
    id <QQHistroySearchTableViewDelegate> _historyDelegate;
}

@property(nonatomic) id <QQHistroySearchTableViewDelegate> historyDelegate; // @synthesize historyDelegate=_historyDelegate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)handleLongPress:(id)arg1;
- (void)menuControllerWillHide:(id)arg1;
- (void)showMenu;
- (void)LongPressCallBack:(struct CGPoint)arg1;
- (void)copyText:(id)arg1;
- (void)forwardTo:(id)arg1;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)hideCellPopMenu;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)removeGestureRecognizer;
- (void)addGestureRecognizer;

@end
