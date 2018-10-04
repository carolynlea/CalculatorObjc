//
//  CLSStack.m
//  CLSRPNCalculator
//
//  Created by Carolyn Lea on 10/4/18.
//  Copyright © 2018 Carolyn Lea. All rights reserved.
//

#import "CLSStack.h"
@interface CLSStack ()

@property NSMutableArray *values;

@end

@implementation CLSStack


-(instancetype)initWithArray:(NSArray *)calcArray
{
    self = [super init];
    if (self)
    {
        _values = [NSMutableArray copy];
    }
    return self;
}

-(void)peek
{
    
}

-(double)push:(double)value
{
    [_values addObject: value];
}

-(void)pop
{
    
}

@end
