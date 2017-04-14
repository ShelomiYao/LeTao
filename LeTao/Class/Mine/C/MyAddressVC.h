//
//  MyAddressVC.h
//LeTao
//
//  Created by ShelomiYao on 17/1/14.
//  Copyright © 2016年 ShelomiYao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AddressCellModel;
@interface MyAddressVC : BaseController

- (instancetype)initWithSelectedAdressCallback:(void (^)(AddressCellModel *address))selectedAdressCallback;


@end
