/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSObject<OS_dispatch_semaphore>, APSConnection, NSData;

@interface AADeviceInfo : NSObject  {
    APSConnection *_apsConnection;
    BOOL _tokenDone;
    NSData *_token;
    NSObject<OS_dispatch_semaphore> *_tokenSema;
}

+ (id)serialNumber;
+ (id)appleIDClientIdentifier;
+ (id)udid;
+ (id)productVersion;
+ (id)infoDictionary;
+ (id)userAgentHeader;
+ (id)signatureWithDictionary:(id)arg1;
+ (id)apnsToken;
+ (id)clientInfoHeader;
+ (id)osVersion;

- (id)serialNumber;
- (id)appleIDClientIdentifier;
- (id)udid;
- (id)productVersion;
- (void).cxx_destruct;
- (id)init;
- (id)productType;
- (id)buildVersion;
- (id)wifiMacAddress;
- (id)regionCode;
- (id)osName;
- (id)apnsToken;
- (id)deviceInfoDictionary;
- (id)osVersion;
- (id)deviceClass;

@end