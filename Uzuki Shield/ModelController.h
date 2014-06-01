//
//  ModelController.h
//  Uzuki Shield
//
//  Created by Kenji Ohno on 2014/06/01.
//  Copyright (c) 2014年 Macnica. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
