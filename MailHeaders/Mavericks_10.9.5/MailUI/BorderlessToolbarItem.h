/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSToolbarItem.h"

@class NSImage;

@interface BorderlessToolbarItem : NSToolbarItem
{
    double _width;
}

@property(retain) NSImage *pressedImage;
@property(retain) NSImage *inactiveImage;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setLabel:(id)arg1;
- (id)control;
- (void)validate;
- (void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2;
- (void)setWidth:(double)arg1;
- (id)initWithItemIdentifier:(id)arg1;

@end
