//
//  CLSCalculator.h
//  CLSRPNCalculator
//
//  Created by Carolyn Lea on 10/4/18.
//  Copyright © 2018 Carolyn Lea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CLSStack.h"

NS_ASSUME_NONNULL_BEGIN

@interface CLSCalculator : NSObject

typedef NS_ENUM(NSInteger, SomeTypes)
{
    Type1 = 1,
    Type2,
    Type3
};

-(void)pushNumber:(double)value;
-(void)applyOperator:([SomeTypes])operator;
-(void)clear;
@property NSNumber *topValue;
@property CLSStack *stack;

@end

NS_ASSUME_NONNULL_END
