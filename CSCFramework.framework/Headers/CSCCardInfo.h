//
//  CSCCardInfo.h
//  Farmwork
//
//  Created by yinzhihao on 17/5/24.
//  Copyright © 2017年 Andy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CSCCardInfo : NSObject
/*
@property (nonatomic, copy) NSString *prdtId; //产品号
@property (nonatomic, copy) NSString *aid; //aid
@property (nonatomic, copy) NSString *prdtTitle; //产品名称
@property (nonatomic, copy) NSString *blance; //金额
@property (nonatomic, copy) NSString *startDt; //预留字段
@property (nonatomic, copy) NSString *endDt; //预留字段
@property (nonatomic, copy) NSString *brhId; //机构id
@property (nonatomic, copy) NSString *sttlUnit; //单位
@property (nonatomic, copy) NSString *flag; //是否脱机
@property (nonatomic, copy) NSString *isAvailable; //是否可充值
@property (nonatomic, copy) NSString *isWithdrawals; //是否可提现
*/
@property (nonatomic, copy) NSString *vcardId;//卡号
@property (nonatomic, copy) NSString *vcardName;//卡名称
@property (nonatomic, copy) NSString *brhId;//发卡机构号id
@property (nonatomic, copy) NSString *brandId;//品牌id
@property (nonatomic, copy) NSString *brandName;//品牌名称
@property (nonatomic, copy) NSString *vcardType;//虚拟卡类型
@property (nonatomic, copy) NSString *brhName;//发卡机构名称

@property (nonatomic, copy) NSString *prdtTitle;//产品名称
@property (nonatomic, copy) NSString *prdtNo;//产品编号
@property (nonatomic, copy) NSString *aid;//aid
@property (nonatomic, copy) NSString *stdType;//标准规范
@property (nonatomic, copy) NSString *flag;//钱包标识
@property (nonatomic, copy) NSString *balance;//余额
@property (nonatomic, copy) NSString *recharge;//是否可充值
@property (nonatomic, copy) NSString *cash;//是否可提现

+ (instancetype)modelWithDictionary:(NSDictionary *)dict;

@end
