//
//  LYMSaveTool.m
//LeTao
//
//  Created by ShelomiYao on 15/10/28.
//  Copyright (c) 2014年 ShelomiYao. All rights reserved.
//

#import "LYMSaveTool.h"

#define LYMUserDefault [NSUserDefaults standardUserDefaults]

@implementation LYMSaveTool

// 存储
+ (void)setObject:(id)value forKey:(NSString *)defaultName
{
    [LYMUserDefault setObject:value forKey:defaultName];
}

// 读取
+ (id)objectForKey:(NSString *)defaultName
{
    return [LYMUserDefault objectForKey:defaultName];
}

@end
