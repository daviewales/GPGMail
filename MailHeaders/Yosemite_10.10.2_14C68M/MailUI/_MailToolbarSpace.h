/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSView.h"

@class MailToolbarSpaceItemWithPin;

@interface _MailToolbarSpace : NSView
{
    BOOL _inPalette;
    MailToolbarSpaceItemWithPin *_spaceItem;
}

@property(readonly, nonatomic) BOOL inPalette; // @synthesize inPalette=_inPalette;
@property(readonly, nonatomic) __weak MailToolbarSpaceItemWithPin *spaceItem; // @synthesize spaceItem=_spaceItem;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSize:(struct CGSize)arg1 forSpaceItem:(id)arg2;

@end

