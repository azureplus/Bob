//
//  NSAttributedString+ZY.h
//  ifanyi
//
//  Created by ripper on 2019/11/12.
//  Copyright © 2019 ripperhe. All rights reserved.
//

#import <AppKit/AppKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSAttributedString (ZY)

+ (NSAttributedString *)zy_attributedStringWithString:(NSString *)text font:(NSFont *)font color:(NSColor *)color;

@end

NS_ASSUME_NONNULL_END
