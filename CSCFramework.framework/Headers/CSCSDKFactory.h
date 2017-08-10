//
//  CSCSDKFactory.h
//  CSCVirtualCardSDK
//
//  Created by yinzhihao on 17/5/26.
//  Copyright © 2017年 Andy. All rights reserved.
//

#import "CSCBaseService.h"
@class CSCSDKUser;

@interface CSCSDKFactory : CSCBaseService

/**
 @brief SDK初始化
 @param appId   应用名称
 @param version 版本号
 @param block   结果(isSuccess=接口调用结果，retCode=错误码，retInfo=返回信息，object=对象)
 */
- (void)sdkInit:(NSString *)appId version:(NSString *)version block:(void (^)(BOOL isSuccess, NSString* retCode, NSString* retInfo, CSCSDKUser * sdkUser))block;


@end
