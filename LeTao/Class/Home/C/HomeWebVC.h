//
//  HomeWebVC.h
//LeTao
//
//  Created by ShelomiYao on 17/1/17.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HeadData;
@interface HomeWebVC : UIViewController

- (instancetype)initWithNavigationTitle:(NSString *)navTitle withUrlStr:(NSString *)urlStr;

/** urlStr */
@property (nonatomic,copy) NSString *urlStr;
/** navTitle */
@property (nonatomic,copy) NSString *navTitle;

@end
