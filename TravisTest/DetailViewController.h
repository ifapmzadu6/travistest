//
//  DetailViewController.h
//  TravisTest
//
//  Created by 狩宿恵介 on 2015/02/13.
//  Copyright (c) 2015年 self. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

