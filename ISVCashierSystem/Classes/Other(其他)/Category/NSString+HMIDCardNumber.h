//
//  NSString+HMIDCardNumber.h
//  HMFriendsDemo
//
//  Created by ZhouChunlong on 16/3/4.
//  Copyright © 2016年 HealthMall. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (HMIDCardNumber)

/**
 *  中国馆大陆身份证验证
 */
- (BOOL)validateIdentityCardInChina;

/**
 *  香港身份证验证
 */
- (BOOL)validateIdentityCardInHongKong;

/**
 *  澳门身份证验证
 */
- (BOOL)validateIdentityCardInMacao;

/**
 *  台湾身份证验证
 */
- (BOOL)validateIdentityCardInTaiwan;

@end
