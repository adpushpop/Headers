//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/AvatarServiceDelegate-Protocol.h>
#import <QQMainProject/DBAsyncCallbackProtocol-Protocol.h>
#import <QQMainProject/EditMemberCardProtocal-Protocol.h>
#import <QQMainProject/GetTroopMemberProtocol-Protocol.h>
#import <QQMainProject/GetTroopRemarkProtocol-Protocol.h>
#import <QQMainProject/QQGroupMemberCardDelegate-Protocol.h>
#import <QQMainProject/QQShareResultAlertViewDeleagte-Protocol.h>
#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, QQFriendSelectedViewController, QQGroupMemberCardModel, QQGroupMemberSchoolCardModel, QQGroupSettingModel, QQTroopRemarkModel, UIButton, UILabel, UITableView, UIViewController;

@interface QQGroupMemberCardMoreVC : QQViewController <EditMemberCardProtocal, DBAsyncCallbackProtocol, AvatarServiceDelegate, UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, QUIActionSheetDelegate, QQShareResultAlertViewDeleagte, QQGroupMemberCardDelegate, GetTroopMemberProtocol, GetTroopRemarkProtocol>
{
    UITableView *_tableview;
    UIButton *_delFriendBt;
    UILabel *_reportItLabel;
    NSMutableArray *_itemArray;
    NSMutableArray *_sectionArray;
    NSDictionary *_schoolIndentifyDic;
    NSString *_groupMemberUin;
    NSString *_groupUin;
    NSString *_groupUinCode;
    QQGroupSettingModel *_groupSettingModel;
    QQTroopRemarkModel *_remarkModel;
    QQGroupMemberCardModel *_memberCardModel;
    QQGroupMemberSchoolCardModel *_memberSchoolCard;
    _Bool _isQidianGroup;
    _Bool _ifDelete;
    QQFriendSelectedViewController *_currentFriendSelectVC;
    NSArray *_tableViewData;
    int _fromType;
    NSString *_callBack;
    UIViewController *_fatherVC;
    NSString *_strRemark;
}

@property(copy, nonatomic) NSString *strRemark; // @synthesize strRemark=_strRemark;
@property(nonatomic) UIViewController *fatherVC; // @synthesize fatherVC=_fatherVC;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(copy, nonatomic) NSString *callBack; // @synthesize callBack=_callBack;
@property(copy, nonatomic) NSString *groupUinCode; // @synthesize groupUinCode=_groupUinCode;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (id)getFaceFromCache:(id)arg1;
- (void)onActionQRCode;
- (void)onActionFriendSetting;
- (void)onActionSelfInfo;
- (id)removeSpaceAndNewline:(id)arg1;
- (id)getVersion;
- (void)onActionRecommendFriend;
- (void)blockOtherMsg;
- (void)blockFriendMsg;
- (void)onBlockSomeoneAction:(id)arg1;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (void)modifyGroupMemberCardCallback:(id)arg1;
- (struct CGSize)getTextSize:(id)arg1 Font:(id)arg2 RemainSize:(struct CGSize)arg3 LineBreaking:(long long)arg4;
- (void)GetMemberRemarkNotify:(id)arg1 list:(id)arg2;
- (void)didReceivedMemberCard:(_Bool)arg1 data:(id)arg2;
- (void)ActionGetTroopMember:(id)arg1 result:(_Bool)arg2;
- (void)copySomeInfoFromTroopMemModel:(id)arg1 toGroupCardModel:(id)arg2;
- (void)onTroopInfoUpdated:(id)arg1;
- (_Bool)isGroupOwnerOrAdministrator:(id)arg1;
- (void)setTroopNick;
- (_Bool)isPureInt:(id)arg1;
- (void)didModifySchoolMemberCard:(int)arg1;
- (void)didReceivedSchoolMemberCard:(_Bool)arg1 data:(id)arg2;
- (void)onTransferGroupSuccNotify:(id)arg1;
- (void)actionKickGroupMemberResponse:(id)arg1;
- (void)ActionExitGroupResult:(id)arg1;
- (void)ActionDismissGroupRespond:(id)arg1;
- (void)onQQCancelGroupAdminNotify:(id)arg1;
- (void)onSetGroupAdminNotify:(id)arg1;
- (void)onSetGroupMemberShutupNotification:(id)arg1;
- (void)actionSetGroupMemberShutup:(_Bool)arg1;
- (void)updateSpeakConcernedStatus;
- (void)addGroupDefaultListResult:(id)arg1;
- (void)addGroupDefaultList:(id)arg1 groupCode:(long long)arg2 userInfo:(id)arg3;
- (void)addGroupShieldedListResult:(id)arg1;
- (void)addGroupShieldedList:(id)arg1 groupCode:(long long)arg2 userInfo:(id)arg3;
- (void)addGroupConcernedListResult:(id)arg1;
- (void)addGroupConcernedList:(id)arg1 groupCode:(long long)arg2 userInfo:(id)arg3;
- (void)kickGroupMember:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)_getTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (struct CGSize)sizeForText:(id)arg1 maxWidth:(double)arg2;
- (id)cellForMemberInfo:(id)arg1;
- (id)getLabelInFrame:(struct CGRect)arg1 textColor:(id)arg2 Font:(id)arg3 text:(id)arg4 TextAlignment:(long long)arg5 cornerRadius:(double)arg6 BackColor:(id)arg7;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)clickStatisticWithOpName:(id)arg1;
- (_Bool)itemEnterableForIndexPath:(id)arg1;
- (id)itemTitleForIndexPath:(id)arg1;
- (int)itemTypeForIndexPath:(id)arg1;
- (void)layoutFootView;
- (id)getInfoDictWithTitle:(id)arg1 isEnterable:(_Bool)arg2 KeyType:(int)arg3;
- (void)resetTableItems;
- (id)getTableViewItemData:(int)arg1;
- (void)setSectionData:(id)arg1;
- (void)setManagerSwitch:(id)arg1;
- (void)quitGroup;
- (void)removeMember;
- (void)reportItAction;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)executeJSCallbackWithArgument:(id)arg1;
- (id)getTopWebViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)addNotification;
- (void)loadView;
- (void)resetQidianGroupData;
- (void)doInitTableViewData;
- (void)viewDidLoad;
- (id)init;
- (id)initWithJsOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *groupMemberUin; // @dynamic groupMemberUin;
@property(retain, nonatomic) QQGroupSettingModel *groupSettingModel; // @dynamic groupSettingModel;
@property(copy, nonatomic) NSString *groupUin; // @dynamic groupUin;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) QQGroupMemberCardModel *memberCardModel; // @dynamic memberCardModel;
@property(retain, nonatomic) QQGroupMemberSchoolCardModel *memberSchoolCard; // @dynamic memberSchoolCard;
@property(retain, nonatomic) QQTroopRemarkModel *remarkModel; // @dynamic remarkModel;
@property(readonly) Class superclass;

@end
