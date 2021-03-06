/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollView : UIView <ADPrerollBottomBarDelegate, ADPrerollTopBarDelegate, UIGestureRecognizerDelegate> {
    double _accumulatedViewingTime;
    BOOL _barsVisible;
    ADPrerollBottomBar *_bottomBar;
    <ADPrerollViewDelegate> *_delegate;
    NSTimer *_passiveWatchingTimer;
    BOOL _skipButtonCountingDown;
    UIImageView *_swooshView;
    ADPrerollTopBar *_topBar;
}

@property (nonatomic) double accumulatedViewingTime;
@property (nonatomic) BOOL barsVisible;
@property (nonatomic, retain) ADPrerollBottomBar *bottomBar;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ADPrerollViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSTimer *passiveWatchingTimer;
@property (nonatomic) BOOL skipButtonCountingDown;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageView *swooshView;
@property (nonatomic, retain) ADPrerollTopBar *topBar;

+ (Class)layerClass;

- (void)_firePassiveWatchingTimer:(id)arg1;
- (BOOL)_layoutForExpandedSize;
- (void)_restartPassiveWatchingTimer;
- (void)_singleTapGestureRecognized:(id)arg1;
- (BOOL)accessibilityPerformEscape;
- (double)accumulatedViewingTime;
- (void)attachToAVPlayer:(id)arg1 showiAdBrandingSwoosh:(BOOL)arg2;
- (BOOL)barsVisible;
- (void)beginCountdown:(double)arg1;
- (id)bottomBar;
- (void)bottomBarActionButtonTapped:(id)arg1;
- (void)bottomBarPauseButtonTapped:(id)arg1;
- (void)bottomBarPlayButtonTapped:(id)arg1;
- (void)bottomBarSkipButtonTapped:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)displayAsPaused:(BOOL)arg1;
- (void)fadeToBlackWithCompletion:(id /* block */)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)passiveWatchingTimer;
- (void)setAccumulatedViewingTime:(double)arg1;
- (void)setBarsVisible:(BOOL)arg1;
- (void)setBottomBar:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElapsedTime:(double)arg1 totalTime:(double)arg2;
- (void)setPassiveWatchingTimer:(id)arg1;
- (void)setSkipButtonCountingDown:(BOOL)arg1;
- (void)setSwooshView:(id)arg1;
- (void)setTopBar:(id)arg1;
- (void)shutdown;
- (BOOL)skipButtonCountingDown;
- (id)swooshView;
- (id)topBar;
- (void)topBarDoneButtonTapped:(id)arg1;
- (void)topBarScaleToFill:(id)arg1;
- (void)topBarScaleToFit:(id)arg1;

@end
