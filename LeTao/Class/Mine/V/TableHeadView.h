//
//  TableHeadView.h
//LeTao
//
//  Created by ShelomiYao on 17/1/12.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableHeadView : UIView

/** 快速创建tableHeadView */
+ (instancetype)tableHeadView;

/** 我的订单按钮的点击回调 */
- (void)tableHeadViewOrderBtnClickBlock:(void (^)())orderBtnClickBlock;

/** 优惠券按钮的点击回调 */
- (void)tableHeadViewCouponBtnClickBlock:(void (^)())couponBtnClickBlock;

/** 我的消息按钮的点击回调 */
- (void)tableHeadViewMessageBtnClickBlock:(void (^)())messageBtnClickBlock;

@end
