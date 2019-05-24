//
//  DApiDelegate.h
//  DApi
//
//  Created by Jacky Cho on 22/2/2019.
//  Copyright © 2019 Kazoo. All rights reserved.
//

#import <DApi/Drift.h>

@protocol DApiDelegate <NSObject>

@optional

//Triggered when a new drift is detected on the screen.
- (void)driftDetected:(Drift *)drift;
//Triggered when a detected drift has moved.
- (void)driftMoved:(Drift *)drift;
//Triggered when a detected drift has been removed from the screen.
- (void)driftEnded:(Drift *)drift;

@end
