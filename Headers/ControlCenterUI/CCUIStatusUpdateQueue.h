/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 25, 2018 at 11:29:33 PM Eastern European Standard Time
* Operating System: Version 11.1.2 (Build 15B202)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface CCUIStatusUpdateQueue : NSObject {

	NSMutableArray* _queuedIdentifiers;
	NSMutableDictionary* _latestUpdateByIdentifier;

}
-(id)init;
-(void)removeAllStatusUpdates;
-(void)enqueueStatusUpdate:(id)arg1 forIdentifier:(id)arg2 ;
-(id)dequeueNextStatusUpdate;
@end

