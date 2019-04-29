//
//  UIView+Extension.h
//  RyanWeiBo
//
//  Created by rain on 2017/3/23.
//  Copyright © 2017年 RyanLi. All rights reserved.
//

#import <UIKit/UIKit.h>

//分类 Category  创建文件的时候选择category
//分类是给已经存在的类扩充功能

@interface UIView (Extension)
@property(nonatomic, assign) CGFloat x;
@property(nonatomic, assign) CGFloat y;
@property(nonatomic, assign) CGFloat centerX;
@property(nonatomic, assign) CGFloat centerY;
@property(nonatomic, assign) CGFloat width;
@property(nonatomic, assign) CGFloat height;
@property(nonatomic, assign) CGSize size;
@property(nonatomic, assign) CGPoint origin;

//分类之生成方法，不会生成带下划线的变量，所以需要自己去实现setter和getter方法

@end
