//
//  HorizonTableView.h
//  simpleread
//
//  Created by zhang da on 11-4-24.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PullToRefreshView.h"

@class HorizonTableView;

@protocol HorizonTableViewDelegate <NSObject>

@optional
//视图表宽度
- (int)rowWidthForHorizonTableView:(HorizonTableView *)tableView;
//视图表索引
- (void)horizonTableView:(HorizonTableView *)tableView didSelectRowAtIndex:(NSInteger)index;
//负载数据
- (void)horizonTableView:(HorizonTableView *)tableView loadHeavyDataForCell:(UIView *)cell atIndex:(NSInteger)index;
//刷新
- (void)horizonTableViewDidTriggerRefresh:(HorizonTableView *)pullTableView;
//加载更多表格视图
- (void)horizonTableViewDidTriggerLoadMore:(HorizonTableView *)pullTableView;
@end 

@protocol HorizonTableViewDatasource <NSObject>

@required
//视图行数
- (NSInteger)numberOfRowsInHorizonTableView:(HorizonTableView *)tableView;
//索引
- (UIView *)horizonTableView:(HorizonTableView *)tableView cellForRowAtIndex:(NSInteger)index;

@end 

@interface HorizonTableView: UIView  < UIScrollViewDelegate >{
    UIScrollView *holderScrollView;
    //可见范围
    NSRange visibleRange;
    
    PullToRefreshView *refreshView, *loadMoreView;
    //可见
    NSMutableSet *visibleCells;
    //回收
    NSMutableSet *recycledCells;
}

@property (nonatomic, assign) id <HorizonTableViewDelegate> delegate;
@property (nonatomic, assign) id <HorizonTableViewDatasource> dataSource;
@property (nonatomic, assign) bool hasMore;
@property (nonatomic, assign, readonly) NSInteger currentPage;

- (id)dequeueReusableCell;//重复使用
- (id)cellAtIndex:(NSInteger)index;
- (void)scrollToRowAtIndex:(NSInteger)index animated:(BOOL)animated;
- (void)stopLoading;//停止加载
- (void)reloadData;//重新加载
- (void)setReloadIndicatoreColor:(UIColor *)color;//颜色

@end
