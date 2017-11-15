//
//  UIImagePickerController+LLExtension.m
//  Pods
//
//  Created by 吴定如 on 2017/11/10.
//
//

#import "UIImagePickerController+LLExtension.h"

@implementation UIImagePickerController (LLExtension)

- (BOOL)shouldAutorotate {
    return YES;
}

#pragma mark -- 设置ImagePicker支持横屏(解决iPad只支持竖屏的情况)
- (NSUInteger)supportedInterfaceOrientations {
    return  UIInterfaceOrientationMaskAllButUpsideDown;
}

@end
