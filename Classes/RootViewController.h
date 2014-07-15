//
//  RootViewController.h
//  ScaryBugs
//
//  Created by Ray Wenderlich on 8/24/10.
//  Copyright Ray Wenderlich 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EditBugViewController;

@interface RootViewController : UITableViewController {
    NSMutableArray *_bugs;
    EditBugViewController *_editBugViewController;
}

@property (retain) NSMutableArray *bugs;
@property (retain) EditBugViewController *editBugViewController;

@end
