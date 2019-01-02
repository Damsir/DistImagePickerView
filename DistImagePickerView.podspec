
Pod::Spec.new do |s|

  s.name         = "DistImagePickerView"
  s.version      = "1.0.3"
  s.summary      = "集本地图片、视频选取,展示,拍摄,录像于一体的并时刻回调用于上传的数据类型的多媒体框架"
  s.author       = { "Damrin" => "75081647@qq.com" }
  s.homepage    = 'https://github.com/Damsir/DistImagePickerView'
  s.source      = { :git => 'https://github.com/Damsir/DistImagePickerView.git', :tag => s.version }
  s.license = "MIT"
  s.platform = :ios, "8.0"
  s.requires_arc = true
  s.source_files = "DistImagePickerView", "DistImagePickerView/**/*.{h,m}"
  # s.public_header_files = "DistPopView/*.h"
  s.resources = 'DistImagePickerView/Resource/*.{bundle}'
  s.framework = 'UIKit'
  s.ios.deployment_target = "8.0"
  s.dependency "TZImagePickerController" , '~> 3.1.6'
  s.dependency "MWPhotoBrowser", '~> 2.1.2'

end
  
