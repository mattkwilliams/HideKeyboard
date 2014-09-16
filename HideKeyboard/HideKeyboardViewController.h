//
//  HideKeyboardViewController.h
//  HideKeyboard
//
//  Created by Matt on 9/15/14.
//  Copyright (c) 2014 Matt Williams. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HideKeyboardViewController : UIViewController

- (IBAction) doneEditing:(id) sender;

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;


@property (weak, nonatomic) IBOutlet UITextField *txtFieldA;
@property (weak, nonatomic) IBOutlet UITextField *txtFieldB;
@property (weak, nonatomic) IBOutlet UITextField *txtFieldC;
@property (weak, nonatomic) IBOutlet UITextField *txtFieldD;
@property (weak, nonatomic) IBOutlet UITextField *txtFieldE;

@end
