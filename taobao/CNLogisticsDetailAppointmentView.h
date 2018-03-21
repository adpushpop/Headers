//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNLogisticsDetailCell.h"

@class CNLogisticsDetailAppointmentModel, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView;

@interface CNLogisticsDetailAppointmentView : CNLogisticsDetailCell
{
    UILabel *_serviceName;
    NSLayoutConstraint *_serviceNameRight;
    UILabel *_buttonLabel;
    UIImageView *_iconImageView;
    UIView *_bottomLineView;
    UIButton *_cellButton;
    NSLayoutConstraint *_bottomLineViewHeight;
}

@property(nonatomic) __weak NSLayoutConstraint *bottomLineViewHeight; // @synthesize bottomLineViewHeight=_bottomLineViewHeight;
@property(nonatomic) __weak UIButton *cellButton; // @synthesize cellButton=_cellButton;
@property(nonatomic) __weak UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(nonatomic) __weak NSLayoutConstraint *serviceNameRight; // @synthesize serviceNameRight=_serviceNameRight;
@property(nonatomic) __weak UILabel *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (void)appointmentService:(id)arg1;
- (void)updateModel;
- (void)awakeFromNib;
- (void)initModel;

// Remaining properties
@property(retain, nonatomic) CNLogisticsDetailAppointmentModel *cellModel; // @dynamic cellModel;

@end
