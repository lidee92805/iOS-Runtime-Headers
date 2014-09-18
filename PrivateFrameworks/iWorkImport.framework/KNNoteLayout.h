/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSWPLayout, TSWPPadding;

@interface KNNoteLayout : TSDLayout <TSKChangeSourceObserver, TSWPLayoutParent, TSWPColumnMetrics> {
    struct CGSize { 
        double width; 
        double height; 
    TSWPLayout *mContainedLayout;
    TSWPPadding *mPadding;
    } mSizeOfScrollViewEnclosingCanvas;
}

@property(readonly) bool alwaysStartsNewTarget;
@property(readonly) unsigned long long columnCount;
@property(readonly) bool columnsAreLeftToRight;
@property(readonly) TSWPLayout * containedLayout;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) TSWPPadding * layoutMargins;
@property(readonly) TSWPPadding * padding;
@property(readonly) bool shrinkTextToFit;
@property(readonly) Class superclass;
@property(readonly) double textScaleFactor;

- (id).cxx_construct;
- (void)addChild:(id)arg1;
- (struct CGSize { double x1; double x2; })adjustedInsetsForTarget:(id)arg1;
- (bool)alwaysStartsNewTarget;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })capturedInfoPositionForAttachment;
- (id)childSearchTargets;
- (id)children;
- (unsigned long long)columnCount;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)columnsAreLeftToRight;
- (id)computeLayoutGeometry;
- (id)containedLayout;
- (void)createContainedLayoutForEditing;
- (void)dealloc;
- (id)dependentsOfTextLayout:(id)arg1;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (void)invalidateSize;
- (id)layoutGeometryFromInfo;
- (id)layoutMargins;
- (double)maxAutoGrowHeightForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (id)p_adjustedPaddingForBodyWidth:(double)arg1;
- (void)p_setSizeOfScrollViewEnclosingCanvasFromLayoutController:(id)arg1;
- (id)padding;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5;
- (Class)repClassForTextLayout:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)setChildren:(id)arg1;
- (bool)shrinkTextToFit;
- (void)sizeOfScrollViewEnclosingCanvasDidChange;
- (bool)supportsBoldItalicUnderlineShortcuts;
- (bool)textIsVertical;
- (double)textScaleFactor;
- (double)textScaleFactorForPrinting;
- (void)updateChildrenFromInfo;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;

@end