//
//  CLSDigitAccumulator.h
//  CLSRPNCalculator
//
//  Created by Carolyn Lea on 10/4/18.
//  Copyright © 2018 Carolyn Lea. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CLSDigitAccumulator : NSObject

-(void)addDigitWithNumericValue:(NSNumber *)digit;
-(void)addDecimalPoint;
-(void)clear;

@property (readonly) double doubleNumber;

@end

NS_ASSUME_NONNULL_END
