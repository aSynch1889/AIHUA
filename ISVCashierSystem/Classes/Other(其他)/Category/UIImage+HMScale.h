//
//  UIImage+HMScale.h
//  HealthMall
//
//  Created by qiuwei on 15/11/6.
//  Copyright © 2015年 HealthMall. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (HMScale)

// 按原图比例返回限定大小的图片（未剪切）
- (UIImage *)getScaleImage:(CGSize)size;

// 按原图比例返回限定大小的图片（剪切）
- (UIImage *)getScaleImageClip:(CGSize)size;

// 指定最大宽度，按原图比例返回限定大小的图片（未剪切）
- (UIImage *)imageByScalingToMaxWidth:(CGFloat)maxWidth;

// 按原图比例返回限定大小的图片2（未剪切）
- (UIImage *)imageByScalingAndCroppingWithTargetSize:(CGSize)targetSize;

UIImage *scaleImage(UIImage *image, CGFloat width);

UIImage *scaleImage2(UIImage *image, CGFloat width, CGFloat height);

@end
