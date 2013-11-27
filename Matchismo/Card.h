//
//  Card.h
//  Card Game
//
//  Created by Mike on 11/26/13.
//  Copyright (c) 2013 Mike. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic) BOOL chosen;
@property (nonatomic) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
