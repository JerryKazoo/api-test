//
//  Drift.h
//  DApi
//
//  Created by Jacky Cho on 22/2/2019.
//  Copyright © 2019 Kazoo. All rights reserved.
//


//Error values returned from drift request callbacks.
typedef enum RequestError : int {
    RequestErrorCancelled = -1,             //The drift object is destroyed (e.g. left the screen) before completing the request.
    RequestErrorTimeout = -2,               //Failed to receive any signal from the drift before timeout.
    RequestErrorReadFailed = -3,            //Failed to receive a valid signal from the drift when performing a read request.
    RequestErrorMultipleRequests = -4,      //Trying to send a request to the drift before the previous request has completed.
    RequestErrorInvalidAddr = -5,           //Trying to send a request with an invalid address value.
    RequestErrorInvalidData = -6,           //Trying to send a request with an invalid data value.
    
} RequestError;



@interface Drift : NSObject {
    
}

//A unique ID for the Drift object.
//The first detected drift with have an instanceId value = 0, the second drift with have a value = 1 and etc.
//This value is guaranteed to be the same throughout the life cycle of a drift, from driftDetected to driftEnded,
//and is guaranteed to be unique for different drift instance (unless overflowed uint).
@property (nonatomic, assign, readonly) uint instanceId;
//Screen pixel coordinates, (0, 0) at top left.
@property (nonatomic) CGPoint center;
//Rotation in radian, range = [0 ..2PI), initial side on positive y-axis, clockwise.
@property (nonatomic) double rotation;


//Read data from the drift.
//Address ranges from 0 to 15.
//Callback returns the data stored at address location, or a negative value error code.
- (void)readFromDriftAddress:(uint)address Callback:(void (^)(int))callback;
//Write data to the drift.
//Address ranges from 1 to 15 (Address 0 stores the unique id of the drift and is read-only).
//Data ranges from 0 to 65535.
//Callback returns 1 if request has successed, or a negative error code.
- (void)writeToDriftAddress:(uint)address Data:(uint)data Callback:(void (^)(int))callback;

@end

