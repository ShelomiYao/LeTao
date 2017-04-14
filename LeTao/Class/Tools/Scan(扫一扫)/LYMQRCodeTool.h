//
//  LYMQRCodeTool.h
//LeTao
//
//  Created by ShelomiYao on 17/1/19.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LYMQRCodeTool : NSObject
/**
 *  请输入二维码包含的网址 ，以及二维码的颜色
 */
+ (UIImage *)creatQRCodeWithText:(NSString *)text withR:(CGFloat)R G:(CGFloat)g B:(CGFloat)b;

@end
