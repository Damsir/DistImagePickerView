

#import <UIKit/UIKit.h>

@interface UIImage (LLGif)

/** 根据gif的name 设置image */
+ (UIImage *)ll_setGifWithName: (NSString *)name;

/** 根据gif的data 设置image */
+ (UIImage *)ll_setGifWithData: (NSData *)data;

@end
