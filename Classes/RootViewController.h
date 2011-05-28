//
//  RootViewController.h
//  RoutesyBART
//
//  Created by Peter Shearer on 1/17/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>


@interface RootViewController : UITableViewController {
	NSMutableArray *stations;	
}

@property (nonatomic,retain) NSMutableArray *stations;

@end
