//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class NSDictionary, NSString, QZJFeedsSJoinList;

@interface QZJFeedsSEventTag : JceObjectV2 <NSCoding>
{
    NSString *_from;
}

@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(nonatomic, getter=jce_uin, setter=setJce_uin:) unsigned int jcev2_p_0_o_uin; // @dynamic jcev2_p_0_o_uin;
@property(retain, nonatomic, getter=jce_join_list, setter=setJce_join_list:) QZJFeedsSJoinList *jcev2_p_10_o_join_list; // @dynamic jcev2_p_10_o_join_list;
@property(nonatomic, getter=jce_is_default, setter=setJce_is_default:) _Bool jcev2_p_11_o_is_default; // @dynamic jcev2_p_11_o_is_default;
@property(retain, nonatomic, getter=jce_extendinfo, setter=setJce_extendinfo:) NSDictionary *jcev2_p_12_o_extendinfo__b0x9i_M09ONSStringONSString; // @dynamic jcev2_p_12_o_extendinfo__b0x9i_M09ONSStringONSString;
@property(nonatomic, getter=jce_view_count, setter=setJce_view_count:) unsigned int jcev2_p_13_o_view_count; // @dynamic jcev2_p_13_o_view_count;
@property(retain, nonatomic, getter=jce_backgd_picurl, setter=setJce_backgd_picurl:) NSString *jcev2_p_14_o_backgd_picurl; // @dynamic jcev2_p_14_o_backgd_picurl;
@property(nonatomic, getter=jce_update_flag, setter=setJce_update_flag:) _Bool jcev2_p_15_o_update_flag; // @dynamic jcev2_p_15_o_update_flag;
@property(nonatomic, getter=jce_time, setter=setJce_time:) unsigned int jcev2_p_1_o_time; // @dynamic jcev2_p_1_o_time;
@property(retain, nonatomic, getter=jce_id, setter=setJce_id:) NSString *jcev2_p_2_o_id; // @dynamic jcev2_p_2_o_id;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_3_o_title; // @dynamic jcev2_p_3_o_title;
@property(retain, nonatomic, getter=jce_show_txt, setter=setJce_show_txt:) NSString *jcev2_p_4_o_show_txt; // @dynamic jcev2_p_4_o_show_txt;
@property(retain, nonatomic, getter=jce_show_desc, setter=setJce_show_desc:) NSString *jcev2_p_5_o_show_desc; // @dynamic jcev2_p_5_o_show_desc;
@property(retain, nonatomic, getter=jce_pic_url, setter=setJce_pic_url:) NSString *jcev2_p_6_o_pic_url; // @dynamic jcev2_p_6_o_pic_url;
@property(nonatomic, getter=jce_pic_width, setter=setJce_pic_width:) int jcev2_p_7_o_pic_width; // @dynamic jcev2_p_7_o_pic_width;
@property(nonatomic, getter=jce_pic_height, setter=setJce_pic_height:) int jcev2_p_8_o_pic_height; // @dynamic jcev2_p_8_o_pic_height;
@property(retain, nonatomic, getter=jce_count_desc, setter=setJce_count_desc:) NSString *jcev2_p_9_o_count_desc; // @dynamic jcev2_p_9_o_count_desc;

@end

