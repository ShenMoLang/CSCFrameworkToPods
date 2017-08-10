//
//  CSCSDKUser.h
//  TestBJTDemo
//
//  Created by yinzhihao on 17/7/5.
//  Copyright © 2017年 zcsmart. All rights reserved.
//

#import "CSCBaseService.h"
@class CSCSDKUser, CSCUser, CSCUserInfo;

@interface CSCSDKUser : CSCBaseService

/**
 @brief 用户注册
 @param externalUserId  外部用户号
 @param userInfo        用户信息 (姓名 证件类型 证件号码 移动电话 (四个信息为必填项))
 @param block           结果
 */
- (void)userRegister:(NSString *)externalUserId userInfo:(CSCUserInfo *)userInfo block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCSDKUser* sdkUser))block;

/**
 @brief 用户初始化
 @param externalUserId  外部用户号
 @param block   结果
 */
- (void)userInit:(NSString *)externalUserId block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCUser* user))block;

/**
 @brief 用户新设备登录
 @param smsCode 短信验证码
 @param block   结果
 */
- (void)changeDevice:(NSString *)smsCode block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCSDKUser* sdkUser))block;

/**
 @brief 用户信息更新
 @param userInfo 用户信息
 @param block   结果
 */
- (void)updateUserInfo:(CSCUserInfo *)userInfo block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCSDKUser* sdkUser))block;

/**
 @brief 释放资源，释放后CSCSDKUser对象不能再使用。
 */
- (void)close;


@end
