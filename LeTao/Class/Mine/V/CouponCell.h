//
//  CouponCell.h
//LeTao
//
//  Created by ShelomiYao on 17/1/16.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Coupon;

@interface CouponCell : UITableViewCell

/** 模型 */
@property (nonatomic,strong) Coupon *couponModel;

+ (instancetype)couponCellWithTableView:(UITableView *)tableView;

@end
