//
//  NSArray+AXAdd.h
//  AXKit
//
//  Created by xaoxuu on 03/06/2017.
//  Copyright © 2017 Titan Studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSArray (AXAdd)


/**
 总和

 @return 总和
 */
- (CGFloat)ax_sum;

/**
 平均值

 @return 平均值
 */
- (CGFloat)ax_avg;


/**
 最大值

 @return 最大值
 */
- (CGFloat)ax_max;


/**
 最小值

 @return 最小值
 */
- (CGFloat)ax_min;

/**
 去重后的数组

 @return 去重后的数组
 */
- (instancetype)distinctUnionOfObjects;

/**
 根据json字符串创建数组
 
 @param string json字符串
 @return 数组
 */
+ (instancetype)arrayWithJsonString:(NSString *)string;

/**
 倒序
 */
- (NSArray *(^)(void))reversed;

@end

@interface NSMutableArray<ObjectType> (AXAdd)

/**
 倒序
 */
- (NSMutableArray *(^)(void))reversed;

- (void (^)(ObjectType obj))append;
- (void (^)(ObjectType obj, NSUInteger index))insertObjectAtIndex;
- (void (^)(NSUInteger index))removeObjectAtIndex;
- (void (^)(ObjectType obj))removeObject;

@end


