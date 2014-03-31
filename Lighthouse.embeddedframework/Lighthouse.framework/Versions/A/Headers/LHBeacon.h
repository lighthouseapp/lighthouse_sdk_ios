//
//  LHBeacon.h
//  Lighthouse
//
//  Created by grinch on 20/11/2013.
//  Copyright (c) 2013 Jamgo. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LHBeaconRegion;

typedef NS_ENUM(NSInteger, LHProximity) {
	LHProximityUnknown,
	LHProximityImmediate,
	LHProximityNear,
	LHProximityFar
};

@interface LHBeacon : NSObject

@property (nonatomic, strong, readonly) NSUUID *uuid;
@property (nonatomic, strong, readonly) NSNumber *major;
@property (nonatomic, strong, readonly) NSNumber *minor;
@property (nonatomic, readonly) LHProximity proximityTrigger;
@property (nonatomic, strong, readonly) NSString *hashCode;
@property (nonatomic, strong, readonly) NSString *hashCodeWithProximity;
@property (nonatomic) NSInteger rssi;

- (id)initWithUUID:(NSUUID *)uuid major:(NSNumber *)major minor:(NSNumber *)minor proximityTrigger:(LHProximity)proximityTrigger rssi:(NSInteger)rssi;
- (BOOL)isInRegion:(LHBeaconRegion *)region;

@end
