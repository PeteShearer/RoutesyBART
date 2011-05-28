//
//  Station.m
//  RoutesyBART
//
//  Created by Peter Shearer on 1/17/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "Station.h"


@implementation Station

@synthesize stationId, name, latitude, longitude, distance;

- (void) dealloc {
	[stationId release];
	[name release];
	[super dealloc];
}

@end
