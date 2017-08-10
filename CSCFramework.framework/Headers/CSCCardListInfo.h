//
//  CSCCardListInfo.h
//  CSCVirtualCardSDK
//
//  Created by yinzhihao on 17/5/25.
//  Copyright © 2017年 Andy. All rights reserved.
//

#import "CSCBaseModel.h"

@interface CSCCardListInfo : CSCBaseModel

@property (nonatomic, copy) NSString *brandName; //机构名
@property (nonatomic, copy) NSString *cardId; //卡号
@property (nonatomic, copy) NSString *background; //背景颜色
@property (nonatomic, copy) NSString *cardImg; //卡样图片
@property (nonatomic, copy) NSString *brhName; //品牌名
@property (nonatomic, copy) NSString *tel; //联系电话


@end
