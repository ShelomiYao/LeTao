//
//  LYMCollectionViewCell.h
//LeTao
//
//  Created by ShelomiYao on 16/07/18.
//  Copyright (c) 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LYMCollectionViewCell : UICollectionViewCell

@property (nonatomic ,strong) UIImage *image;

- (void)setIndexPath:(NSIndexPath *)index withCount:(int)count;

@end
