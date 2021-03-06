/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding> {
    SGContact *_contact;
    long long _matchingFieldType;
}

@property (nonatomic, readonly) SGContact *contact;
@property (nonatomic, readonly) <SGObject> *matchingField;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContactMatch:(id)arg1;
- (id)matchingField;

@end
