/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSArray, NSString;

@interface SLMicroBlogStatus : NSObject <NSSecureCoding> {
    NSArray *_imageAssetURLs;
    NSArray *_imageData;
    NSString *_inReplyToStatusID;
    NSString *_maskedApplicationID;
    NSString *_statusText;
}

@property(retain) NSArray * imageAssetURLs;
@property(retain) NSArray * imageData;
@property(retain) NSString * inReplyToStatusID;
@property(retain) NSString * maskedApplicationID;
@property(retain) NSString * statusText;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)imageAssetURLs;
- (id)imageData;
- (id)inReplyToStatusID;
- (id)initWithCoder:(id)arg1;
- (void)loadAssetDataIfNecessaryWithMaxByteSize:(unsigned int)arg1 completion:(id)arg2;
- (id)maskedApplicationID;
- (void)setImageAssetURLs:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setInReplyToStatusID:(id)arg1;
- (void)setMaskedApplicationID:(id)arg1;
- (void)setStatusText:(id)arg1;
- (id)statusText;

@end