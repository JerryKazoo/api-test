//
//  DApi.h
//  DApi
//
//  Created by Jacky Cho on 22/2/2019.
//  Copyright © 2019 Kazoo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <DApi/DApiDelegate.h>
#import <DApi/DApiView.h>
#import <DApi/DApiViewController.h>

@interface DApi : NSObject

+ (NSString *)version; //1.0.0

//Default disabled.
//Set it to enabled if the application does not support iPad Pro 11 aspect ratio (i.e. not full screen).
+ (void)setMarginFixEnabled:(BOOL)enabled;

@end

