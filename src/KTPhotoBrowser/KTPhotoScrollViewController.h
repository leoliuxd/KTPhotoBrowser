//
//  KTPhotoScrollViewController.h
//  KTPhotoBrowser
//
//  Created by Kirby Turner on 2/4/10.
//  Copyright 2010 White Peak Software Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KTPhotoViewController;
@protocol KTPhotoBrowserDataSource;

@interface KTPhotoScrollViewController : UIViewController<UIScrollViewDelegate, UIActionSheetDelegate> {
   id <KTPhotoBrowserDataSource> dataSource_;
   UIScrollView *scrollView_;
   UIToolbar *toolbar_;
   NSUInteger startWithIndex_;
   NSInteger pageCount_;
   
   KTPhotoViewController *currentPhoto_;
   KTPhotoViewController *nextPhoto_;
   
   UIStatusBarStyle statusBarStyle_;
   UIBarStyle navigationBarStyle_;
   BOOL translucent_;   // for the navigation and toolbars.
}

@property (nonatomic, assign) UIStatusBarStyle statusBarStyle;
@property (nonatomic, assign) UIBarStyle navigationBarStyle;
@property (nonatomic, assign, getter=isTranslucent) BOOL translucent;

- (id)initWithDataSource:(id <KTPhotoBrowserDataSource>)dataSource andStartWithPhotoAtIndex:(NSUInteger)index;

@end
