

#import "UIImageView+LLExtension.h"
#import "UIImageView+WebCache.h"

@implementation UIImageView (LLExtension)

- (void)ll_setImageWithUrlString: (NSString *)urlString placeholderImage: (UIImage *)placeholderImage {
    [self sd_setImageWithURL:[NSURL URLWithString:urlString] placeholderImage:placeholderImage];
}


@end
