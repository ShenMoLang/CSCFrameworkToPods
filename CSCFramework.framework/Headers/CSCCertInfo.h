//
//  CSCCertInfo.h
//  CSCVirtualCardSDK
//
//  Created by yinzhihao on 17/6/19.
//  Copyright © 2017年 Andy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CSCCertInfo : NSObject
/*
@property (nonatomic, copy) NSString *validityPeriod; //证件有效期
@property (nonatomic, copy) NSString *photo; //证件照片
@property (nonatomic, copy) NSString *licenseName; //证照名称
@property (nonatomic, copy) NSString *licenseType; //证照类型
@property (nonatomic, copy) NSString *licenseDescrip; //证照描述
@property (nonatomic, copy) NSString *templateNumber; //模板编号
@property (nonatomic, copy) NSString *templateInfo; //模板信息


@property (nonatomic, copy) NSString *brhId; //发卡机构号
@property (nonatomic, copy) NSString *userCertAddress; //证件人地址
@property (nonatomic, copy) NSString *certStartDate; //证件有效开始日期
@property (nonatomic, copy) NSString *certEndDate; //证件有效结束日期
@property (nonatomic, copy) NSString *vcardId; //虚拟卡号
*/

@property (nonatomic, copy) NSString *electronIdFile;//电子证件照片URL
@property (nonatomic, copy) NSString *brhId;//发卡机构号
@property (nonatomic, copy) NSString *userCertName;//证件人名称
@property (nonatomic, copy) NSString *userCertAddress;//证件人地址
@property (nonatomic, copy) NSString *certStartDate;//证件有效开始日期
@property (nonatomic, copy) NSString *certEndDate;//证件有效结束日期
@property (nonatomic, copy) NSString *certType;//证照类型 0身份证 1军人证 2港澳 3.护照
@property (nonatomic, copy) NSString *certNo;//证件号码
@property (nonatomic, copy) NSString *templateData;//模板数据
@property (nonatomic, copy) NSString *templateType;//模板类型

//add
@property (nonatomic, copy) NSString *vcardId; //虚拟卡号

+ (instancetype)modelWithDictionary:(NSDictionary *)dict;

@end
