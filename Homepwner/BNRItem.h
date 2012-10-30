//
//  BNRItem.h
//  Homepwner
//
//  Created by Jeff Chang on 10/29/12.
//  Copyright (c) 2012 Jeff Chang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface BNRItem : NSManagedObject

@property (nonatomic, retain) NSString * itemName;
@property (nonatomic, retain) NSData * thumbnailData;
@property (nonatomic, retain) NSString * imageKey;
@property (nonatomic) double dateCreated;
@property (nonatomic) int32_t valueInDollars;
@property (nonatomic, retain) NSString * serialNumber;
@property (nonatomic, strong) UIImage *thumbnail;
@property (nonatomic) double orderingValue;
@property (nonatomic, retain) NSManagedObject *assetType;

- (void)setThumbnailDataFromImage: (UIImage *) image;
@end
