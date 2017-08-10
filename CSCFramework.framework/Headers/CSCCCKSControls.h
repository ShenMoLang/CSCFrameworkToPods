//
//  CSCCCKSControls.h
//  CSCVirtualCardSDK
//
//  Created by yinzhihao on 17/5/27.
//  Copyright © 2017年 Andy. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 @brief ios ckeys安全控件接口，待完成异常返回错误信息或其他方式返回错误信息NSError
 */
@interface CSCCCKSControls : NSObject

/**
 @brief 获取单例对象
 @return instancetype
 */
+ (instancetype)sharedInstance;


/**
 @brief 获取安全id
 @return id
 */
- (NSString *)getCurrentId;

/**
 @brief 加密
 @param plainStr 明文，必须UTF-8编码
 @return 密文
 */
- (NSData *)encryptData:(NSString *)plainStr;

/**
 @brief 加密
 @param plainStr 明文，必须UTF-8编码
 @param cpkId 安全id
 @return 密文
 */
- (NSData *)encryptData:(NSString *)plainStr cpkId:(NSString *)cpkId;



/**
 @brief 解密
 @param encryptData  加密的数据
 @return 解密数据
 */
- (NSString *)decodeData:(NSData *)encryptData;


/**
 @brief 给数据签名
 @param plainStr 待签名数据
 @return 返回签名后的数据，nil表示签名失败
 */
- (NSString *)signData:(NSString *)plainStr;


/**
 @brief 验证签名
 @param plainStr 明文
 @param signStr 签名数据
 @param cpkId 安全id
 @return 状态，非0表示失败
 */
- (BOOL)validSign:(NSString *)plainStr signStr:(NSString *)signStr cpkId:(NSString *)cpkId;



@end
