/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface PFUbiquityTransactionLogCache : NSObject {
    NSString *_localPeerID;
    NSMutableDictionary *_transactionLogCache;
    NSRecursiveLock *_transactionLogCacheLock;
}

- (id)cachedLogForLocation:(id)arg1 loadWithRetry:(BOOL)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1;
- (void)removeLogsCachedForStoreNamed:(id)arg1 withUbiquityRootLocation:(id)arg2;

@end
