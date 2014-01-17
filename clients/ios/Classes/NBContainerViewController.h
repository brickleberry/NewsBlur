//
//  NBContainerViewController.h
//  NewsBlur
//
//  Created by Roy Yang on 7/24/12.
//  Copyright (c) 2012 NewsBlur. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NewsBlurAppDelegate;

@interface NBContainerViewController : UIViewController
<UIPopoverControllerDelegate> {
    NewsBlurAppDelegate *appDelegate;
    
    BOOL interactiveOriginalTransition;
}

@property (readonly) BOOL storyTitlesOnLeft;
@property (readwrite) BOOL interactiveOriginalTransition;
@property (readonly) int storyTitlesYCoordinate;
@property (nonatomic) CALayer *leftBorder;
@property (nonatomic) CALayer *rightBorder;
@property (atomic, strong) IBOutlet NewsBlurAppDelegate *appDelegate;


- (void)syncNextPreviousButtons;

- (void)adjustDashboardScreen;
- (void)adjustFeedDetailScreen;
- (void)adjustFeedDetailScreenForStoryTitles;

- (void)transitionToFeedDetail;
- (void)transitionToFeedDetail:(BOOL)resetLayout;
- (void)transitionToOriginalView;
- (void)transitionFromOriginalView;
- (void)interactiveTransitionFromFeedDetail:(CGFloat)percentage;
- (void)transitionFromFeedDetail;
- (void)transitionFromFeedDetail:(BOOL)resetLayout;
- (void)transitionToShareView;
- (void)transitionFromShareView;

- (void)dragStoryToolbar:(int)yCoordinate;
- (void)showUserProfilePopover:(id)sender;
- (void)showFeedMenuPopover:(id)sender;
- (void)showFeedDetailMenuPopover:(id)sender;
- (void)showFontSettingsPopover:(id)sender;
- (void)showTrainingPopover:(id)sender;
- (void)showSendToPopover:(id)sender;
- (void)showSitePopover:(id)sender;
- (void)hidePopover;
@end
