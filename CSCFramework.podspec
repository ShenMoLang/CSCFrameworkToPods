
Pod::Spec.new do |s|
  s.name             = 'CSCFramework'
  s.version          = '1.0.1'
  s.summary          = 'A virtual card manage SDK. '
  s.description      = <<-DESC
                        TODO: Add long description of the pod here.
                       DESC
  s.homepage         = 'https://github.com/ShenMoLang/CSCFrameworkToPods'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'lcc152' => 'lcc152@zcsmart.com' }
  s.source           = { :git => 'https://github.com/ShenMoLang/CSCFrameworkToPods.git', :tag => 'v1.0.1' }
  s.platform     = :ios, "8.0"
  s.ios.deployment_target = '8.0'
  s.requires_arc = true
  s.vendored_frameworks = "**/CSCFramework.framework"
  # 系统的
  s.frameworks = 'SystemConfiguration', 'CoreGraphics', 'UIKit', 'Foundation', 'MobileCoreServices', 'Security'
  s.dependency 'AFNetworking'
  s.dependency 'GTMBase64'

end
