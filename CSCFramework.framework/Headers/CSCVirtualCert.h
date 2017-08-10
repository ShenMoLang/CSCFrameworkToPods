//
//  CSCVirtualCert.h
//  TestBJTDemo
//
//  Created by yinzhihao on 17/7/5.
//  Copyright © 2017年 zcsmart. All rights reserved.
//

#import "CSCBaseService.h"
@class CSCTouchCardResult, CSCQrCodeResult;

@interface CSCVirtualCert : CSCBaseService

/**
 @brief CER-03 电子证件虚拟卡验证-近场验证
 @param certId  证件号
 @param block   结果
 */
- (void)touchVerifyCode:(NSString *)certId block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCTouchCardResult* result))block;

/**
 @brief CER-03 电子证件虚拟卡验证-扫码验证
 @param certId  证件号
 @param block   结果
 */
- (void)qrCodeVerifyCode:(NSString *)certId block: (void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCQrCodeResult* result))block;

/**
 @brief 释放电子证件虚拟卡
 */
- (void)close;

@end
