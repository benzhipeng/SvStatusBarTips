//
//  SvStatusBarTipsWindow.h
//  SvStatusBarTips
//
//  Created by  maple on 4/21/13.
//  Copyright (c) 2013 maple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SvStatusBarTipsWindow : UIWindow

/*
 * @brief get the singleton tips window
 */
+ (SvStatusBarTipsWindow*)shareTipsWindow;

/*
 * @brief show tips message on statusBar
 */
- (void)showTips:(NSString*)tips;

/*
 * @brief show tips message on statusBar
 */
- (void)showTips:(NSString*)tips hideAfterDelay:(NSInteger)seconds;

/*
 * @brief show tips icon and message on statusBar
 */
- (void)showTipsWithImage:(UIImage*)tipsIcon message:(NSString*)message;

/*
 * @brief show tips icon and message on statusBar
 */
- (void)showTipsWithImage:(UIImage*)tipsIcon message:(NSString*)message hideAfterDelay:(NSInteger)seconds;


/*
 * @brief hide tips window
 */
- (void)hideTips;

@end
