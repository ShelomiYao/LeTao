//
//  QuestionCell.h
//LeTao
//
//  Created by ShelomiYao on 17/1/13.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class questionCellModel;

@interface QuestionCell : UITableViewCell

/** 问题 */
@property (nonatomic,weak) UILabel *questionLabel;

/** 模型 */
@property (nonatomic,strong) questionCellModel *questionModel;

@end

@interface MGModel :NSObject
/** text */
@property (nonatomic,copy) NSString *text;
@end
