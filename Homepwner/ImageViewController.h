//
//  ImageViewController.h
//  Homepwner
//
//  Created by Jeff Chang on 10/29/12.
//  Copyright (c) 2012 Jeff Chang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageViewController : UIViewController
{
    __weak IBOutlet UIImageView *imageView;
    
    __weak IBOutlet UIScrollView *scrollView;
}
@property (nonatomic, strong) UIImage *image;
@end
