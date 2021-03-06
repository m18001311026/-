//
//  Comment.h
//  baby
//
//  Created by 宝贝计画 on 15/11/10.
//  Copyright (c) 2015年 zhang da. All rights reserved.
//

#import <UIKit/UIKit.h>

#define DEFAULTCOMMENT_HEIGHT 60
#define DEFAULTVOICE_WIDTH 80
#define DEFAULTFONT 13

@class ImageView;
@class CommentCell;


@protocol CommentCellDelegate <NSObject>

@required
- (void)playVoice:(CommentCell *)cell url:(NSString *)voicePath;
- (void)deleteComment:(long)commentId;

@end


@interface CommentCell : UITableViewCell {
    
    ImageView *avatar;
    UIImageView *playIndicator;
    UILabel *contentLabel, *voiceLength;
    UIButton *voiceBtn;
    UIActivityIndicatorView *loading;
    
    UIButton *deleteBtn, *replyBtn;
    
}

@property (nonatomic, assign) long commentId;
@property (nonatomic, assign) bool loadingVoice;
@property (nonatomic, assign) id<CommentCellDelegate> delegate;

- (void)updateLayout;
+ (float)height:(long)commentId;

@end