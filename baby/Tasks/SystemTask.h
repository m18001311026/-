//
//  SystemTask.h
//  baby
//
//  Created by zhang da on 14-8-9.
//  Copyright (c) 2014年 zhang da. All rights reserved.
//

#import "BBNetworkTask.h"
//系统任务
@interface SystemTask : BBNetworkTask

- (id)initGetVersion;
- (id)initPayConfig;

@end
