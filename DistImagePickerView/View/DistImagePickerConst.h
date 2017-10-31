

#ifndef DistImagePickerConst_h
#define DistImagePickerConst_h

#import <UIKit/UIKit.h>
#import "UIView+LLExtension.h"
#import "UIViewController+LLExtension.h"
#import "UIImage+LLGif.h"
#import "UIImageView+LLExtension.h"
#import "NSString+LLExtension.h"
#import "LLActionSheetView.h"

#define  LLPicker_ScreenWidth  [UIScreen mainScreen].bounds.size.width
#define  LLPicker_ScreenHeight [UIScreen mainScreen].bounds.size.height
#define  LLPicker_ScreenBounds [UIScreen mainScreen].bounds
#define  LLPickerBackGroundColor [UIColor colorWithRed:0xf2/255.0 green:0xf4/255.0 blue:0xf9/255.0 alpha:1]

#define LLPickerRatio LLPicker_ScreenWidth/375.0

/** cell上删除按钮的宽 */
//#define LLPickerDeleteButtonWidth LLPickerRatio * 18
#define LLPickerDeleteButtonWidth 20.f
/** cell上视频播放按钮的宽 */
#define LLPickerVideoPlayButtonWidth 50.f

//日志输出
#ifdef DEBUG
#define LLLog(...) NSLog(__VA_ARGS__)
#else
#define LLLog(...)
#endif

#endif /* DistImagePickerConst_h */
