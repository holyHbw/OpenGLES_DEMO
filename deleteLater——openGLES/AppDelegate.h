//
//  AppDelegate.h
//  deleteLater——openGLES
//
//  Created by 黄博闻 on 16/8/15.
//  Copyright © 2016年 黄博闻. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

