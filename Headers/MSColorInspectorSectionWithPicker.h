//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSColorInspectorSection.h"

#import "MSCollapsibleHeaderInspectorItemTarget-Protocol.h"

@class MSCollapsibleHeaderInspectorItem;

@interface MSColorInspectorSectionWithPicker : MSColorInspectorSection <MSCollapsibleHeaderInspectorItemTarget>
{
    MSCollapsibleHeaderInspectorItem *_pickerHeaderItem;
}

+ (void)initialize;
@property(retain, nonatomic) MSCollapsibleHeaderInspectorItem *pickerHeaderItem; // @synthesize pickerHeaderItem=_pickerHeaderItem;
- (void).cxx_destruct;
- (void)item:(id)arg1 wantsSectionToCollapse:(BOOL)arg2;

@end

