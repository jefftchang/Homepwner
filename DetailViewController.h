//
//  DetailViewController.h
//  Homepwner
//
//  Created by Jeff Chang on 10/28/12.
//  Copyright (c) 2012 Jeff Chang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BNRItem;
@interface DetailViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UITextFieldDelegate>
{
    __weak IBOutlet UIImageView *imageView;
    __weak IBOutlet UITextField *nameField;
    __weak IBOutlet UITextField *serialNumberField;
    __weak IBOutlet UITextField *valueField;
    __weak IBOutlet UILabel *dateLabel;
}
- (IBAction)backgroundTapped:(id)sender;
- (IBAction)takePicture:(id)sender;
@property (nonatomic, strong) BNRItem *item;
@end
