//
//  CTMediator+A.m
//  A_Category
//
//  Created by gamesirDev on 8/4/2020.
//  Copyright © 2020 Lfm. All rights reserved.
//

#import "CTMediator+A.h"

@implementation CTMediator (A)

- (UIViewController *)A_viewController {
    // 内容与标题对应
   return [self performTarget:@"A" action:@"viewController" params:nil shouldCacheTarget:NO];
}

@end
