//
//  UIActivityIndicatorView+AXAdd.m
//  AXKit
//
//  Created by xaoxuu on 28/05/2017.
//  Copyright © 2017 Titan Studio. All rights reserved.
//

#import "UIActivityIndicatorView+AXAdd.h"
#import "CoreGraphics+AXAdd.h"
#import "UIView+AXFrameAdd.h"
#import "GCD+AXAdd.h"
#import "_AXKitBundle.h"

static NSTimeInterval indicatorTimeout = 30;

@implementation UIActivityIndicatorView (AXAdd)

+ (instancetype)defaultIndicator{
    UIActivityIndicatorView *indicator = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleGray];
    indicator.hidesWhenStopped = YES;
    return indicator;
}

+ (instancetype)defaultIndicatorWithLoading{
    UIActivityIndicatorView *indicator = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleGray];
    indicator.hidesWhenStopped = YES;
    // @xaoxuu: loading label
    UILabel *lb = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 0.5*kScreenW, 16)];
    lb.font = [UIFont systemFontOfSize:11];
    lb.textColor = [UIColor lightGrayColor];
    lb.text = NSLocalizedStringFromAXKit(@"LOADING");
    lb.textAlignment = NSTextAlignmentCenter;
    lb.top = indicator.height + 4;
    lb.centerX = indicator.boundsCenterX;
    [indicator addSubview:lb];
    return indicator;
}


- (void)addToView:(UIView *)view{
    [self addToView:view withLoading:NO];
}

- (void)addToView:(UIView *)view withLoading:(BOOL)loading{
    self.centerX = view.boundsCenterX;
    if (loading) {
        self.centerY = view.boundsCenterY - 8;
    } else {
        self.centerY = view.boundsCenterY;
    }
    [view addSubview:self];
    [self startAnimating];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(indicatorTimeout * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self stopAnimating];
    });
}



@end
