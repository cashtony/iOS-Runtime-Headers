/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSOrderedSetI : NSOrderedSet  {
    unsigned int _used : 26;
    unsigned int _szidx : 6;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(const id*)arg1 :(unsigned int)arg2 :(BOOL)arg3;

- (unsigned int)indexOfObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)finalize;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;

@end