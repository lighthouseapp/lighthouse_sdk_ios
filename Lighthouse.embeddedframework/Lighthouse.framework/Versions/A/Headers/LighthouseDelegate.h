//
//  LighthouseDelegate.h
//  Lighthouse
//
//  Created by grinch on 25/01/2014.
//  Copyright (c) 2014 Jamgo. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol LighthouseDelegate <NSObject>

- (void)lighthouseUserDidExecuteCallToAction:(id)actionDetails forData:(NSDictionary *)data;

@end
