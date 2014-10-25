//
//  FHCrystalBall.m
//  CrystalBall
//
//  Created by Faris Halteh on 14/07/14.
//  Copyright (c) 2014 Faris. All rights reserved.
//

#import "FHCrystalBall.h"

@implementation FHCrystalBall

//overriding the getter for predictions property
-(NSArray* ) predictions {
    if(_predictions == nil){
        
        //create an array of predictions that holds all the predictions (in strings)
        NSString *option1 = @"It is certain, you must know about it babe";
        NSString *option2 = @"You have to think about it again!";
        NSString *option3 = @"It is doubtful";
        NSString *option4 = @"Unable to answer now.";
        NSString *option5 = @"My reply is no.";
        NSString *option6 = @"Definitely a yes!";
        NSString *option7 = @"Concentrate and ask again!";
        //call the property predictions declared in the header using self... !
        _predictions = [[NSArray alloc]initWithObjects: option1, option2, option3, option4, option5, option6, option7, nil ];
    }
    return _predictions;
}
-(NSString*) randomPrediction{
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
    }


@end
