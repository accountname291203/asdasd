#import <Foundation/Foundation.h>

#if __has_attribute(swift_private)
#define AC_SWIFT_PRIVATE __attribute__((swift_private))
#else
#define AC_SWIFT_PRIVATE
#endif

/// The "sketchy" asset catalog image resource.
static NSString * const ACImageNameSketchy AC_SWIFT_PRIVATE = @"sketchy";

/// The "solarium" asset catalog image resource.
static NSString * const ACImageNameSolarium AC_SWIFT_PRIVATE = @"solarium";

/// The "unknown" asset catalog image resource.
static NSString * const ACImageNameUnknown AC_SWIFT_PRIVATE = @"unknown";

#undef AC_SWIFT_PRIVATE
