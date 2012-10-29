//
//  ItemsViewController.m
//  Homepwner
//
//  Created by Jeff Chang on 10/26/12.
//  Copyright (c) 2012 Jeff Chang. All rights reserved.
//

#import "ItemsViewController.h"
#import "BNRItem.h"
#import "BNRItemStore.h"

@implementation ItemsViewController
- (id)init{
    self = [super initWithStyle:UITableViewStyleGrouped];
    if (self) {
        UINavigationItem *n = [self navigationItem];
        [n setTitle:@"Homepwner"];
        UIBarButtonItem *bbi = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemAdd target:self action:@selector(addNewItem:)];
        [[self navigationItem] setRightBarButtonItem:bbi];
        [[self navigationItem] setLeftBarButtonItem:[self editButtonItem]];
    }
    return self;
}

- (id)initWithStyle:(UITableViewStyle)style
{
    return [self init];
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return [[[BNRItemStore sharedStore] allItems] count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"UITableViewCell"];
    
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"UITableViewCell"];
    }
    BNRItem *p = [[[BNRItemStore sharedStore] allItems] objectAtIndex:[indexPath row]];
    [[cell textLabel] setText:[p description]];
    return cell;
}

- (IBAction)addNewItem:(id)sender
{
    BNRItem *newItem = [[BNRItemStore sharedStore] createItem];
    int lastRow = [[[BNRItemStore sharedStore] allItems] indexOfObject:newItem];
    NSIndexPath *ip = [NSIndexPath indexPathForRow:lastRow inSection:0];
    [[self tableView] insertRowsAtIndexPaths:[NSArray arrayWithObject:ip] withRowAnimation:UITableViewRowAnimationTop];
}

- (void)tableView: (UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)sourceIndexPath toIndexPath:(NSIndexPath *)destinationIndexPath
{
    [[BNRItemStore sharedStore] moveItemAtIndex:[sourceIndexPath row] toIndex:[destinationIndexPath row]];
}

- (void) tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    DetailViewController *detailViewController = [[DetailViewController alloc] init];
    
    NSArray *items = [[BNRItemStore sharedStore] allItems];
    BNRItem *selectedItem = [items objectAtIndex:[indexPath row]];
    [detailViewController setItem:selectedItem];
    
    
    [[self navigationController] pushViewController:detailViewController animated:YES];
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    [[self tableView] reloadData];
}
@end
