/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 25, 2018 at 11:29:33 PM Eastern European Standard Time
* Operating System: Version 11.1.2 (Build 15B202)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKit/UIViewController.h>
#import "UIPreviewInteractionDelegatePrivate.h"
#import "CCUISafeAppearancePropagationProvider.h"

@protocol CCUIContentModuleContainerViewControllerDelegate, CCUIContentModule, CCUIContentModuleContentViewController;
@class NSString, NSArray, UIViewController, UIView, CCUIContentModuleBackgroundView, CCUIContentModuleContentContainerView, UITapGestureRecognizer, UIPreviewInteraction;

@interface CCUIContentModuleContainerViewController : UIViewController <UIPreviewInteractionDelegatePrivate, UIGestureRecognizerDelegate, CCUISafeAppearancePropagationProvider> {

	BOOL _expanded;
	BOOL _contentModuleProvidesOwnPlatter;
	NSString* _moduleIdentifier;
	id<CCUIContentModuleContainerViewControllerDelegate> _delegate;
	NSArray* _topLevelBlockingGestureRecognizers;
	id<CCUIContentModule> _contentModule;
	UIViewController<CCUIContentModuleContentViewController>* _contentViewController;
	UIViewController* _backgroundViewController;
	UIView* _highlightWrapperView;
	CCUIContentModuleBackgroundView* _backgroundView;
	CCUIContentModuleContentContainerView* _contentContainerView;
	UIView* _contentView;
	UIView* _maskView;
	UITapGestureRecognizer* _tapRecognizer;
	UIPreviewInteraction* _previewInteraction;
	UIEdgeInsets _expandedContentEdgeInsets;

}

@property (nonatomic,copy) NSString * moduleIdentifier;                                                                    //@synthesize moduleIdentifier=_moduleIdentifier - In the implementation block
@property (nonatomic,retain) id<CCUIContentModule> contentModule;                                                          //@synthesize contentModule=_contentModule - In the implementation block
@property (nonatomic,retain) UIViewController<CCUIContentModuleContentViewController>* contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) UIViewController * backgroundViewController;                                                  //@synthesize backgroundViewController=_backgroundViewController - In the implementation block
@property (assign,nonatomic) BOOL contentModuleProvidesOwnPlatter;                                                         //@synthesize contentModuleProvidesOwnPlatter=_contentModuleProvidesOwnPlatter - In the implementation block
@property (nonatomic,retain) UIView * highlightWrapperView;                                                                //@synthesize highlightWrapperView=_highlightWrapperView - In the implementation block
@property (nonatomic,retain) CCUIContentModuleBackgroundView * backgroundView;                                             //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContentContainerView * contentContainerView;                                 //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                         //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * maskView;                                                                            //@synthesize maskView=_maskView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                                                       //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,retain) UIPreviewInteraction * previewInteraction;                                                    //@synthesize previewInteraction=_previewInteraction - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                              //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) UIEdgeInsets expandedContentEdgeInsets;                                                       //@synthesize expandedContentEdgeInsets=_expandedContentEdgeInsets - In the implementation block
@property (nonatomic,readonly) CCUIContentModuleContentContainerView * moduleContentView;
@property (assign,nonatomic,weak) id<CCUIContentModuleContainerViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * topLevelBlockingGestureRecognizers;                                               //@synthesize topLevelBlockingGestureRecognizers=_topLevelBlockingGestureRecognizers - In the implementation block
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy,readonly) NSString * description;
@property (copy,readonly) NSString * debugDescription;
@property (nonatomic,readonly) NSArray * childViewControllersForAppearancePropagation;
-(id)init;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(id<CCUIContentModuleContainerViewControllerDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CCUIContentModuleContainerViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)setContentViewController:(UIViewController<CCUIContentModuleContentViewController>*)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setMaskView:(UIView *)arg1 ;
-(UIView *)maskView;
-(void)viewWillLayoutSubviews;
-(void)setBackgroundView:(CCUIContentModuleBackgroundView *)arg1 ;
-(CCUIContentModuleBackgroundView *)backgroundView;
-(UIViewController<CCUIContentModuleContentViewController>*)contentViewController;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)isExpanded;
-(void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3 ;
-(void)previewInteractionDidCancel:(id)arg1 ;
-(BOOL)previewInteractionShouldBegin:(id)arg1 ;
-(id)_previewInteractionHighlighterForPreviewTransition:(id)arg1 ;
-(id)_previewInteraction:(id)arg1 viewControllerPresentationForPresentingViewController:(id)arg2 ;
-(BOOL)_previewInteractionShouldFinishTransitionToPreview:(id)arg1 ;
-(BOOL)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(UIPreviewInteraction *)previewInteraction;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
-(NSString *)moduleIdentifier;
-(void)expandModule;
-(void)dismissExpandedModuleAnimated:(BOOL)arg1 ;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(void)setContentContainerView:(CCUIContentModuleContentContainerView *)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(CCUIContentModuleContentContainerView *)contentContainerView;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 ;
-(NSArray *)topLevelBlockingGestureRecognizers;
-(BOOL)_shouldApplyBackgroundEffects;
-(id)initWithModuleIdentifier:(id)arg1 contentModule:(id)arg2 ;
-(void)setExpandedContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_closeExpandedModule;
-(void)_dismissModulePresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_configureForContentModuleGroupRenderingIfNecessary;
-(void)_findTopLevelGestureRecognizersForView:(id)arg1 installOnView:(id)arg2 ;
-(void)_addTopLevelGestureRecognizersFromViewAndSubviews:(id)arg1 toGestureRecognizers:(id)arg2 blockingGestureRecognizers:(id)arg3 ;
-(CGRect)_backgroundFrameForExpandedState;
-(CGRect)_contentFrameForExpandedState;
-(BOOL)_isForceTouchAvailable;
-(CGRect)_contentBoundsForExpandedState;
-(CGRect)_presentationFrameForExpandedState;
-(CGRect)_contentFrameForRestState;
-(void)_configureMaskViewIfNecessary;
-(CCUIContentModuleContentContainerView *)moduleContentView;
-(void)_setDidExpandModulePreference;
-(CGRect)_backgroundFrameForRestState;
-(CGRect)_contentBoundsForTransitionProgress:(double)arg1 ;
-(void)setModuleIdentifier:(NSString *)arg1 ;
-(UIEdgeInsets)expandedContentEdgeInsets;
-(id<CCUIContentModule>)contentModule;
-(void)setContentModule:(id<CCUIContentModule>)arg1 ;
-(void)setBackgroundViewController:(UIViewController *)arg1 ;
-(BOOL)contentModuleProvidesOwnPlatter;
-(void)setContentModuleProvidesOwnPlatter:(BOOL)arg1 ;
-(UIView *)highlightWrapperView;
-(void)setHighlightWrapperView:(UIView *)arg1 ;
-(UIViewController *)backgroundViewController;
@end
