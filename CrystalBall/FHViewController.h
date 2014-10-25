//
//  FHViewController.h
//  CrystalBall
//
//  Created by Faris Halteh on 11/07/14.
//  Copyright (c) 2014 Faris. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FHCrystalBall;

@interface FHViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *PredictButton;
@property (weak, nonatomic) IBOutlet UILabel *predictionLabel;
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;

// no longer needed @property (strong, nonatomic) NSArray *predictions;
//replaced with the Crystal Ball class that already has an array.

@property (strong, nonatomic) FHCrystalBall *ball;


/*
The colors array  - did it, it worked but now it's no longer needed!
@property (strong, nonatomic) NSArray *colors;
*/

// removed button - (IBAction)buttonPressed;

-(void) makePrediction;
-(void) makePredictionNull;


@end
