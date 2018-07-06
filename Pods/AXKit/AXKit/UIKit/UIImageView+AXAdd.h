//
//  UIImageView+AXAdd.h
//  AXKit
//
//  Created by xaoxuu on 27/04/2017.
//  Copyright © 2017 Titan Studio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (AXAdd)

+ (UIImageView *(^)(NSString *))initWithImageName;

+ (UIImageView *(^)(UIImage *))initWithImage;

+ (UIImageView *(^)(CGRect))initWithFrame;


@end
