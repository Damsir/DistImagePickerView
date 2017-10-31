
#import <UIKit/UIKit.h>

@interface DistImagePickerCell : UICollectionViewCell

@property (nonatomic, strong) UIImageView *icon;
@property (nonatomic, strong) UIButton *deleteButton;
/** 视频标志 */
@property (nonatomic, strong) UIImageView *videoImageView;
@property (nonatomic, strong) NSIndexPath *cellIndexPath;
@property (nonatomic, copy) void(^DistClickDeleteButton)(NSIndexPath *cellIndexPath);

@end
