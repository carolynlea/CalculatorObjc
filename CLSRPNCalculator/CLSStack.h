//
//  CLSStack.h
//  CLSRPNCalculator
//
//  Created by Carolyn Lea on 10/4/18.
//  Copyright © 2018 Carolyn Lea. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CLSStack : NSObject

-(double)push:(double)value;
-(void)pop;
-(void)peek;

-(instancetype)initWithArray:(NSArray *)array;



@end

NS_ASSUME_NONNULL_END
