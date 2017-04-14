//
//  MessageCell.h
//LeTao
//
//  Created by ShelomiYao on 17/1/14.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MessageModel;

@interface MessageCell : UITableViewCell
/** 模型 */
@property (nonatomic,strong) MessageModel *model;

+ (instancetype)messageCellWitnTableView:(UITableView *)tableView;
@end
