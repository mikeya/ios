//
//  Card.m
//  Card Game
//
//  Created by Mike on 11/26/13.
//  Copyright (c) 2013 Mike. All rights reserved.
//

#import "Card.h"

@interface Card()

@end

@implementation Card


- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards){
        if([card.contents isEqualToString:self.contents]){
            score = 1;
        }
    }
    
    
    
    return score;
}
@end
