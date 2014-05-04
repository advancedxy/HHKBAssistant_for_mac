//
//  AppDelegate.h
//  HHKBAssistant
//
//  Created by 周 涵 on 2014/05/04.
//  Copyright (c) 2014年 hanks. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    NSStatusItem * statusItem;
    AuthorizationRef myAuthRef;
}

@property (assign) IBOutlet NSMenu *statusMenu;
@property (weak) IBOutlet NSMenuItem *kbChangeMenu;
@property BOOL kbStatus;
@property NSString *kbKextIdentifier;

@end
