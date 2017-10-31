
#import <UIKit/UIKit.h>

@class LLActionSheetView;

/**
 * block回调
 *
 * @param actionSheet DistActionSheet对象自身
 * @param index       被点击按钮标识,取消: 0, 删除: -1, 其他: 1.2.3...
 */
typedef void(^LLActionSheetBlock)(LLActionSheetView *actionSheet, NSInteger index);

@interface LLActionSheetView : UIView

/**
 * 创建DistActionSheet对象
 *
 * @param title                  提示文本
 * @param cancelButtonTitle      取消按钮文本
 * @param destructiveButtonTitle 删除按钮文本
 * @param otherButtonTitles      其他按钮文本
 * @param actionSheetBlock       block回调
 *
 * @return DistActionSheet对象
 */
- (instancetype)initWithTitle:(NSString *)title
            cancelButtonTitle:(NSString *)cancelButtonTitle
       destructiveButtonTitle:(NSString *)destructiveButtonTitle
            otherButtonTitles:(NSArray *)otherButtonTitles
                      handler:(LLActionSheetBlock)actionSheetBlock NS_DESIGNATED_INITIALIZER;

/**
 * 创建DistActionSheet对象(便利构造器)
 *
 * @param title                  提示文本
 * @param cancelButtonTitle      取消按钮文本
 * @param destructiveButtonTitle 删除按钮文本
 * @param otherButtonTitles      其他按钮文本
 * @param actionSheetBlock       block回调
 *
 * @return DistActionSheet对象
 */
+ (instancetype)actionSheetWithTitle:(NSString *)title
                   cancelButtonTitle:(NSString *)cancelButtonTitle
              destructiveButtonTitle:(NSString *)destructiveButtonTitle
                   otherButtonTitles:(NSArray *)otherButtonTitles
                             handler:(LLActionSheetBlock)actionSheetBlock;

/**
 * 弹出DistActionSheet视图
 *
 * @param title                  提示文本
 * @param cancelButtonTitle      取消按钮文本
 * @param destructiveButtonTitle 删除按钮文本
 * @param otherButtonTitles      其他按钮文本
 * @param actionSheetBlock       block回调
 *
 */
+ (void)showActionSheetWithTitle:(NSString *)title
               cancelButtonTitle:(NSString *)cancelButtonTitle
          destructiveButtonTitle:(NSString *)destructiveButtonTitle
               otherButtonTitles:(NSArray *)otherButtonTitles
                         handler:(LLActionSheetBlock)actionSheetBlock;

/**
 * 弹出视图
 */
- (void)show;

@end
