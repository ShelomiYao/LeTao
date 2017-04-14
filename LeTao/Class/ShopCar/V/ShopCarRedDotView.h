//
//  ShopCarRedDotView.h
//LeTao
//
//  Created by ShelomiYao on 17/2/10.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Single.h"

@interface ShopCarRedDotView : UIView

interfaceSingle(ShopCarRedDotView);
/**
 *  商品个数
 */
@property (nonatomic, assign) int buyNumber;


/**
 *  添加商品
 *
 *  @param animation 动画
 */
- (void)addProductToRedDotView:(BOOL)animation;


/**
 *  移除商品
 *
 *  @param animation 动画
 */
- (void)reduceProductToRedDotView:(BOOL)animation;

@end
