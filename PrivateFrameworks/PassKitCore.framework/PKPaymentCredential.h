/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentCredential : NSObject <NSSecureCoding> {
    NSString *_applicationIdentifier;
    NSString *_cardSecurityCode;
    NSString *_cardholderName;
    int _credentialType;
    int _eligibilityStatus;
    NSString *_expiration;
    NSURL *_iconURL;
    NSString *_identifier;
    NSString *_longDescription;
    NSURL *_passURL;
    NSString *_primaryAccountNumber;
    NSString *_primaryAccountNumberPrefix;
    NSString *_region;
    NSString *_sanitizedPrimaryAccountNumber;
    int _status;
    NSString *_termsID;
    NSURL *_termsURL;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *cardSecurityCode;
@property (nonatomic, readonly) NSString *cardTypeDescription;
@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic) int credentialType;
@property (nonatomic) int eligibilityStatus;
@property (nonatomic, readonly) NSString *eligibilityStatusDescription;
@property (nonatomic, copy) NSString *expiration;
@property (nonatomic, copy) NSURL *iconURL;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *longDescription;
@property (nonatomic, copy) NSURL *passURL;
@property (nonatomic, copy) NSString *primaryAccountNumber;
@property (nonatomic, copy) NSString *primaryAccountNumberPrefix;
@property (nonatomic, copy) NSString *region;
@property (nonatomic, copy) NSString *sanitizedPrimaryAccountNumber;
@property (nonatomic) int status;
@property (nonatomic, readonly) NSString *statusDescription;
@property (nonatomic, copy) NSString *termsID;
@property (nonatomic, copy) NSURL *termsURL;

+ (id)credentialWithDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)applicationIdentifier;
- (id)cardSecurityCode;
- (id)cardTypeDescription;
- (id)cardholderName;
- (int)credentialType;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (int)eligibilityStatus;
- (id)eligibilityStatusDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)expiration;
- (id)iconURL;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)longDescription;
- (id)passURL;
- (id)primaryAccountNumber;
- (id)primaryAccountNumberPrefix;
- (id)region;
- (id)sanitizedPrimaryAccountNumber;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setCardSecurityCode:(id)arg1;
- (void)setCardholderName:(id)arg1;
- (void)setCredentialType:(int)arg1;
- (void)setEligibilityStatus:(int)arg1;
- (void)setExpiration:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLongDescription:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setPrimaryAccountNumber:(id)arg1;
- (void)setPrimaryAccountNumberPrefix:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setSanitizedPrimaryAccountNumber:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTermsID:(id)arg1;
- (void)setTermsURL:(id)arg1;
- (int)status;
- (id)statusDescription;
- (id)termsID;
- (id)termsURL;

@end
