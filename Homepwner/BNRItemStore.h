//
//  BNRItemStore.h
//  Homepwner
//
//  Created by Jeff Chang on 10/26/12.
//  Copyright (c) 2012 Jeff Chang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BNRItem;
@interface BNRItemStore : NSObject
{
    NSMutableArray*allItems;
}

+ (BNRItemStore *)sharedStore;
- (NSArray *)allItems;
- (BNRItem *)createItem;

@end
