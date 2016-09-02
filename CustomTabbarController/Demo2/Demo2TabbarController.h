//
//  Demo2TabbarController.h
//  CustomTabbarController
//
//  Created by Ratul Sharker on 8/31/16.
//  Copyright © 2016 funtoos. All rights reserved.
//

#import "CustomTabbarController.h"

@interface Demo2TabbarController : CustomTabbarController <CustomTabbarImplementationDelegate>


#pragma mark CustomTabbarImplementationDelegate
@property IBOutlet UIView *viewControllerContainer;
@property IBOutletCollection (NSLayoutConstraint) NSArray   *tabbarContainerHeight;
@property IBOutletCollection(NSLayoutConstraint)  NSArray   *tabbarWidgetHolderTop;



@end
