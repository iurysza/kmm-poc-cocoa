k#
#  Be sure to run `pod spec lint HelloWorld.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#
Pod::Spec.new do |s|
# ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #
s.name          = "kmm-poc"
#s.version      = "INITIAL_VERSION OR TAG"
s.version       = "1.0.0"
s.summary       = "A KMM poc"
s.homepage      = "https://github.com/iurysza/kmm-poc-cocoa"
s.description   = "KMM for building SDKs"
s.license       = "UNLICENSED"
s.author        = { "Iury Souza" => "iurysza@gmail.com" }
s.platform      = :ios, "10.0"
s.ios.vendored_frameworks = 'kmm-poc.framework'
#s.swift_version = "Swift version of the framework"
# s.swift_version = "4.1"
s.source        = { :git => "https://github.com/iurysza/kmm-poc-cocoa.git", :tag => s.version }
s.exclude_files = "Classes/Exclude"
end
