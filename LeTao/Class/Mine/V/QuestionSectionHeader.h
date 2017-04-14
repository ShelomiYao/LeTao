//
//  QuestionSectionHeader.h
//LeTao
//
//  Created by ShelomiYao on 17/1/13.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>
@class questionCellModel;

@interface QuestionSectionHeader : UITableViewHeaderFooterView
/** sectionHeader的点击回调 */
@property (nonatomic,strong) void (^sectionHeaderClickBlock)(BOOL isExpanded);

/** model */
@property (nonatomic,strong) questionCellModel *model;

/** 是否收起 */
//@property (nonatomic, assign) BOOL model;

/** 便利构造方法 */
//+ (instancetype)questionSectionHeaderWithIdentity:(NSString *)identity  sectionHeaderClick:(void (^)(BOOL isExpanded))sectionHeaderClickBlock;

@end
