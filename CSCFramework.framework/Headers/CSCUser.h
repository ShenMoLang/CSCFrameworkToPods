//
//  CSCUser.h
//  TestBJTDemo
//
//  Created by yinzhihao on 17/7/5.
//  Copyright © 2017年 zcsmart. All rights reserved.
//

#import "CSCBaseService.h"
@class CSCApplyCardResult, CSCVirtualCard, CSCApplyCardResult, CSCVirtualCert, CSCCardInfo, CSCCertInfo, CSCPayInfo, CSCOrderInfo;

@interface CSCUser : CSCBaseService

#pragma mark - VC
/**
 @brief VC-01申请虚拟卡
 @param brandId   发卡机构号
 @param prdtId  卡品牌号
 @param block   结果
 */
- (void)applyCard:(NSString *)brandId prdtId:(NSString *)prdtId block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCApplyCardResult* result))block;

/**
 @brief VC-02加载虚拟卡
 @param cardId  卡号
 @param block   结果
 */
- (void)loadCard:(NSString *)cardId block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCVirtualCard* virtualCard))block;

/**
 @brief VC-03找回虚拟卡（调用VC-02加载虚拟卡）
 @param cardId  卡号
 @param block   结果
 */
- (void)getBackCard:(NSString *)cardId block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCApplyCardResult* result))block;

#pragma mark - CERT
/**
 @brief CER-01 申请电子证件虚拟卡
 @param certInfo  证件信息
 @param block   结果
 */
- (void)applyElectronicId:(CSCCertInfo *)certInfo block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCApplyCardResult* result))block;

/**
 @brief CER-02 找回电子证件虚拟卡
 @param certId  电子证件的虚拟卡号
 @param block   结果
 */
- (void)getBackElectronicId:(NSString *)certId block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCApplyCardResult* result))block;

/**
 @brief 电子证件虚拟卡加载
 @param certId  电子证件的虚拟卡号
 @param block   结果
 */
- (void)loadCert:(NSString *)certId block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCVirtualCert* virtualCert))block;

#pragma mark - Q
/**
 @brief Q-01查询卡信息列表
 @param block   结果
 */
- (void)queryCardList:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, NSArray<CSCCardInfo *>* cardInfoList))block;

/**
 @brief Q-02查询卡信息
 @param cardId  卡号
 @param block   结果
 */
- (void)queryCardInfo:(NSString *)cardId block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, NSArray<CSCCardInfo *>* cardInfo))block;

/**
 @brief Q-03查询订单信息（通过ID）
 @param externalOrderId 外部订单号
 @param block   结果
 */
- (void)queryOrderInfoById:(NSString *)externalOrderId block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCOrderInfo* orderInfo))block;

/**
 @brief Q-04查询证件信息
 @param idNumber    证件号码
 @param block       结果
 */
- (void)queryCertInfo:(NSString *)idNumber block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCCertInfo* certInfo))block;

/**
 @brief Q-05查询证件列表
 @param block   结果
 */
- (void)queryCertInfoList:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, NSArray<CSCCertInfo *>* certInfoList))block;


/**
 @brief 获取支付信息列表
 @param merId  商户号
 @param cardId  卡号
 @param block   结果
 */
- (void)getPayInfo:(NSString *)merId cardId:(NSString *)cardId block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, NSArray<CSCPayInfo *>* payInfoList))block;

/**
 @brief 释放资源，关闭后CSCUser不能再使用。
 */
- (void)close;

@end
