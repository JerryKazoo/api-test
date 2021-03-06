#
# Be sure to run `pod lib lint api-test.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'api-test'
  s.version          = '0.3.1'
  s.summary          = 'A short description of api-test.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/JerryKazoo/api-test'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Jerry Chan' => 'jerry.chan@kazootechnology.com' }
  s.source           = { :https => 'https://github.com/{repo_name}/raw/0.3.1/DApi.zip'}
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.platform = :ios, '9.0'
  s.ios.deployment_target = '9.0'

  #s.source_files = 'api-test/Classes/**/*'
  #s.frameworks = 'DApi'
  s.vendored_frameworks = 'DApi.framework'

  # s.resource_bundles = {
  #   'api-test' => ['api-test/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
