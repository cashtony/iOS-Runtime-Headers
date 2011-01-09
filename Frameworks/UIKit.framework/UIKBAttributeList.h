/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString;



@interface UIKBAttributeList : NSObject <NSCoding, NSCopying>
{
    NSString *m_name;
    NSMutableArray *m_list;
    BOOL m_explicit;
}

@property(readonly) NSArray *names;
@property(readonly) NSUInteger count;
@property BOOL explicit;
@property(readonly) NSArray *list;
@property(copy) NSString *name;


- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)names;
- (NSUInteger)count;
- (void)setAttribute:(id)arg1;
- (void)setValue:(id)arg1 forName:(id)arg2;
- (void)setBoolValueForName:(BOOL)arg1 forName:(id)arg2;
- (void)mergeAttributes:(id)arg1;
- (id)valueForName:(id)arg1;
- (id)stringValueForName:(id)arg1;
- (BOOL)boolValueForName:(id)arg1;
- (id)arrayValueForName:(id)arg1;
- (BOOL)explicit;
- (void)setExplicit:(BOOL)arg1;
- (id)list;
- (id)name;
- (void)setName:(id)arg1;

@end