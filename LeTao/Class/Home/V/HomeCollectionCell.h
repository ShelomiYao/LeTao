//
//  HomeCollectionCell.h
//LeTao
//
//  Created by ShelomiYao on 17/1/18.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>


@class Activities,HotGoods;

@interface HomeCollectionCell : UICollectionViewCell

/** HotFreshModel */
@property (nonatomic,strong) Activities *Activity;

@property (nonatomic,strong) HotGoods *goodModel;

/** addButtonClick */
@property (nonatomic,copy) void (^addButtonClick)(UIImageView* imageView);

@end
