//
//  CSCBaseService.h
//  Farmwork
//
//  Created by yinzhihao on 17/5/20.
//  Copyright © 2017年 Andy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CSCBaseService : NSObject

+ (instancetype)sharedInstance;

+ (NSURLSessionTask *)post:(NSString *)url
                    subUrl:(NSString *)subUrl
                parameters:(NSDictionary *)parameters
                   block:(void (^)(BOOL isSuccessful, NSString* retCode, NSString* retInfo, NSDictionary * message))block;




@end
