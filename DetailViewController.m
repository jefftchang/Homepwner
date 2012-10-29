//
//  DetailViewController.m
//  Homepwner
//
//  Created by Jeff Chang on 10/28/12.
//  Copyright (c) 2012 Jeff Chang. All rights reserved.
//

#import "DetailViewController.h"
#import "BNRItem.h"

@implementation DetailViewController
@synthesize item;
- (void) setItem:(BNRItem *)i
{
    item = i;
    [[self navigationItem] setTitle:[item itemName]];
}
- (void) viewDidLoad
{
    [super viewDidLoad];
    [[self view] setBackgroundColor:[UIColor groupTableViewBackgroundColor]];
}

- (void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    [nameField setText:[item itemName]];
    [serialNumberField setText:[item serialNumber]];
    [valueField setText:[NSString stringWithFormat:@"%d", [item valueInDollars]]];
    
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateStyle:NSDateFormatterMediumStyle];
    [dateFormatter setTimeStyle:NSDateFormatterNoStyle];
    [dateLabel setText:[dateFormatter stringFromDate:[item dateCreated]]];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
    [[self view] endEditing:YES];
    [item setItemName:[nameField text]];
    [item setSerialNumber:[serialNumberField text]];
    [item setValueInDollars:[[valueField text] intValue]];
}

- (void)viewDidUnload {
    nameField = nil;
    serialNumberField = nil;
    valueField = nil;
    dateLabel = nil;
    [super viewDidUnload];
}
@end
