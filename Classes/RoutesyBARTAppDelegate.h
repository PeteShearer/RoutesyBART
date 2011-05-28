//
//  RoutesyBARTAppDelegate.h
//  RoutesyBART
//
//  Created by Peter Shearer on 1/17/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

@interface RoutesyBARTAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

