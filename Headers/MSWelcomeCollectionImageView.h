//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@interface MSWelcomeCollectionImageView : NSImageView
{
    BOOL _selected;
    SEL _doubleClickAction;
    unsigned long long _imageInterpolation;
}

+ (Class)cellClass;
@property(nonatomic) unsigned long long imageInterpolation; // @synthesize imageInterpolation=_imageInterpolation;
@property(nonatomic) SEL doubleClickAction; // @synthesize doubleClickAction=_doubleClickAction;
@property(nonatomic, getter=isSelected) BOOL selected;
- (void)mouseDown:(id)arg1;

@end

