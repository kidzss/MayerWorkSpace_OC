//
//  AppDelegate.h
//  EmptyDataSetUIScrollview
//
//  Created by APP on 2017/2/20.
//  Copyright © 2017年 CHLMA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

