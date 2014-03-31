//
//  Lighthouse.h
//  Lighthouse
//
//  Created by grinch on 08/11/2013.
//  Copyright (c) 2013 Jamgo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "LHBeacon.h"
#import "LighthouseDelegate.h"

@interface Lighthouse : NSObject

@property (nonatomic, weak) id<LighthouseDelegate> delegate;

+ (Lighthouse *)initWithClientKey:(NSString *)clientKey secretKey:(NSString *)secretKey;

- (void)start;

//
// NOTE:
// Uncomment this if you want to generate bogus events in order to run the thing in the simulator
//
// - (void)generateBogusBeaconEntryEvent;

    

@end