//
//  HomepwnerItemCell.h
//  Homepwner
//
//  Created by Jeff Chang on 10/29/12.
//  Copyright (c) 2012 Jeff Chang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomepwnerItemCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *serialNumberLabel;
@property (weak, nonatomic) IBOutlet UILabel *valueLabel;
@property (weak, nonatomic) IBOutlet UIImageView *thumbnailView;
- (IBAction)showImage:(id)sender;
@property (weak, nonatomic) id controller;
@property (weak, nonatomic) UITableView *tableView;


@end
