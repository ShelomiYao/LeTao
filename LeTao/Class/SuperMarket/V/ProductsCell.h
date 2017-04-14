//
//  ProductsCell.h
//LeTao
//
//  Created by ShelomiYao on 17/1/16.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HotGoods;

@interface ProductsCell : UITableViewCell

/** 模型 */
@property (nonatomic,strong) HotGoods *hotGood;

/**
 *  快速创建ProductsCell
 */
+ (instancetype)productsCellWithTableView:(UITableView *)tableView;

@end
