//
//  NSDictionary+AXAdd.h
//  AXKit
//
//  Created by xaoxuu on 18/11/2017.
//  Copyright © 2017 Titan Studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AXResult.h"
NS_ASSUME_NONNULL_BEGIN
@interface NSDictionary (AXAdd)

/**
 根据json字符串创建字典

 @param string json字符串
 @return 字典
 */
+ (instancetype)dictionaryWithJsonString:(NSString *)string;

/**
 解析dictionary中的dictionary，返回值可能为空
 */
- (nullable NSDictionary *(^)(NSString *key))dictionaryValue;

/**
 解析dictionary中的array，返回值可能为空
 */
- (nullable NSArray *(^)(NSString *key))arrayValue;

/**
 解析dictionary中的string，返回值可能为空
 */
- (nullable NSString *(^)(NSString *key))stringValue;

/**
 解析dictionary中的number，返回值可能为空
 */
- (nullable NSNumber *(^)(NSString *key))numberValue;


@end
NS_ASSUME_NONNULL_END
