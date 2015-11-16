//
//  HorizonPictureCell.h
//  baby
//
//  Created by 宝贝计画 on 15/11/10.
//  Copyright (c) 2015年 zhang da. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ImageView;

@interface HorizonPictureCell : UIView{
    ImageView *pictureView;
}

@property (nonatomic, retain)NSString *picturePath;

- (void)updateLayout;

@end
