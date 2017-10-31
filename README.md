# DistImagePickerView
集本地图片、视频选取,展示,拍摄,录像于一体的并时刻回调用于上传的数据类型的多媒体框架
目录

功能实现
如何添加
使用介绍
更多自定义操作
Version
Hope
基本要求

iOS 8.0 or later

用到GitHub上第三方：TZImagePickerController和MWPhotoBrowser

功能实现

图片多选及单选,视频多选及单选
时刻回调出媒体数据用于上传
直接对图片以及视频进行展示
多种属性自定义：
媒体类型
删除、限定最大选择数数量
同个媒体资源是否多次选择
是否展示删除按钮
是否显示添加按钮
选择图片视图的背景颜色
如何添加

支持cocoapod

pod 'DistImagePickerView'

有人反馈搜不到 可能是本地 cocoapod 库的问题 执行代码 pod setup 更新本地cocoapod 库即可

手动添加
把DistImagePickerView文件拉到项目中
添加头文件#import "DistImagePickerView.h"
还要添加一些依赖库 pod 'TZImagePickerController',pod 'MWPhotoBrowser'
使用介绍（具体看 DistImagePickerView 示例）

唯一的初始化方法, Frame 以及 countOfRow
Frame中的高度设置0即可,框架的高度会自动根据宽度以及每行展示个数来自适应
 DistImagePickerView *pickerV = [DistImagePickerView ImagePickerViewWithFrame:CGRectMake(0, 70, [UIScreen mainScreen].bounds.size.width, 0) CountOfRow:3];
    
需要展示的媒体的资源类型

typedef enum : NSUInteger {
    DistImageTypePhotoAndCamera,// 本地相机和图片
    DistImageTypePhoto,// 本地图片
    DistImageTypeCamera,// 相机拍摄
    DistImageTypeVideoTape,// 录像
    DistImageTypeVideo,// 视频
    DistImageTypeAll,// 所有资源
} DistImageType;

pickerV.type = DistImageTypePhoto;
是否允许 同个图片或视频进行多次选择
pickerV.allowMultipleSelection = YES;
视情况看是否需要改变高度，目前单独使用且作为tableview的header，实时监控高度的变化
[pickerV observeViewHeight:^(CGFloat height) {

}];
随时获取选择的媒体文件
[pickerV observeSelectedMediaArray:^(NSArray<DistImagePickerModel *> *list) {
for (DistImagePickerModel *model in list) {
// 在这里取到模型的数据
NSLog(@"%@",model.imageUrlString);
}
}];

更多自定义操作

preShowMedias 预先展示的媒体数组。如果一开始有需要显示媒体资源，可以先传入进行显示，没有的话可以不赋值。 传入的如果是图片类型，则可以是：UIImage，NSString，至于其他的都可以传入 DistImagePickerModel类型 包括网络图片和gif图片
在预览或者之前已经有图片的情况下，需要传入进行预先展示
pickerV.preShowMedias = @[@"4",@"1",@"http://s1.dwstatic.com/group1/M00/AA/B8/b9a8f39ed9c8609354a07cc38452aef9.gif"];
maxImageSelected 最大图片、视频选择个数，包括 preShowMedias的数量. default is 9
自定义从本地相册中所选取的最大数量
pickerV.maxImageSelected = 5;
showDelete 是否显示删除按钮. Defaults is YES
预览情况下设置为 NO
pickerV.showDelete = NO;
showAddButton 是否需要显示添加按钮. Defaults is YES
编辑情况下设置为 YES  预览情况下设置为 NO
pickerV.showAddButton = NO;
allowPickingVideo 是否允许 在选择图片的同时可以选择视频文件. default is NO
如果希望在选择图片的时候，出现视频资源，那么可以设置为 YES
pickerV.allowPickingVideo = NO;
allowMultipleSelection 是否允许 同个图片或视频进行多次选择. default is YES 如果设置为 NO，那么在已经选择了一张以上图片之后，就不能同时选择视频了（注意）
如果不希望已经选择的图片或视频，再次被选择，那么可以设置为 NO
pickerV.allowMultipleSelection = NO;
backgroundColor 底部collectionView的背景颜色，有特殊颜色要求的可以单独去设置
Version

1.0.0 大版本的更改,更改初始化方法,增加每行显示图片个数的接口,更加容易适配各种需求

Hope

代码使用过程中，发现任何问题，可以随时issue
如果有更多建议或者想法也可以直接联系我 QQ:75081647
期间感谢有几位朋友提出宝贵的意见让此框架更加完善 感谢
Licenses

All source code is licensed under the MIT License.
