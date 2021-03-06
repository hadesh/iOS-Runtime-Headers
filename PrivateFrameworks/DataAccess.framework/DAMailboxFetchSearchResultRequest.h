/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject {
    int _bodyFormat;
    NSString *_longID;
    int _maxSize;
}

- (int)bodyFormat;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initRequestForBodyFormat:(int)arg1 withLongID:(id)arg2 withBodySizeLimit:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)longID;
- (int)maxSize;

@end
