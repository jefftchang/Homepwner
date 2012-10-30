//
//  DetailViewController.h
//  Homepwner
//
//  Created by Jeff Chang on 10/28/12.
//  Copyright (c) 2012 Jeff Chang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BNRItem;
@interface DetailViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UITextFieldDelegate, UIPopoverControllerDelegate>
{
    __weak IBOutlet UIImageView *imageView;
    __weak IBOutlet UITextField *nameField;
    __weak IBOutlet UITextField *serialNumberField;
    __weak IBOutlet UITextField *valueField;
    __weak IBOutlet UILabel *dateLabel;
    UIPopoverController *imagePickerPopover;
    __weak IBOutlet UIButton *assetTypeButton;
}
- (IBAction)backgroundTapped:(id)sender;
- (IBAction)takePicture:(id)sender;
- (id)initForNewItem: (BOOL)isNew;
- (IBAction)showAssetTypePicker:(id)sender;
@property (nonatomic, strong) BNRItem *item;
@property (nonatomic, copy) void (^dismissBlock) (void);
@end
