//
//  PlayingCard.h
//  Card Game
//
//  Created by Mike on 11/26/13.
//  Copyright (c) 2013 Mike. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card
@property(strong,nonatomic)NSString *suit;
@property(nonatomic)NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSInteger)maxRank;

@end
