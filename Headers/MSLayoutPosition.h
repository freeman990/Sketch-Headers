//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSLayoutAnchor.h"

@interface MSLayoutPosition : MSLayoutAnchor
{
    BOOL _isFixed;
    CDStruct_b7168832 _fixedLine;
    unsigned long long _snapTag;
}

+ (id)positionAnchorWithLine:(CDStruct_b7168832)arg1 inLayer:(id)arg2 attribute:(unsigned long long)arg3;
@property(nonatomic) unsigned long long snapTag; // @synthesize snapTag=_snapTag;
- (id)description;
- (struct CGRect)rectBySnappingToPosition:(double)arg1 oldFrame:(struct CGRect)arg2 mayResize:(BOOL)arg3;
- (id)snappingTargetInCoordinateSpace:(id)arg1;
- (double)positionInLayer:(id)arg1;
- (unsigned long long)axis;
- (id)initWithItem:(id)arg1 attribute:(unsigned long long)arg2;

@end

