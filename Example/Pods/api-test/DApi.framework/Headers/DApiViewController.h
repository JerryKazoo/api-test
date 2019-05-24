//
//  DApiViewController.h
//  DApi
//
//  Created by Jacky Cho on 25/2/2019.
//  Copyright © 2019 Kazoo. All rights reserved.
//

#import <DApi/DApiDelegate.h>

//To use DApi, you can either implement a view controller subclassing to DApiViewController (which adds a DApiView to itself),
//or add a DApiView to the view controller directly by yourself.

//When you implement DApi through DApiViewController, you will need to override the protocol methods in the view controller.
@interface DApiViewController : UIViewController<DApiDelegate>

@end
