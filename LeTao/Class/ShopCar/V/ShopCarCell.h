//
//  ShopCarCell.h
//LeTao
//
//  Created by ShelomiYao on 17/2/10.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HotGoods;
@interface ShopCarCell : UITableViewCell

/**
 *  模型
 */
@property (nonatomic,strong) HotGoods *goods;

+ (instancetype)shopCarCellWithTableView:(UITableView *)tableView;

@end
