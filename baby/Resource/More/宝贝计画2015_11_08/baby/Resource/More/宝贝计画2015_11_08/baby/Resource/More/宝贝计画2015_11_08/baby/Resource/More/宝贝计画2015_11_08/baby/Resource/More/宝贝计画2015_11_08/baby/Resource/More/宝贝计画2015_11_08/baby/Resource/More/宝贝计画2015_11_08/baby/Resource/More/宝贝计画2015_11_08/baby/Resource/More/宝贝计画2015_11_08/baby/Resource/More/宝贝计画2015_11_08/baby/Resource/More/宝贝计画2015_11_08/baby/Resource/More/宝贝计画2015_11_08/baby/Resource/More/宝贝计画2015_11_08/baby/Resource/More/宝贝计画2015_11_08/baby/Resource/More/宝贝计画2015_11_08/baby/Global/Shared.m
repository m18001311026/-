//
//  Shared.m
//  baby
//
//  Created by zhang da on 14-3-3.
//  Copyright (c) 2014年 zhang da. All rights reserved.
//

#import "Shared.h"
#import "UIColorExtra.h"

float screentHeight, screentContentHeight, osVersion;
bool iOSNotSupport, iOS5, iOS7;
bool largeScreen;

static UIColor *bbYellow, *bbWhite, *bbRealWhite, *bbHightlight, *bbLightGray;

@implementation Shared

- (id)init {
    self = [super init];
    if (self) {
        BOOL isIphone5 =  ( fabs(( double )[UIScreen mainScreen].bounds.size.height - 568.0) < DBL_EPSILON );
        screentHeight = isIphone5? 568: 480;
        largeScreen = isIphone5? YES: NO;
        screentContentHeight = screentHeight - 20;
        osVersion = [[[UIDevice currentDevice] systemVersion] floatValue];
        if (osVersion < 5.0) {
            iOSNotSupport = YES; iOS5 = NO, iOS7 = NO;
        } else if (osVersion < 6.0) {
            iOSNotSupport = NO; iOS5 = YES, iOS7 = NO;
        } else if (osVersion < 7.0) {
            iOSNotSupport = NO; iOS5 = NO, iOS7 = NO;
        } else {
            iOSNotSupport = NO; iOS5 = NO, iOS7 = YES;
        }
    }
    return self;
}

+ (void)init {
    Shared *t = [[Shared alloc] init];
    [t release];
    t = nil;
}
//[UIColor colorWithRed:234/255.0 green:166/255.0 blue:31/255.0 alpha:1]
+ (UIColor *)bbYellow {
    if (!bbYellow) {
        bbYellow = [[UIColor r:234 g:166 b:31 alpha:1] retain];
    }
    return bbYellow;
}

+ (UIColor *)bbWhite {
    if (!bbWhite) {
        bbWhite = [[UIColor r:250 g:242 b:232 alpha:0.7] retain];
    }
    return bbWhite;
}

+ (UIColor *)bbRealWhite {
    if (!bbRealWhite) {
        bbRealWhite = [[UIColor r:251 g:245 b:238] retain];
    }
    return bbRealWhite;
}

+ (UIColor *)bbHightlight {
    if (!bbHightlight) {
        bbHightlight = [[UIColor orangeColor] retain];
        
        
    }
    return bbHightlight;
}

+ (UIColor *)bbLightGray {
    if (!bbLightGray) {
        bbLightGray = [[UIColor colorWithWhite:0 alpha:.1f] retain];
    }
    return bbLightGray;
}

@end
