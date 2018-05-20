/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 16, 2018 at 2:01:14 PM Central European Summer Time
* Operating System: Version 11.1.2 (Build 15B202)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface CCSControlCenterDefaults : BSAbstractDefaultDomain

@property (assign,nonatomic) unsigned long long presentationGesture; 
@property (assign,nonatomic) unsigned long long userInvocationCount; 
@property (assign,nonatomic) BOOL shouldEnablePrototypeFeatures; 
@property (assign,nonatomic) BOOL shouldEnableInternalModules; 
@property (assign,nonatomic) BOOL shouldEnableTigrisCarryUI; 
+(id)standardDefaults;
-(void)setShouldEnableInternalModules:(BOOL)arg1 ;
-(BOOL)shouldEnableInternalModules;
-(void)setPresentationGesture:(unsigned long long)arg1 ;
-(unsigned long long)presentationGesture;
-(void)setShouldEnablePrototypeFeatures:(BOOL)arg1 ;
-(BOOL)shouldEnablePrototypeFeatures;
-(void)setUserInvocationCount:(unsigned long long)arg1 ;
-(unsigned long long)userInvocationCount;
-(id)init;
-(void)_bindAndRegisterDefaults;
-(unsigned long long)_defaultPresentationGesture;
-(BOOL)shouldEnableTigrisCarryUI;
-(void)setShouldEnableTigrisCarryUI:(BOOL)arg1 ;
@end

