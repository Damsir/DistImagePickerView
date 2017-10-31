

#import "UIImage+LLGif.h"
#import "UIImage+GIF.h"

@implementation UIImage (LLGif)

+ (UIImage *)ll_setGifWithName: (NSString *)name {
    return [self sd_animatedGIFNamed:name];
}

+ (UIImage *)ll_setGifWithData: (NSData *)data {
    return [self sd_animatedGIFWithData:data];
}


@end
