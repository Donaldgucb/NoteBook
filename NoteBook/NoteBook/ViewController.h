//
//  ViewController.h
//  NoteBook
//
//  Created by dz on 15/11/20.
//  Copyright (c) 2015年 dz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TestViewModel.h"
@interface ViewController : UIViewController

@property (nonatomic, strong) TestViewModel *viewModel;
+ (instancetype) viewController;
@end

