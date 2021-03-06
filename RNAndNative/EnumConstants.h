//
//  EnumConstants.h
//  RNAndNative
//
//  Created by wuyongchao on 2018/4/26.
//  Copyright © 2018年 杭州拼便宜网络科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTLog.h>
typedef NS_ENUM(NSInteger, UIStatusBarAnimat) {
    UIStatusBarAnimatNone,
    UIStatusBarAnimatFade,
    UIStatusBarAnimatSlide,
};

@interface EnumConstants : NSObject<RCTBridgeModule>

@end
