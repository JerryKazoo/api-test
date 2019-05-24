//
//  DApiView.h
//  DApi
//
//  Created by Jacky Cho on 25/2/2019.
//  Copyright © 2019 Kazoo. All rights reserved.
//


#import <DApi/DApiDelegate.h>

//To use DApi, you can either implement a view controller subclassing to DApiViewController (which adds a DApiView to itself),
//or add a DApiView to the view controller directly by yourself.

//When you implement DApi through DApiView, you will need to set the delegate manually to an object conforming to DApiDelegate
//and implement the protocol methods within the delegate object.
@interface DApiView : UIView<DApiDelegate>


@property (nonatomic) id<DApiDelegate> delegate;

//Default false.
//If true, touch events will be passed to next responder.  (For unity support)
@property (nonatomic, assign) bool forwardTouchEvents;


@end
