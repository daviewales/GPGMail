/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSOperation.h"

@class ABAddressBook, NSString;

@interface _RecentsSearchOperation : NSOperation
{
    NSString *_searchString;
    id <RecentsSearchOperationDelegate> _delegate;
    ABAddressBook *_addressBook;
}

- (id)initWithSearchString:(id)arg1 delegate:(id)arg2 addressBook:(id)arg3;
- (void)dealloc;
- (void)main;
- (id)addressBook;

@end

