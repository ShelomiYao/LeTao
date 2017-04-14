//
//  OrderCell.h
//LeTao
//
//  Created by ShelomiYao on 17/1/12.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Order;

static NSString * const KOrderCellIdentifier = @"KOrderCellIdentifier";

@interface OrderCell : UITableViewCell

/** 模型 */
@property (nonatomic,strong) Order * orderModel;

+ (instancetype)OrderCellWithTableView:(UITableView *)tableView withImages:(NSArray *)images;

@end
