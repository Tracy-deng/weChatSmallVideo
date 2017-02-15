//
//  KZVideoPlayer.h
//  KZWeChatSmallVideo_OC
//
//  Created by tracy-deng on 16/7/21.
//  Copyright © 2016年 tracy-deng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KZVideoPlayer : UIView

- (instancetype)initWithFrame:(CGRect)frame videoUrl:(NSURL *)videoUrl;

@property (nonatomic, strong, readonly) NSURL *videoUrl;

@property (nonatomic,assign) BOOL autoReplay; // 默认 YES

- (void)play;

- (void)stop;

@end
