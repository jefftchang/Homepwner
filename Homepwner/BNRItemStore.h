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
    NSMutableArray *allAssetTypes;
    NSManagedObjectContext *context;
    NSManagedObjectModel *model;
}

+ (BNRItemStore *)sharedStore;
- (NSArray *)allItems;
- (BNRItem *)createItem;
- (void)removeItem: (BNRItem *)p;
- (void)moveItemAtIndex: (int)from toIndex:(int)to;
- (NSString *)itemArchivePath;
- (BOOL)saveChanges;
- (void)loadAllItems;
- (NSArray *)allAssetTypes;

@end
