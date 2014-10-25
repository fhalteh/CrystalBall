//
//  FHCrystalBall.h
//  CrystalBall
//
//  Created by Faris Halteh on 14/07/14.
//  Copyright (c) 2014 Faris. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FHCrystalBall : NSObject {
    
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;

-(NSString*) randomPrediction;

@end
