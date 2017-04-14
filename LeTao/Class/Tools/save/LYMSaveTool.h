//
//  LYMSaveTool.h
//LeTao
//
//  Created by ShelomiYao on 15/10/28.
//  Copyright (c) 2014年 ShelomiYao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LYMSaveTool : NSObject

// 存储
+ (void)setObject:(id)value forKey:(NSString *)defaultName;

// 读取
+ (id)objectForKey:(NSString *)defaultName;


@end
