//
//  Comment.m
//  baby
//
//  Created by 宝贝计画 on 15/11/10.
//  Copyright (c) 2015年 zhang da. All rights reserved.
//

#import "CommentCell.h"
#import "ImageView.h"
#import "GComment.h"
#import "User.h"
#import "MemContainer.h"
#import "ConfigManager.h"

@interface CommentCell ()

@property (nonatomic ,retain)GComment *comment;



@end



@implementation CommentCell
//- (void)dealloc {
//    self.comment = nil;
//    self.delegate = nil;
//    [voiceBtn release];
//    [super dealloc];
//}
//
//- (void)setCommentId:(long)commentId {
//    if (_commentId != commentId) {
//        _commentId = commentId;
//        self.comment = [GComment getCommentWithId:_commentId];
//    }else if (!self.comment && _commentId > 0){
//        self.comment = [GComment getCommentWithId:_commentId];
//}
//
//
//
//- (void)awakeFromNib {
//    // Initialization code
//}
//
//- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
//    [super setSelected:selected animated:animated];
//
//    // Configure the view for the selected state
//}
//
@end
