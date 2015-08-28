//
//  ViewController.h
//  SQLite3Test
//
//  Created by Hu Aihong on 15-8-28.
//  Copyright (c) 2015年 ChinaCloud. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (copy, nonatomic) NSString *databaseFilePath;

- (void)applicationWillResignActive:(NSNotification *)notification;
@end

