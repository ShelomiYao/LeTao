//
//  Aditem.h
//LeTao
//
//  Created by ShelomiYao on 17/1/19.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Aditem : NSObject

/** 图片URL */
@property (nonatomic,copy) NSString *w_picurl;
/** 点击图片的回调网址 */
@property (nonatomic,copy) NSString *ori_curl;
/** 宽 */
@property (nonatomic, assign) NSInteger w;
/** 高 */
@property (nonatomic, assign) NSInteger h;

@end
