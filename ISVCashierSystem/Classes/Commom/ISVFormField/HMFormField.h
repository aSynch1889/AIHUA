//
//  HMIndicatorField.h
//  HealthMall
//
//  Created by jkl on 15/12/12.
//  Copyright © 2015年 HealthMall. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HMFormField : UITextField

@property (nonatomic, copy) void (^tapBlock)();

/**
 * `带跳转箭头指示器的textField`
 * 默认Height是30
 */
+ (instancetype)indicatorFieldWithPoint:(CGPoint)point tapBlock:(void (^)())block;

/**
 * `不带跳转箭头指示器的textField`
 * 默认Height是30
 */
+ (instancetype)normalFieldWithPoint:(CGPoint)point;

@end
