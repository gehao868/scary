//
//  EditBugViewController.h
//  ScaryBugs
//
//  Created by Ray Wenderlich on 8/24/10.
//  Copyright 2010 Ray Wenderlich. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RateView.h"

@class ScaryBugDoc;
@class DSActivityView;

@interface EditBugViewController : UIViewController <UITextFieldDelegate, RateViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    ScaryBugDoc *_bugDoc;
    UITextField *_titleField;
    UIImageView *_imageView;
    RateView *_rateView;
    UIImagePickerController *_picker;
    DSActivityView *_activityView;
    NSOperationQueue *_queue;
}

@property (retain) ScaryBugDoc *bugDoc;
@property (retain) IBOutlet UITextField *titleField;
@property (retain) IBOutlet UIImageView *imageView;
@property (retain) IBOutlet RateView *rateView;
@property (retain) UIImagePickerController *picker;
@property (retain) DSActivityView *activityView;
@property (retain) NSOperationQueue *queue;

- (IBAction)titleFieldValueChanged:(id)sender;
- (IBAction)addPictureTapped:(id)sender;

@end
