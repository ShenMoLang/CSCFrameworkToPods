//
//  CSCUtils.h
//  CSCVirtualCardSDK
//
//  Created by yinzhihao on 17/6/13.
//  Copyright © 2017年 Andy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//#import "CSCMQTTService.h"

@interface CSCUtils : NSObject

+ (instancetype)sharedInstance;

//解析商户二维码
+ (NSString *)parseMerchantQRCode:(NSString *)qrcode;
//异或
+ (NSData *)xor:(NSData *)data;

//图片转字符串
+ (NSString *)UIImageToBase64Str:(UIImage *)image;
//字符串转图片
+ (UIImage *)Base64StrToUIImage:(NSString *)_encodedImageStr;

//产生验卡信息
+ (NSString *)createCheckCardInfo:(NSString *)money cardId:(NSString *)cardId;

// 字典转json字符串方法
+ (NSString *)convertToJsonData:(id)param;
+ (NSString *)SHA256:(NSData *)data;
+ (NSString *)SHA256OfString:(NSString *)str;
+ (NSData *)SHA256_2:(NSString *)str;

/*!
 * @brief 把格式化的JSON格式的字符串转换成字典
 
 * @param jsonString JSON格式的字符串
 
 * @return 返回字典
 
 */

//json格式字符串转字典：
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;

#pragma mark - MQTT
+ (void)addObserver;
+ (void)removeObserver;
//付款成功
+ (void)consumeResult:(NSNotification *)notification;
//消费授权
+ (void)consumeAuth:(NSNotification *)notification;
//消费等待
+ (void)consumeWait:(NSNotification *)notification;
//退货
+ (void)consumeRefund:(NSNotification *)notification;
//广播消息
//+ (void)publicMessage:(NSNotification *)notification type:(CSCMqttMessageType)type;

@end
