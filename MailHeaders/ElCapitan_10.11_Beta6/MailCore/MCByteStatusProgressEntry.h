/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MailCore/MCProgressEntry.h>

@interface MCByteStatusProgressEntry : MCProgressEntry
{
    long long _totalBytes;
}

+ (id)keyPathsForValuesAffectingStatusText;
@property(nonatomic) long long totalBytes; // @synthesize totalBytes=_totalBytes;
- (void)refreshValues;
- (id)observedProgressKeyPaths;
- (BOOL)indeterminate;
- (id)statusText;

@end
