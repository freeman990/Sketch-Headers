//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSException.h>

@interface BCReceiptValidationException : NSException
{
}

+ (void)raiseWithStatus:(unsigned long long)arg1 error:(int)arg2;
+ (void)raiseWithStatus:(unsigned long long)arg1;
+ (id)exceptionWithStatus:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long status;

@end

