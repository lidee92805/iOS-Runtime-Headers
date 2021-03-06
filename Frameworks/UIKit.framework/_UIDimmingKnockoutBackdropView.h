/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDimmingKnockoutBackdropView : UIView <UIAlertControllerBackgroundView> {
    _UIBackdropView *backdropView;
    UIView *dimmingKnockoutView;
}

@property float cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)_dimmingKnockoutBackgroundColorForBackdropStyle:(int)arg1;
- (id)_filterForBackdropStyle:(int)arg1;
- (float)cornerRadius;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2;

@end
