//
//  BNRImageStore.h
//  Homepwner
//
//  Created by Jeff Chang on 10/29/12.
//  Copyright (c) 2012 Jeff Chang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRImageStore : NSObject
{
    NSMutableDictionary *dictionary;
}
+ (BNRImageStore *) sharedStore;

- (void)setImage: (UIImage *)i forKey: (NSString *) s;
- (UIImage *)imageForKey: (NSString *)s;
- (void)deleteImageForKey: (NSString *)s;

@end
