//
//  CTMediator+A.h
//  A_Category
//
//  Created by gamesirDev on 8/4/2020.
//  Copyright © 2020 Lfm. All rights reserved.
//

#import <CTMediator/CTMediator.h>

NS_ASSUME_NONNULL_BEGIN

/// A业务的中间传递者
@interface CTMediator (A)

/// 命名规则：以业务名称开头，如“A”，中间接着“_”，后面跟着业务逻辑，如“viewController”
- (UIViewController*)A_viewController;

@end

NS_ASSUME_NONNULL_END
