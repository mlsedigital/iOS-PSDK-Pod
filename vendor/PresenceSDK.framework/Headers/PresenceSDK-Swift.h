// Generated by Apple Swift version 5.1.3 (swiftlang-1100.0.282.1 clang-1100.0.33.15)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AuthenticationServices;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import SafariServices;
@import UIKit;
@import WebKit;
@import iosExperienceSDK;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PresenceSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif





@class UIColor;

/// Pass to <code>PresenceSDK setBrandingColors</code> to customize the color of UI elements by overridding their respective properties.
SWIFT_CLASS("_TtC11PresenceSDK14BrandingColors")
@interface BrandingColors : NSObject
- (nonnull instancetype)initWithNavBarColor:(UIColor * _Nonnull)navBarColor ticketColor:(UIColor * _Nonnull)ticketColor buttonColor:(UIColor * _Nonnull)buttonColor OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithOneColor:(UIColor * _Nonnull)oneColor OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@class ExperienceConfigurationBuilder;

/// Convenience class to configure the Experience SDK package.
/// The <code>ExperienceConfigutarion</code> class has a static property <code>Builder</code> to help compose a proper configuration.
/// <h2>Build your ExperienceSDK configuration</h2>
/// \code
/// let experienceConfiguration = ExperienceConfiguration.Builder.init()
///     .setAppId("yourAppId")
///     .setAppSource("yourAppSource")
///     .setSubdomain("subdomainForYourApp")
///     .setApiKey("yourApiKey")
///     .setApiSubdomain("apiSubdomainForYourApp")
///     .setSsooSigningKey("SsoSingingKey")
///     .build()
///
/// \endcodePass your Experience Configuration to the PresenceSDK
/// \code
/// PresenceSDK.getPresenceSDK().setExperienceConfiguration(experienceConfiguration)
///
/// \endcode
SWIFT_CLASS("_TtC11PresenceSDK23ExperienceConfiguration")
@interface ExperienceConfiguration : NSObject
/// Helper class for building ExperienceSDK configuration object
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) SWIFT_METATYPE(ExperienceConfigurationBuilder) _Nonnull Builder;)
+ (SWIFT_METATYPE(ExperienceConfigurationBuilder) _Nonnull)Builder SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Helper class for building ExperienceSDK configuration object.
SWIFT_CLASS("_TtC11PresenceSDK30ExperienceConfigurationBuilder")
@interface ExperienceConfigurationBuilder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Set the App ID for Experience Configuratin Builder
/// \param appId The App ID associated with Experience.
///
///
/// returns:
/// The current Experience Configuration Builder
- (ExperienceConfigurationBuilder * _Nonnull)setAppId:(NSString * _Nonnull)appId;
/// Set the App Name for Experience Configuratin Builder
/// \param appName The App Name associated with Experience.
///
///
/// returns:
/// The current Experience Configuration Builder
- (ExperienceConfigurationBuilder * _Nonnull)setAppName:(NSString * _Nonnull)appName;
/// Set the App Source for Experience Configuratin Builder
/// \param appSource The App Source associated with Experience.
///
///
/// returns:
/// The current Experience Configuration Builder
- (ExperienceConfigurationBuilder * _Nonnull)setAppSource:(NSString * _Nonnull)appSource;
/// Sets the Subdomain for Experience Configuratin Builder
/// \param subdomain The App Subdomain associated with Experience.
///
///
/// returns:
/// The current Experience Configuration Builder
- (ExperienceConfigurationBuilder * _Nonnull)setSubdomain:(NSString * _Nonnull)subdomain;
/// Sets the API Key for Experience Configuratin Builder
/// \param apiKey The API Key associated with Experience.
///
///
/// returns:
/// The current Experience Configuration Builder
- (ExperienceConfigurationBuilder * _Nonnull)setApiKey:(NSString * _Nonnull)apiKey;
/// Sets the API Subdomain for Experience Configuratin Builder
/// \param apiSubdomain The App Name associated with Experience.
///
///
/// returns:
/// The current Experience Configuration Builder
- (ExperienceConfigurationBuilder * _Nonnull)setApiSubdomain:(NSString * _Nullable)apiSubdomain;
/// Sets the API Version for Experience Configuratin Builder
/// \param apiVersion The API Version associated with Experience.
///
///
/// returns:
/// The current Experience Configuration Builder
- (ExperienceConfigurationBuilder * _Nonnull)setApiVersion:(NSString * _Nullable)apiVersion;
/// Sets the SSO Signing Key for Experience Configuratin Builder
/// \param ssoSigningKey The SSO Signing Key associated with Experience.
///
///
/// returns:
/// The current Experience Configuration Builder
- (ExperienceConfigurationBuilder * _Nonnull)setSsoSigningKey:(NSString * _Nullable)ssoSigningKey;
/// Build the configuration object for ExperienceSDK.
///
/// returns:
/// <code>ExperienceConfiguration</code> object
- (ExperienceConfiguration * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
@end












/// Country protocol representing country of currently logged in user
SWIFT_PROTOCOL("_TtP11PresenceSDK15PresenceCountry_")
@protocol PresenceCountry
/// Host country id, -1 for Account Manager
@property (nonatomic, readonly) NSInteger id;
/// Host country standard, nil for Account Manager
@property (nonatomic, readonly, copy) NSString * _Nullable standard;
/// AccountManager country code, nil for Host
@property (nonatomic, readonly, copy) NSString * _Nullable code;
/// AccountManager country name, nil for Host
@property (nonatomic, readonly, copy) NSString * _Nullable name;
@end


/// Presence SDK Analytics class for tracking user activity
SWIFT_CLASS("_TtC11PresenceSDK22PresenceEventAnalytics")
@interface PresenceEventAnalytics : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum BackendName : NSInteger;
@protocol PresenceMember;
enum LoginMethod : NSInteger;

/// TMXLoginDelegate Protocol reports status of TicketmasterCore user login sessions
SWIFT_PROTOCOL("_TtP11PresenceSDK21PresenceLoginDelegate_")
@protocol PresenceLoginDelegate
@optional
- (void)loginWindowDidDisplay SWIFT_UNAVAILABLE_MSG("'loginWindowDidDisplay' has been renamed to 'onLoginWindowDidDisplayWithBackendName:'");
/// Called when the LoginWindow is made visible to the user.
- (void)onLoginWindowDidDisplayWithBackendName:(enum BackendName)backendName;
/// Method is invoked if the user granted app access/logged in.
/// \param backendName Name of the backend this callback event is associated with.
///
- (void)onLoginSuccessfulWithBackendName:(enum BackendName)backendName accessToken:(NSString * _Nonnull)accessToken;
/// User dismissed login window via the Cancel button
- (void)onLoginCancelledWithBackendName:(enum BackendName)backendName;
/// Called when results are returned for a Member info request after login or after updates
/// \param backendName Name of the backend this callback event is associated with.
///
/// \param member Member object.
///
- (void)onMemberUpdatedWithBackendName:(enum BackendName)backendName member:(id <PresenceMember> _Nonnull)member;
/// \param backendName Name of the backend this callback event is associated with.
///
/// \param error If available, an <code>NSError</code> object is returned. Defaults is <code>nil</code>.
///
- (void)onLoginFailedWithBackendName:(enum BackendName)backendName error:(NSError * _Nonnull)error;
- (void)onLoginForgotPasswordClicked SWIFT_UNAVAILABLE_MSG("'onLoginForgotPasswordClicked' has been renamed to 'onLoginForgotPasswordClickedWithBackendName:'");
/// Notify when user clicks on “forgot password” link
/// \param backendName Name of the backend this callback event is associated with.
///
- (void)onLoginForgotPasswordClickedWithBackendName:(enum BackendName)backendName;
/// Notify when all cache is cleared
- (void)onCacheCleared;
/// Notify when successfully logged-out
/// \param backendName Name of the backend this callback event is associated with.
///
- (void)onLogoutSuccessfulWithBackendName:(enum BackendName)backendName;
/// Notify when something went wrong during logout
/// \param backendName Name of the backend this callback event is associated with.
///
/// \param error Error describing the problem
///
- (void)onLogoutFailedWithBackendName:(enum BackendName)backendName error:(NSError * _Nonnull)error;
- (void)onHostRefreshTokenExpired;
/// Notify when successfully logged-out from both backends
- (void)onLogoutAllSuccessful;
/// Notify what login method was used to get an access token
/// \param backendName Name of the backend this callback event is associated with.
///
/// \param loginMethod Name of methods used to log in.
///
- (void)onLoginMethodUsedWithBackendName:(enum BackendName)backendName loginMethod:(enum LoginMethod)loginMethod;
/// Notify whenever SDK refreshes the access token.
- (void)onTokenRefreshedWithBackendName:(enum BackendName)backendName accessToken:(NSString * _Nonnull)accessToken;
/// Notify when SDK is not able to refresh access token.
- (void)onRefreshTokenFailedWithBackendName:(enum BackendName)backendName;
@end


/// Member protocol representing currently logged in user
SWIFT_PROTOCOL("_TtP11PresenceSDK14PresenceMember_")
@protocol PresenceMember
/// The user’s Member ID
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
/// The user’s first name
@property (nonatomic, readonly, copy) NSString * _Nonnull firstName;
/// The user’s last name
@property (nonatomic, readonly, copy) NSString * _Nonnull lastName;
/// The user’s email address
@property (nonatomic, readonly, copy) NSString * _Nonnull email;
/// The user’s ZIP/Postal Code
@property (nonatomic, readonly, copy) NSString * _Nonnull postalCode;
/// The user’s preffered language
@property (nonatomic, readonly, copy) NSString * _Nonnull language;
/// The user’s market
@property (nonatomic, readonly, copy) NSString * _Nonnull market;
/// The user’s country
@property (nonatomic, readonly, strong) id <PresenceCountry> _Nullable country;
/// CCPA doNotSell flag
@property (nonatomic, readonly) BOOL doNotSellFlag;
/// JWT id token
@property (nonatomic, readonly, copy) NSString * _Nonnull idToken;
/// The user’s email address
@property (nonatomic, readonly, copy) NSString * _Nonnull emailAddress SWIFT_DEPRECATED_MSG("", "email");
/// The user’s Host Member ID or empty if user is not logged in TM account
@property (nonatomic, readonly, copy) NSString * _Nonnull HostMemberID SWIFT_DEPRECATED_MSG("", "id");
/// The user’s AccountManager ID or empty if user is not logged in Team account
@property (nonatomic, readonly, copy) NSString * _Nonnull AccountManagerMemberID SWIFT_DEPRECATED_MSG("", "id");
@end


/// Main class for the SDK.
/// Host or Team configuration, branding/theme colors, and setting your Experience SDK confinguration is all done throught the <code>PresenceSDK</code> class.
/// <h2>Accessing the PresenceSDK Methods</h2>
/// All public methods are accessible by calling <code>getPresenceSDK()</code> method in which the class’ singleton is returned.
/// \code
/// PresenceSDK.getPresenceSDK()
///
/// \endcode<h2>Launching the SDK</h2>
/// The launching of PresenceSDK can be done by calling method <code>start(presenceSDKView:_, loginDelegate:_)</code>. The object that will serve as the loginDelegate needs to comform to the <code>PresenceLoginDelegate</code> protocol.
/// \code
/// var presenceSDKView = PresenceSDKView()
/// PresenceSDK.getPresenceSDk().start(presenceSDKView: presenceSDKView, loginDelegate: self)
///
/// \endcode<h2>Setting Host or Team configuration</h2>
/// For a team, the method to configure Presence SDK is <code>setConfig(consumerKey:_, displayName:_, useNewAccountsManger:_)</code> method.
/// \code
/// PresenceSDK.getPresenceSDK().setConfig(consumerKey: "your consumer key",
///                                        displayName: "team display name"
///                              useNewAccountsManager: false // true or false
///
/// \endcodeFor a non-team configuration, <code>setConfig(consumerKey:_)</code> method without the <code>displayName</code> and <code>useNewAccountsManager</code> parameters should be used.
/// \code
/// PresenceSDK.getPresenceSDK().setConfig(consumerKey: "your consumer key")
///
/// \endcode<h2>Setting Branding and Theme color</h2>
/// The branding color can be simply set by passing the preferred color as an argument when calling <code>setBrandingColor(color:_)</code>.
/// \code
/// PresenceSDK.getPresenceSDK().setBrandingColor(color: UIColor.red)
///
/// \endcodeWhen setting a light branding color like white, it can problematic for the user to see vital UI elements such as Navigation Bar Buttons, Button Titles, and Section:Row:Seat information. Setting the theme color to dark is recommended when a light branding color is defined.
/// \code
/// PresenceSDK.getPresenceSDK().setTheme(theme: SDKTheme.Dark)
///
/// \endcode<h2>Setting Experience SDK Configuration</h2>
/// The method to call to set the Experience Configuration is <code>setExperienceConfiguration(_:)</code> and passing the configuration as an argument.
/// For more information, please visit our <a href="https://developer.ticketmaster.com/products-and-docs/sdks/presence-sdk/">Devportal for Presence SDK</a>.
SWIFT_CLASS("_TtC11PresenceSDK11PresenceSDK")
@interface PresenceSDK : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Retrives <code>PresenceSDK</code>’s singleton given access to all of its public methods.
///
/// returns:
/// PresenceSDK’s singleton
+ (PresenceSDK * _Nonnull)getPresenceSDK SWIFT_WARN_UNUSED_RESULT;
@end




@interface PresenceSDK (SWIFT_EXTENSION(PresenceSDK))
@end

typedef SWIFT_ENUM_NAMED(NSInteger, PresenceSDKIdType, "IdType", open) {
/// Search for event with the given identifier
  PresenceSDKIdTypeEvent = 0,
/// Search for order with the given identifier
  PresenceSDKIdTypeOrder = 1,
/// Search for event or order with the given identifier
  PresenceSDKIdTypeAny = 2,
};




@interface PresenceSDK (SWIFT_EXTENSION(PresenceSDK))
/// Method for configuring Experience SDK
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     experienceConfiguration: ExperienceSDK configuration object containing all the required experience configuration.
///   </li>
/// </ul>
- (void)setExperienceConfiguration:(ExperienceConfiguration * _Nonnull)experienceConfiguration;
@end





@class UIViewController;

@interface PresenceSDK (SWIFT_EXTENSION(PresenceSDK))
- (void)startMFAValidationOn:(UIViewController * _Nonnull)controller additionalProperties:(NSDictionary<NSString *, id> * _Nonnull)additionalProperties success:(void (^ _Nonnull)(NSString * _Nonnull))success failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
@end




@interface PresenceSDK (SWIFT_EXTENSION(PresenceSDK))
/// Helper function to get SDK version string
/// important:
/// An empty string will be returned if the version is unknown.
///
/// returns:
/// The version number for PresenceSDK.
- (NSString * _Nonnull)getVersionNumber SWIFT_WARN_UNUSED_RESULT;
/// Method to get the logged in user’s information.
/// \param backendName The specified backend name where the SDK will retrive member information from.
///
/// \param completion Completion block to be called containing possible member and error imformation.
///
/// \param member An optional PresenceMember object returned in the completion block callback.
///
/// \param error If PresenceSDK failed to retrive member information, an error will returned in the completion block callback.
///
- (void)getMemberInfoWithBackendName:(enum BackendName)backendName completion:(void (^ _Nonnull)(id <PresenceMember> _Nullable, NSError * _Nullable))completion;
/// Display modally a View Controller with order information for the given identifier.
/// Shows events if the particular order is not found.
- (void)displayOrderWithOrderId:(NSString * _Nonnull)orderId SWIFT_DEPRECATED_MSG("", "jumpToOrderOrEventWithId:");
/// Display modally a View Controller with order/event information for the given identifier.
/// Shows events if the particular order is not found.
- (void)jumpToOrderOrEventWithId:(NSString * _Nonnull)id;
/// Display modally a View Controller with order/event information for the given identifier.
/// Shows events if the particular order/event is not found.
- (void)jumpToOrderOrEventWithId:(NSString * _Nonnull)id type:(enum PresenceSDKIdType)type;
@end



enum PresenceSDKLoginButtons : NSInteger;

@interface PresenceSDK (SWIFT_EXTENSION(PresenceSDK))
/// Property to choose an available action button for Team account on the Login Screen.
/// Defauilt value is LoginButtons.forgotPassword
@property (nonatomic) enum PresenceSDKLoginButtons loginButton;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, PresenceSDKLoginButtons, "LoginButtons", open) {
  PresenceSDKLoginButtonsForgotPassword = 0,
  PresenceSDKLoginButtonsCreateAccount = 1,
};

@class PresenceSDKView;
@class UIImage;
enum SDKTheme : NSInteger;
enum SDKEnvironment : NSInteger;

@interface PresenceSDK (SWIFT_EXTENSION(PresenceSDK))
/// Method for configuring PresenceSDK for Teams.
/// \param consumerKey This is the Consumer Key associated with you App on developer.ticketmaster.com
///
/// \param displayName The name that will be displayed on the login page in the SDK for the Team, this is optional for Host only apps
///
/// \param useNewAccountsManager Configures the SDK to use new accounts manager for password reset flow if your Team has switched to new acccounts manager.
///
- (void)setConfigWithConsumerKey:(NSString * _Nonnull)consumerKey displayName:(NSString * _Nullable)displayName useNewAccountsManager:(BOOL)useNewAccountsManager;
/// Method for checking configuration of PresenceSDK for Teams
/// \param success Called if configuration was readed from cache or returned from Apigee, main queue, start(…) should be called after this call
///
/// \param failure Called if configuration failed (e.g. no Internet on first launch), Should be taken into account during SDK integration.
///
- (void)checkConfigWithSuccess:(void (^ _Nonnull)(void))success failure:(void (^ _Nonnull)(NSError * _Nullable))failure;
/// Method for initializing and launching PresenceSDK.
/// \param presenceSDKView Reference to main PresenceSDKView which will display user tickets.
///
/// \param loginDelegate Reference to object of the class that is implementing PresenceLoginDelegate.
///
- (void)startWithPresenceSDKView:(PresenceSDKView * _Nullable)presenceSDKView loginDelegate:(id <PresenceLoginDelegate> _Nonnull)loginDelegate;
/// Method for configuring Team Apps branding color in PresenceSDK. This branding color will be used
/// on various UI elements of the SDK to provide a custom look for Team apps.
/// For customizing colors of specific UI elements use the <code>setBrandingColors(_:BrandingColors)</code> method.
/// \param color Branding color to be used in the SDK.
///
- (void)setBrandingColorWithColor:(UIColor * _Nonnull)color SWIFT_DEPRECATED_MSG("Use `setBrandingColors` method instead.");
/// Method for configuring Team Apps branding colors in PresenceSDK. These branding colors will be used
/// on various UI elements of the SDK to provide a custom look for Team apps.
/// \param brandingColors Customize colors by overriding properties of the <code>BrandingColors</code> class.
///
- (void)setBrandingColors:(BrandingColors * _Nonnull)brandingColors;
/// Method for configuring Team Apps logo in PresenceSDK.
/// \param image Image to be used in the SDK as logo.
///
- (void)setLogo:(UIImage * _Nullable)image;
/// Method for configuring Team Apps theme color in PresenceSDK. This theme color will be used
/// on various UI elements of the SDK to provide a custom look for Team apps.
/// \param theme Theme to be used in the SDK.
///
- (void)setThemeWithTheme:(enum SDKTheme)theme;
- (void)setEnvironmentWithSdkEnvironment:(enum SDKEnvironment)sdkEnvironment;
@end




@interface PresenceSDK (SWIFT_EXTENSION(PresenceSDK))
/// Method to log out user from all the logged-in accounts
- (void)logOutWithCompletion:(void (^ _Nonnull)(BOOL, NSError * _Nullable, BOOL, NSError * _Nullable))completion;
/// Method to log out user from all the logged-in accounts (w/o parameters for objc compatibility)
- (void)logOut;
/// Method to log out user from Ticketmaster account
- (void)logOutHostWithSuccess:(void (^ _Nonnull)(void))success failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
/// Method to log out user from Team account
- (void)logOutTeamWithSuccess:(void (^ _Nonnull)(void))success failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
- (void)resetPasswordForHostWithSuccess:(void (^ _Nonnull)(NSString * _Nonnull))success failure:(void (^ _Nonnull)(NSError * _Nullable, BOOL))failure token:(NSString * _Nullable)token;
/// Method to login into Host without going via the Login Selector screen
/// You can receive updates for the login process by confirming to PresenceLoginDelegate protocol
- (void)loginToHostWithCompletion:(void (^ _Nullable)(BOOL))completion;
- (void)loginToHostWithMaQueryParams:(NSDictionary<NSString *, NSString *> * _Nonnull)maQueryParams completion:(void (^ _Nullable)(BOOL))completion;
/// Method to login via Webview Login
/// <ul>
///   <li>
///     Parameter:
///     <ul>
///       <li>
///         backendName: Host or AccountManager
///       </li>
///     </ul>
///   </li>
/// </ul>
/// You can receive updates for the login process by confirming to PresenceLoginDelegate protocol
- (void)loginTo:(enum BackendName)backendName completion:(void (^ _Nullable)(BOOL))completion;
- (void)loginTo:(enum BackendName)backendName maQueryParams:(NSDictionary<NSString *, NSString *> * _Nonnull)maQueryParams completion:(void (^ _Nullable)(BOOL))completion;
/// Method for getting a valid OAUTH Access Token
/// \param backendName Token for Host or AccountManager
///
/// \param success This block will be called when a valid token is fetched successfully, the success block will provide a valid access token.
///
/// \param failure This block will be called when there is some error fetching the token, the failure block will provide an error object.
///
- (void)getAccessTokenWithBackendName:(enum BackendName)backendName success:(void (^ _Nonnull)(NSString * _Nonnull))success failure:(void (^ _Nonnull)(NSError * _Nullable, BOOL))failure;
- (void)getAccessTokenWithBackendName:(enum BackendName)backendName maQueryParams:(NSDictionary<NSString *, NSString *> * _Nonnull)maQueryParams success:(void (^ _Nonnull)(NSString * _Nonnull))success failure:(void (^ _Nonnull)(NSError * _Nullable, BOOL))failure;
/// Method to check if user is logged in any of the services i.e Host or Accounts Manager, and has a valid access token available.
///
/// returns:
/// True if user is logged in any of the services i.e Host or Accounts Manager and has valid access token available, otherwise returns false.
- (BOOL)isLoggedIn SWIFT_WARN_UNUSED_RESULT;
/// Method to check if user is logged in Host, and has a valid access token available.
///
/// returns:
/// True if user is logged in Host and has a valid access token available, otherwise returns false.
- (BOOL)isLoggedIntoHost SWIFT_WARN_UNUSED_RESULT;
/// Method to check if user is logged in Accounts Manager, and has a valid access token available.
///
/// returns:
/// True if user is logged in Accounts Manager and has a valid access token available, otherwise returns false.
- (BOOL)isLoggedIntoTeam SWIFT_WARN_UNUSED_RESULT;
/// Method to check if user has signed into any of the backend services i.e Host or Accounts Manager.
///
/// returns:
/// True if user is signed into any of the services, but that does not mean that access tokens are valid, otherwise returns false.
- (BOOL)hasUserSignedIn SWIFT_WARN_UNUSED_RESULT;
/// Method to check if user is signed into Host.
///
/// returns:
/// True if user is signed into Host, but that does not mean that access tokens are valid, otherwise returns false.
- (BOOL)hasUserSignedInHost SWIFT_WARN_UNUSED_RESULT;
/// Method to check if user is signed into Accounts Manager.
///
/// returns:
/// True if user is signed into Accounts Manager, but that does not mean that access tokens are valid, otherwise returns false.
- (BOOL)hasUserSignedInTeam SWIFT_WARN_UNUSED_RESULT;
@end

@class NSCoder;
@class UIWindow;

/// Main UIView class for embedding and displaying user tickets from PresenceSDK. Your UIView that is going to display PresenceSDK should be
/// an instance of this class.
SWIFT_CLASS("_TtC11PresenceSDK15PresenceSDKView")
@interface PresenceSDKView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)rect OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
- (void)willMoveToWindow:(UIWindow * _Nullable)newWindow;
- (void)didMoveToWindow;
- (void)refreshView;
@end



/// Switches between Testing and release builds/options
typedef SWIFT_ENUM(NSInteger, SDKEnvironment, open) {
/// Development
  SDKEnvironmentDevelopment = 0,
/// Pre Production
  SDKEnvironmentPreProduction = 1,
/// Staging
  SDKEnvironmentStaging = 2,
/// Production
  SDKEnvironmentProduction = 3,
};

/// Switches between app themes
/// <ul>
///   <li>
///     Light: Important UI elements will be colored white.
///   </li>
///   <li>
///     Dark: Important UI elements will be colored black.
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, SDKTheme, open) {
/// Important UI elements will be colored white.
  SDKThemeLight = 0,
/// Important UI elements will be colored black.
  SDKThemeDark = 1,
};





















































































#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
