//
//  GalleryPopViewController.m
//  baby
//
//  Created by 宝贝计画 on 15/11/12.
//  Copyright © 2015年 zhang da. All rights reserved.
//

#import "GalleryPopViewController.h"
#import "WelcomeViewController.h"
#import "GalleryDetailViewController.h"
#import "NewGalleryViewController.h"
#import "UserViewController.h"
#import "UIButtonExtra.h"
#import "ConfigManager.h"
#import "TabbarController.h"
#import "SlideViewController.h"

#import "CommentCell.h"
#import "ThumbCell.h"

#import "GalleryTask.h"
#import "PostTask.h"
#import "TaskQueue.h"

#import "Gallery.h"
#import "Picture.h"
#import "AudioPlayer.h"
#import "MemContainer.h"


#define PAGESIZE 5
#define COL_CNT 2

#define INDEX_LIKE -1
#define INDEX_COMMENT 0
#define INDEX_RE 1

#define EDITVIEW_HEIGHT 60


@interface GalleryPopViewController ()


@end

@implementation GalleryPopViewController



- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
