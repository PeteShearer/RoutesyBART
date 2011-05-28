//
//  Prediction.h
//  RoutesyBART
//
//  Created by Peter Shearer on 1/17/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Prediction : NSObject {
	NSString *destination;
	NSString *estimate;
}

@property (copy) NSString *destination;
@property (copy) NSString *estimate;

@end
