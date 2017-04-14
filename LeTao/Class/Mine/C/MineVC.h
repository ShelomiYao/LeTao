//
//  MineVC.h
//LeTao
//
//  Created by ShelomiYao on 17/1/12.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MineVC : UIViewController

@end

@interface MineCellModel : NSObject
/** MineCell的标题 */
@property (nonatomic,copy) NSString *title;
/** MineCell的图片名称 */
@property (nonatomic,copy) NSString *iconName;

@end
