//
//  SlideViewController.h
//  baby
//
//  Created by 宝贝计画 on 15/11/10.
//  Copyright (c) 2015年 zhang da. All rights reserved.
//

#import "BBViewController.h"
#import "HorizonTableView.h"
#import "HorizonPictureCell.h"
@interface SlideViewController : BBViewController<HorizonTableViewDatasource,HorizonTableViewDelegate,UIScrollViewDelegate>{
    //当前页面
    int currentPage;
    //视图表
    HorizonTableView *galleryTable;
    //图片
    NSMutableArray *pictures;
    
    UILabel *source, *re;
}
//初始化
- (id)initWithGallery:(long)galleryId;
@end
