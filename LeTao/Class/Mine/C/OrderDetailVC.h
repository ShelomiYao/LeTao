//
//  OrderDetailVC.h
//LeTao
//
//  Created by ShelomiYao on 17/1/16.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "OrderCellModel.h"

@interface OrderDetailVC : BaseController

/** orderModel模型 */
@property (nonatomic,strong) Order *model;

@end
