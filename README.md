[![Version](https://img.shields.io/cocoapods/v/TM-PSDK.svg?style=flat)](http://cocoapods.org/pods/TM-PSDK)
![Swift](https://img.shields.io/badge/Swift-5.8-orange.svg?style=flat)
![iOS](https://img.shields.io/badge/iOS-14-green.svg?style=flat)
[![License](https://img.shields.io/cocoapods/l/TM-PSDK.svg?style=flat)](http://cocoapods.org/pods/TM-PSDK)
[![Platform](https://img.shields.io/cocoapods/p/TM-PSDK.svg?style=flat)](https://cocoapods.org/pods/TM-PSDK)

# TM-PSDK

The Ticketmaster Presence SDK provides a simple way to add Ticketmaster features
in your 3rd party iOS apps. More information about the Presence SDK can be found
at https://developer.ticketmaster.com/products-and-docs/sdks/presence-sdk/.

Requires: Xcode 14.3+, iOS 14+

Have a question about Presence SDK? [Contact us!](https://developer.ticketmaster.com/products-and-docs/sdks/presence-sdk/#presence-feedback-form-anchor)

## Installation

### CocoaPods

Swift 5.8.0+:
```ruby
pod 'TM-PSDK', '~> 5.8.0-2.22.0'
```

## Integration Guide

See our [integration guide and demo project](https://developer.ticketmaster.com/products-and-docs/tutorials/sample-apps/presenceSDK_sampleApp/iOS/) for insight on how to properly integrate the Presence SDK.

### Sample TMPresenceView
```Swift
import SwiftUI
import PresenceSDK

struct TMPresenceView: UIViewControllerRepresentable {
    
    typealias UIViewControllerType = PresenceViewController
    
    func makeUIViewController(context: Context) -> PresenceViewController {
        let presenceConfig = PSDK.Configuration(consumerKey: "<Consumer Key>",
                                                hostEnvironment: .US/.UK,
                                                displayName: "<Display Name>")
        
        PSDK.shared.setConfiguration(presenceConfig)
        
        let vc = PresenceViewController()
        return vc
    }
    
    func updateUIViewController(_ uiViewController: PresenceViewController, context: Context) {
        
    }
}

struct TMPresenceView_Previews: PreviewProvider {
    static var previews: some View {
        TMPresenceView()
    }
}

```

## License

TM-PSDK is available under the MIT license. See the LICENSE file for more info.
