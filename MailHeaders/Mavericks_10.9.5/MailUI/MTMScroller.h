/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSScroller.h"

@interface MTMScroller : NSScroller
{
    BOOL _isFakeScroller;
    BOOL _dontNotify;
    id _delegate;
}

@property id delegate; // @synthesize delegate=_delegate;
@property BOOL dontNotify; // @synthesize dontNotify=_dontNotify;
- (void)drawKnob;
@property(nonatomic) BOOL isFakeScroller;
- (void)_notifyPostScrollPositionChanged;
- (void)setDoubleValue:(double)arg1;

@end
