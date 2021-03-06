/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebElementAction : NSObject {
    id /* block */ _actionHandler;
    id /* block */ _dismissalHandler;
    NSString *_title;
    int _type;
}

@property (nonatomic, copy) id /* block */ dismissalHandler;
@property (nonatomic, readonly) int type;

+ (id)customElementActionWithTitle:(id)arg1 actionHandler:(id /* block */)arg2;
+ (id)standardElementActionWithType:(int)arg1;
+ (id)standardElementActionWithType:(int)arg1 customTitle:(id)arg2;

- (void)_runActionWithElement:(id)arg1 targetURL:(id)arg2 documentView:(id)arg3 interactionLocation:(struct CGPoint { float x1; float x2; })arg4;
- (id)_title;
- (void)dealloc;
- (id /* block */)dismissalHandler;
- (id)initWithTitle:(id)arg1 actionHandler:(id /* block */)arg2 type:(int)arg3;
- (void)setDismissalHandler:(id /* block */)arg1;
- (int)type;

@end
