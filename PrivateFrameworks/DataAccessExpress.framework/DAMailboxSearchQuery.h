/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSDate, NSString;

@interface DAMailboxSearchQuery : DASearchQuery {
    NSInteger _MIMESupport;
    BOOL _allOrNone;
    NSInteger _bodyType;
    NSString *_collectionID;
    BOOL _deepTraversal;
    NSDate *_priorToDate;
    BOOL _rebuildResults;
    long long _truncationSize;
}

@property(retain) NSString *collectionID;
@property(retain) NSDate *priorToDate;
@property NSInteger MIMESupport;
@property BOOL allOrNone;
@property NSInteger bodyType;
@property BOOL deepTraversal;
@property BOOL rebuildResults;
@property long long truncationSize;

+ (id)mailboxSearchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

- (NSInteger)MIMESupport;
- (BOOL)allOrNone;
- (NSInteger)bodyType;
- (id)collectionID;
- (void)dealloc;
- (BOOL)deepTraversal;
- (id)dictionaryRepresentation;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (id)priorToDate;
- (BOOL)rebuildResults;
- (void)setAllOrNone:(BOOL)arg1;
- (void)setBodyType:(NSInteger)arg1;
- (void)setCollectionID:(id)arg1;
- (void)setDeepTraversal:(BOOL)arg1;
- (void)setMIMESupport:(NSInteger)arg1;
- (void)setPriorToDate:(id)arg1;
- (void)setRebuildResults:(BOOL)arg1;
- (void)setTruncationSize:(long long)arg1;
- (long long)truncationSize;

@end