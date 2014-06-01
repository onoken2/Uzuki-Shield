//
//  DataViewController.h
//  Uzuki Shield
//
//  Created by Kenji Ohno on 2014/06/01.
//  Copyright (c) 2014年 Macnica. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
