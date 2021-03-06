/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFixedSizeLRUCache : NSObject {
    struct __CFDictionary { } *_keyToObjectMapping;
    struct __CFArray { } *_lruQueue;
    unsigned int _size;
    unsigned int _usedSlots;
}

- (void)_freeMemory:(id)arg1;
- (void)addObject:(id)arg1 withKey:(id)arg2;
- (void)dealloc;
- (id)initForCacheSize:(unsigned int)arg1;
- (void)invalidate;
- (id)objectWithKey:(id)arg1;
- (void)removeObjectWithKey:(id)arg1;

@end
