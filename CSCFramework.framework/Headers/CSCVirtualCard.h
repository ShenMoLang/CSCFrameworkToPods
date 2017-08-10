//
//  CSCVirtualCard.h
//  TestBJTDemo
//
//  Created by yinzhihao on 17/7/5.
//  Copyright © 2017年 zcsmart. All rights reserved.
//

#import "CSCBaseService.h"
@class CSCMerInfo, CSCQrCodeResult, CSCMacResult;

@interface CSCVirtualCard : CSCBaseService

#pragma mark - 用户扫商户二维码支付
/**
 @brief VC-04二维码支付（用户扫商户码）
 @param money  交易金额(单位：分)
 @param cardId  卡号
 @param merId  商户号
 @param account  对应支付账户
 @param amount  对应支付金额(单位：分)
 @param block   结果
 */
//- (void)merCodePay:(NSString *)money cardId:(NSString *)cardId merId:(NSString *)merId account:(NSString *)account amount:(NSString *)amount block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, NSDictionary* message))block;

/**
 @brief 获取商户信息（用户扫商户码）
 @param QRcode  二维码串
 @param cardId  卡号
 @param block   结果
 */
- (void)decodeMerQrCode:(NSString *)QRcode cardId:(NSString *)cardId block: (void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCMerInfo* merInfo))block;

/**
 @brief 二维码支付初始化（用户扫商户码）
 @param cardId  卡号
 @param money   金额(单位：分)
 @param block   结果（验卡信息）
 */
- (void)merCodePayInit:(NSString *)cardId money:(NSString *)money block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCMacResult* result))block;


#pragma mark - 商户扫描个人二维码支付
/**
 @brief VC-05二维码支付（商户扫用户码）
 @param orderId 订单号
 @param money   金额(单位：分)
 @param cardId  卡号
 @param merId   商户号
 @param account 对应支付账户
 @param amount  对应支付金额(单位：分)
 @param block   结果
 */
//- (void)qrCodePay:(NSString *)orderId money:(NSString *)money cardId:(NSString *)cardId merId:(NSString *)merId account:(NSDictionary *)account amount:(NSString *)amount block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, NSDictionary* message))block;

/**
 @brief 申请二维码串（商户扫用户码）
 @param cardId  卡号
 @param block   结果
 */
- (void)qrCodePayInit:(NSString *)cardId block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCQrCodeResult* result))block;

/**
 @brief 碰卡付初始化 (NFC功能，iOS暂时不用)
 @param cardId  卡号
 @param block   结果
 */
//- (void)touchPayInit:(NSString *)cardId block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCMacResult* result))block;


#pragma mark - 充值
/**
 @brief VC-07联机充值
 @param cardId  卡号
 @param prdtId  产品号
 @param money   金额
 @param block   结果
 */
//- (void)recharge:(NSString *)cardId prdtId:(NSString *)prdtId money:(NSString *)money bankOrdNo:(NSString *)bankOrdNo block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, NSDictionary* message))block;

/**
 @brief 联机充值初始化
 @param cardId  卡号
 @param money   金额(单位：分)
 @param block   结果（验卡信息）
 */
- (void)rechargeInit:(NSString *)cardId money:(NSString *)money block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCMacResult* result))block;


#pragma mark - 退货
/**
 @brief VC-08退货
 @param cardId  卡号
 @param prdtId  产品号
 @param money   金额(单位：分)
 @param bankOrdNo   银行订单号（北京通一个唯一的流水号，例：银行流水）
 @param block   结果
 */
//- (void)refund:(NSString *)cardId prdtId:(NSString *)prdtId money:(NSString *)money block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, NSDictionary* message))block;


/**
 @brief 退货初始化
 @param orderId 订单号
 @param cardId  卡号
 @param block   结果
 */
- (void)refundInit:(NSString *)orderId cardId:(NSString *)cardId money:(NSString *)money block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCQrCodeResult* result))block;

/**
 @brief 释放虚拟卡
 */
- (void)close;

@end
