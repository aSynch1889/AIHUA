//
//  HealthMallConfig.h
//  HealthMall
//
//  Created by qiuwei on 15/10/29.
//  Copyright © 2015年 HealthMall. All rights reserved.
//

/**
 *  健康猫配置文件
 */
#ifndef HealthMallConfig_h
#define HealthMallConfig_h


// 默认城市码
#define kDefaultCityID @"4401"
// 默认公共key
#define kDefaultKey @"eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJ2aXNpdDE0NTIzMjY0MTYxOTQxIiwiaWF0IjoxNDUyMzI2NDQ4LCJqdGkiOnRydWV9.8xuaVUU8kzTrYMIsCKlmr3L0VmNBmzqoCeiM-Q9K7vg"

// ************************ 自定义错误码 begin ************************
#define kErrorCodeCancellLogin @"-11111"// 取消登陆
#define kErrorCodeGetAgain @"8778435"   // 请重新获取
#define kErrorCodeCancellRequert @"0"   // 取消网络请求
#define kErrorCodeNotNetworking @"-404" // 无网络
// ************************ 自定义错误码 end   ************************

// ************************ 自定义信息  begin ************************
#define kErrorMsgCancellLogin @"取消登录"
#define kErrorMsgGetAgain @"请重新获取"
// ************************ 自定义信息  end   ************************

#endif /* HealthMallConfig_h */
