//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NewFriendsNotifyListBaseCell.h>

@class NSMutableArray, QQUnReadCountAnimationView, UIImageView, UILabel;

@interface NewFriendAllContactCell : NewFriendsNotifyListBaseCell
{
    UILabel *_descContactLabel;
    NSMutableArray *_contactsArray;
    UIImageView *_arrowImageView;
    QQUnReadCountAnimationView *_redTagView;
}

@property(retain, nonatomic) QQUnReadCountAnimationView *redTagView; // @synthesize redTagView=_redTagView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) NSMutableArray *contactsArray; // @synthesize contactsArray=_contactsArray;
@property(retain, nonatomic) UILabel *descContactLabel; // @synthesize descContactLabel=_descContactLabel;
- (void).cxx_destruct;
- (int)getFriVerifyStatus:(id)arg1;
- (void)configCellWithModel:(id)arg1;

@end
