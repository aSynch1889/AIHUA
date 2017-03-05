//
//  SoundPlayer.h
//  wordview
//
//  Created by xianjunming on 14-11-7.
//  Copyright (c) 2014年 Gamabao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>



#define DISPOSE_INTERVAL 3

@interface PlaySoundUtil : NSObject
//单利
+(PlaySoundUtil*)sharePlaySoundUtil;


/**
 *	@brief	为播放震动效果初始化
 *
 *	@return	self
 */
-(void)playingVibrate;

/**
 *	@brief	播放系统声音
 *
 *	@return	self
 */
-(void)playingSystemSound:(SystemSoundID)soundId;

/**
 *	@brief	为播放系统音效初始化(无需提供音频文件)
 *
 *	@param resourceName 系统音效名称
 *	@param type 系统音效类型
 *
 *	@return	self
 */
-(void)playingSystemSoundEffectWith:(NSString *)resourceName ofType:(NSString *)type;

/**
 *	@brief	为播放特定的音频文件初始化（需提供音频文件）
 *
 *	@param filename 音频文件名（加在工程中）
 *
 *	@return	self
 */
-(void)playingSoundEffectWith:(NSString *)filename;

-(unsigned long)playingBgSoundEffectWith:(NSString *)filename;

@end
