//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BCRounder : NSObject
{
    double _roundingIncrement;
}

@property(nonatomic) double roundingIncrement; // @synthesize roundingIncrement=_roundingIncrement;
- (struct CGSize)roundSize:(struct CGSize)arg1 mask:(unsigned long long)arg2;
- (struct CGSize)roundSize:(struct CGSize)arg1;
- (struct CGPoint)roundPoint:(struct CGPoint)arg1 mask:(unsigned long long)arg2;
- (struct CGPoint)roundPoint:(struct CGPoint)arg1;
- (double)alignValue:(double)arg1 toBase:(double)arg2 minimumMagnitude:(double)arg3;
- (double)alignValue:(double)arg1 toBase:(double)arg2;
- (double)roundValue:(double)arg1;
- (id)init;
- (id)initWithRoundingIncrement:(double)arg1;

@end

