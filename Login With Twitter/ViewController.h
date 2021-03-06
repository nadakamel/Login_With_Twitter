//
//  ViewController.h
//  Login With Twitter
//
//  Created by Nada Kamel Abdelhady on 4/27/15.
//  Copyright (c) 2015 Nada Kamel Abdelhady. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)btnTwitterLogin:(id)sender;

- (void) displaySuccessMessage;

- (void)displayErrorMessage;

- (void) writeToTextFileWithAppend:(NSString*)text :(NSString*)mood;

- (NSMutableArray*) convertFromTxtToPlist:(NSString*)fileName;

@end

