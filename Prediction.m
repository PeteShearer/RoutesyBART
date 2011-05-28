//
//  Prediction.m
//  RoutesyBART
//
//  Created by Peter Shearer on 1/17/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "Prediction.h"


@implementation Prediction

@synthesize destination, estimate;

- (void) dealloc {
	[destination release];
	[estimate release];
	[super dealloc];
}

@end
