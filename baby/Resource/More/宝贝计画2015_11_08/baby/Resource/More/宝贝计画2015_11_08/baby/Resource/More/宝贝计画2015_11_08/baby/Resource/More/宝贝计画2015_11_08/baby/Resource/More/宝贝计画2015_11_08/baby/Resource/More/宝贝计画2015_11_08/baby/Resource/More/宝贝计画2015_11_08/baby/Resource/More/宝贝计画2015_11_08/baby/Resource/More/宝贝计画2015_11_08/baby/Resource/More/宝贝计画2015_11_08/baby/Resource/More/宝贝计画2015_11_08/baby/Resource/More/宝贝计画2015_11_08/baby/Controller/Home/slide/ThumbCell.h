//
//  ThumbCell.h
//  baby
//
//  Created by 宝贝计画 on 15/11/12.
//  Copyright © 2015年 zhang da. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ImageView;

@protocol ThumbCellDelegate <NSObject>

- (void)galleryTouchedAtRow:(NSInteger)row andCol:(NSInteger)col;
@end


@interface ThumbCell : UITableViewCell <UIScrollViewDelegate,UIAlertViewDelegate> {
    NSMutableArray *imageViews;
}

@property (nonatomic, readonly) int colCnt;
@property (nonatomic, assign) id<ThumbCellDelegate>delagate;
@property (nonatomic, assign) NSInteger row;

- (void)setImagePath:(NSString *)imagePath;

- (id)initWithStyle:(UITableViewCellStyle)style
    reuseIdentifier:(NSString *)reuseIdentifier
             colCnt:(int)colCnt;

@end
