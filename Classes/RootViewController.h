//
//  RootViewController.h
//  RoutesyBART
//
//  Created by Peter Shearer on 1/17/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "PredictionTableViewController.h"


@interface RootViewController : UITableViewController {
	NSMutableArray *stations;	
	PredictionTableViewController *predictionController;
}

@property (nonatomic,retain) NSMutableArray *stations;
@property (nonatomic, retain) IBOutlet PredictionTableViewController *predictionController;

@end
