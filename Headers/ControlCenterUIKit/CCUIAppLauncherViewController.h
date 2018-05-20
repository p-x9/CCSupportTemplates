/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 16, 2018 at 2:00:09 PM Central European Summer Time
* Operating System: Version 11.1.2 (Build 15B202)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@class SBFApplication, SCUIAssetProvider, CCUIAppLauncherModule;

@interface CCUIAppLauncherViewController : CCUIMenuModuleViewController {

	SBFApplication* _application;
	SCUIAssetProvider* _assetProvider;
	CCUIAppLauncherModule* _module;

}

@property (assign,nonatomic,weak) CCUIAppLauncherModule * module;              //@synthesize module=_module - In the implementation block
-(CCUIAppLauncherModule *)module;
-(void)viewDidLoad;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(void)_updateApplicationShortcutsActions;
-(void)_addActionForShortcutItem:(id)arg1 ;
-(void)_activateApplicationForShortcutItem:(id)arg1 ;
-(void)setModule:(CCUIAppLauncherModule *)arg1 ;
@end

