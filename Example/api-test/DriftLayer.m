//
//  DriftLayer.m
//  DApiSample
//
//  Created by Jacky Cho on 29/4/2019.
//  Copyright © 2019 Kazoo. All rights reserved.
//

#import "DriftLayer.h"

@implementation DriftLayer {
    CATextLayer *textLayer;
}

-(id) init {
    //self = [super initWithFrame:NOTE_LENGTH_FRAME];
    self = [super init];
    if (self) {
        self.bounds = CGRectMake(0, 0, 300, 300);
        self.cornerRadius = 150;
        self.backgroundColor = [UIColor blackColor].CGColor;
        self.delegate = self;
        
        textLayer = [CATextLayer layer];
        textLayer.frame = CGRectMake(-150, -30, 600, 30);
        textLayer.alignmentMode = kCAAlignmentCenter;
        textLayer.foregroundColor = [UIColor blackColor].CGColor;
        textLayer.fontSize = 16;
        textLayer.delegate = self;
        [self addSublayer:textLayer];
    }
    
    return self;
}


- (void)setText:(NSString *)t {
    textLayer.string = t;
}

- (id<CAAction>)actionForLayer:(CALayer *)layer forKey:(NSString *)event {
    return (id)[NSNull null];
}


@end
