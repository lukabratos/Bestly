//
//  LBViewController.m
//  Bestly
//
//  Created by Luka Bratoš on 14/01/14.
//  Copyright (c) 2014 Luka. All rights reserved.
//

#import "LBViewController.h"

#pragma message ("Insert Experiment ID")
static NSString *const kTestButtonTapped = @"";

@interface LBViewController ()

@end

@implementation LBViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [Bestly runExperimentWithID:kTestButtonTapped A:^{
        [self.testButton setTitle:@"Hi!" forState:UIControlStateNormal];
    } B:^{
        [self.testButton setTitle:@"Hello!" forState:UIControlStateNormal];
    }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)testButtonTapped:(id)sender {
    UIAlertView *buttonTappedAlert = [[UIAlertView alloc] initWithTitle:@"Info" message:@"Button tapped!" delegate:self cancelButtonTitle:@"Cool!" otherButtonTitles:nil, nil];
    [buttonTappedAlert show];
}

@end
