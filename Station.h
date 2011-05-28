//
//  Station.h
//  RoutesyBART
//
//  Created by Peter Shearer on 1/17/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Station : NSObject {
	NSString *stationId;
	NSString *name;
	float latitude;
	float longitude;
	float distance;
}

@property (copy) NSString *stationId;
@property (copy) NSString *name;
@property float latitude;
@property float longitude;
@property float distance;

@end
