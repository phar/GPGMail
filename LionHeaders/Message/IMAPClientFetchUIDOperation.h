/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/IMAPClientFetchOperation.h>

@class NSIndexSet;

@interface IMAPClientFetchUIDOperation : IMAPClientFetchOperation
{
    NSIndexSet *_UIDs;
}

- (id)init;
- (id)initWithUIDs:(id)arg1;
- (void)dealloc;
- (id)commandTypeString;
- (id)_newMessageSetCommandString;
@property(retain) NSIndexSet *UIDs; // @synthesize UIDs=_UIDs;

@end
