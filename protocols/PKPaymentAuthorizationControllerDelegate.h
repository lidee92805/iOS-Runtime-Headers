/* Generated by RuntimeBrowser.
 */

@protocol PKPaymentAuthorizationControllerDelegate <NSObject>

@required

- (void)paymentAuthorizationController:(void *)arg1 didAuthorizePayment:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKPaymentAuthorizationController *, PKPayment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)paymentAuthorizationControllerDidFinish:(PKPaymentAuthorizationController *)arg1;

@optional

- (void)paymentAuthorizationController:(void *)arg1 didSelectShippingAddress:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: PKPaymentAuthorizationController *, void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, NSArray *, void*
- (void)paymentAuthorizationController:(void *)arg1 didSelectShippingMethod:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PKPaymentAuthorizationController *, PKShippingMethod *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)paymentAuthorizationControllerWillAuthorizePayment:(PKPaymentAuthorizationController *)arg1;

@end
