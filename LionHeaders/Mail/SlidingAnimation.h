/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class NSMutableDictionary;

@interface SlidingAnimation : NSObject
{
    id <SlidingAnimationDelegate> _delegate;
    NSMutableDictionary *_views;
    BOOL _isSliding;
    BOOL _isPaused;
}

+ (id)_runLoopModesForAnimation;
- (id)init;
- (void)dealloc;
- (void)_updateViewPosition:(id)arg1 forTime:(double)arg2;
- (void)_updateTimer;
- (void)_showNextFrame;
- (void)setDestinationForView:(id)arg1 to:(struct CGRect)arg2 duration:(double)arg3;
- (void)_sendViewToDestination:(id)arg1;
- (struct CGRect)destinationForView:(id)arg1;
- (void)stopView:(id)arg1;
- (void)stop;
- (void)setDelegate:(id)arg1;
- (BOOL)isSliding;
- (void)pause;
- (void)resume;

@end
