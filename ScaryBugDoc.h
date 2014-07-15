//
//  ScaryBugDoc.h
//  ScaryBugs
//
//  Created by Ray Wenderlich on 8/24/10.
//  Copyright 2010 Ray Wenderlich. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ScaryBugData;

@interface ScaryBugDoc : NSObject {
    ScaryBugData *_data;
    UIImage *_thumbImage;
    UIImage *_fullImage;
    NSString *_docPath;    
}

@property (retain) ScaryBugData *data;
@property (retain) UIImage *thumbImage;
@property (retain) UIImage *fullImage;
@property (copy) NSString *docPath;

- (id)init;
- (id)initWithDocPath:(NSString *)docPath;
- (id)initWithTitle:(NSString*)title rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage:(UIImage *)fullImage;
- (void)saveData;
- (void)saveImages;
- (void)deleteDoc;

@end
