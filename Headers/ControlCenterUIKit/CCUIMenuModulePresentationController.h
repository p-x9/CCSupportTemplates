/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 16, 2018 at 2:00:09 PM Central European Summer Time
* Operating System: Version 11.1.2 (Build 15B202)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPresentationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString;

@interface CCUIMenuModulePresentationController : UIPresentationController <UIGestureRecognizerDelegate>

@property (readonly) NSUInteger hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)shouldPresentInFullscreen;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionWillBegin;
-(id)_menuModuleViewController;
-(void)_handleBackgroundTap:(id)arg1 ;
@end

