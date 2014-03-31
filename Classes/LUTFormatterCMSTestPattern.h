//
//  LUTFormatterNukeCMSTestPattern.h
//  
//
//  Created by Greg Cotten on 3/30/14.
//
//

#import "LUTFormatter.h"

@interface LUTFormatterCMSTestPattern : LUTFormatter

#if TARGET_OS_IPHONE
+ (UIImage *)imageFromLUT:(LUT *)lut;
+ (LUT *)LUTFromImage:(UIImage *)image;
#elif TARGET_OS_MAC
+ (NSImage *)imageFromLUT:(LUT *)lut;
+ (LUT *)LUTFromImage:(NSImage *)image;
#endif

@end