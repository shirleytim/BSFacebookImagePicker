//
//  CXAppDelegate.h
//  FBAlbumPicker
//
//  Created by Brad Smith on 1/22/13.
//  Copyright (c) 2013 Brad Smith. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CXFacebookImagePickerController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, CXFacebookImagePickerDelegate> {
  UIImageView *imageView;
}
@property (strong, nonatomic) UIWindow *window;

@end
