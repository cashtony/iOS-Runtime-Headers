/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, NSString;



@interface MessageCriterion : NSObject 
{
    NSString *_uniqueId;
    NSString *_criterionIdentifier;
    NSString *_expression;
    NSInteger _qualifier;
    NSArray *_criteria;
    NSInteger _dateUnitType;
    NSString *_name;
    unsigned int _allCriteriaMustBeSatisfied : 1;
    unsigned int _dateIsRelative : 1;
    NSInteger _type;
    NSArray *_requiredHeaders;
}

+ (id)criteriaFromDefaultsArray:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(BOOL)arg2;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (void)_updateAddressComments:(id)arg1;
+ (NSInteger)criterionTypeForString:(id)arg1;
+ (id)stringForCriterionType:(NSInteger)arg1;
+ (id)criterionForMailboxURL:(id)arg1;
+ (id)messageIsDeletedCriterion:(BOOL)arg1;

- (id)init;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (id)initWithType:(NSInteger)arg1 qualifier:(NSInteger)arg2 expression:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)descriptionWithDepth:(NSUInteger)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (NSInteger)criterionType;
- (void)setCriterionType:(NSInteger)arg1;
- (id)criterionIdentifier;
- (void)setCriterionIdentifier:(id)arg1;
- (id)_qualifierString;
- (NSInteger)qualifier;
- (void)setQualifier:(NSInteger)arg1;
- (id)expression;
- (void)setExpression:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)_headersRequiredForEvaluation;
- (BOOL)_evaluateHeaderCriterion:(id)arg1;
- (BOOL)_evaluateAddressBookCriterion:(id)arg1;
- (BOOL)_evaluateFullNameCriterion:(id)arg1;
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)arg1;
- (BOOL)_evaluateIsEncryptedCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsHighCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsLowCriterion:(id)arg1;
- (BOOL)_evaluateAttachmentCriterion:(id)arg1;
- (BOOL)_evaluateAccountCriterion:(id)arg1;
- (BOOL)_evaluateAddressHistoryCriterion:(id)arg1;
- (BOOL)_evaluateDateCriterion:(id)arg1;
- (BOOL)doesMessageSatisfyCriterion:(id)arg1;
- (NSInteger)messageRuleQualifierForString:(id)arg1;
- (id)stringForMessageRuleQualifier:(NSInteger)arg1;
- (id)criteria;
- (void)setCriteria:(id)arg1;
- (BOOL)allCriteriaMustBeSatisfied;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)arg1;
- (NSInteger)dateUnits;
- (void)setDateUnits:(NSInteger)arg1;
- (BOOL)dateIsRelative;
- (void)setDateIsRelative:(BOOL)arg1;
- (id)simplifyOnce;
- (id)simplifiedCriterion;
- (id)emailAddressesForGroupCriterion;
- (id)fixOnce;
- (id)SQLExpressionWithContext:(struct { NSUInteger x1; NSUInteger x2; BOOL x3; BOOL x4; }*)arg1 depth:(NSUInteger)arg2;
- (BOOL)hasNumberCriterion;
- (id)criterionForSQL;
- (id)SQLExpressionWithTables:(NSUInteger*)arg1 baseTable:(NSUInteger)arg2;
- (NSUInteger)bestBaseTable;

@end