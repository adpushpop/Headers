//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/CIMBaseEngineDelegate-Protocol.h>

@class NSData, NSMutableDictionary, NSString;

@interface QQLbsNearbyGroupEngine : NSObject <CIMBaseEngineDelegate>
{
    NSMutableDictionary *_seqDict;
    NSData *_nearbyGroupListcontextData;
    int _sortType;
    int _filterId;
    NSString *_groupArea;
    int _nLat;
    int _nLon;
    int _nAlt;
    int _xo;
    CDUnknownBlockType _locationBlock;
}

+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType locationBlock; // @synthesize locationBlock=_locationBlock;
- (void)notifyGetGroupInfoListWithLocationFail;
- (void)notifyGetGroupLocationAreaInfoListFail;
- (void)notifyGetNearByGroupFail:(id)arg1;
- (void)getGroupInfoListWithLocation:(id)arg1 Lat:(int)arg2 Lon:(int)arg3 StartIndex:(unsigned int)arg4 Count:(int)arg5 categoryId:(int)arg6;
- (void)RequestGetNearbyGroup:(int)arg1 isTraversing:(BOOL)arg2 context:(id)arg3 sortType:(int)arg4 strGroupArea:(id)arg5 filterId:(int)arg6;
- (_Bool)getNearByGroupList:(id)arg1 sortType:(int)arg2 forceUpdateLocation:(_Bool)arg3 strGroupArea:(id)arg4 filterId:(int)arg5;
- (void)CIMBaseEngine:(id)arg1 didRecievedMsg:(CDStruct_7895f40e)arg2;
- (id)getNearbyGroupCoorectCoordinate:(struct RspGetNearbyGroup *)arg1;
- (id)getNearByGroupRspInfo:(struct RspGetNearbyGroup *)arg1;
- (int)getNearByTopicFromBuffer:(vector_7005f036)arg1 topic:(struct RspBody *)arg2;
- (int)getNearByActivityFromBuffer:(vector_7005f036)arg1 activity:(struct RspBody *)arg2;
- (int)getNearByHotGroupFromBuffer:(vector_7005f036)arg1 HotQunRsp:(struct HotQunMsg *)arg2;
- (id)getNearByGroupListFromeRsp:(struct RspGetNearbyGroup *)arg1;
- (id)getGroupLocationAreaInfoListFromeRsp:(struct RspGetAreaList *)arg1;
- (id)getGroupInfoListWithLocationFromeRsp:(struct RspGetGroupInArea *)arg1;
- (id)getNearbyGroupAreaModelFromWupData:(struct GroupArea *)arg1;
- (id)getNearByCommunityGroupModelFromWupData:(struct XiaoQuInfo *)arg1;
- (id)getNearByColor:(struct Color *)arg1;
- (id)getNearByLabelFromWupData:(struct GroupLabel *)arg1;
- (id)getNearByGroupModelFromWupData:(struct GroupInfo *)arg1;
- (id)init;
- (void)nearbyGroupExtCallback:(id)arg1;
- (_Bool)requestNearbyGroupAmount:(id)arg1;
- (id)wordingForNearbyGroupAmount;
- (long long)nearbyGroupAmountInCache;
- (void)notifyLBSEndUpdateLocation:(id)arg1;
- (void)getCurrentLocationWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *groupArea; // @dynamic groupArea;
@property(readonly) unsigned long long hash;
@property(nonatomic) int nAlt; // @dynamic nAlt;
@property(nonatomic) int nLat; // @dynamic nLat;
@property(nonatomic) int nLon; // @dynamic nLon;
@property(readonly) Class superclass;

@end
