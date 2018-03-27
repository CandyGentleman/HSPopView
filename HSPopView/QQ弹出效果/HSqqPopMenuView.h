//
//  HSqqPopMenuView.h
//  QQPopMenuView
//
//  Created by 刘鹿杰的mac on 2018/3/21.
//  Copyright © 2018年 Code Geass. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSqqPopMenuView : UIView

@property (nonatomic, copy) void (^hideHandle)(void);

/**
 *  实例化方法
 *
 *  @param array  items，包含字典，字典里面包含标题（title）、图片名（imageName）
 *  @param width  宽度
 *  @param point  三角的顶角坐标（基于window）
 *  @param action 点击回调
 */
- (instancetype)initWithItems:(NSArray <NSDictionary *>*)array
                        width:(CGFloat)width
             triangleLocation:(CGPoint)point
                       action:(void(^)(NSInteger index))action;

/**
 *  类方法展示
 *
 *  @param array  items，包含字典，字典里面包含标题（title）、图片名（imageName）
 *  @param width  宽度
 *  @param point  三角的顶角坐标（基于window）
 *  @param action 点击回调
 */
+ (void)showWithItems:(NSArray <NSDictionary *>*)array
                width:(CGFloat)width
     triangleLocation:(CGPoint)point
               action:(void(^)(NSInteger index))action;

- (void)show;
- (void)hide;
@end
