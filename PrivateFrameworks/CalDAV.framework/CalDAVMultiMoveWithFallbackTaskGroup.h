/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVMultiMoveWithFallbackTaskGroup : CoreDAVMultiMoveWithFallbackTaskGroup {
    NSMutableDictionary *_destinationEntityScheduleTags;
    BOOL _isAutoScheduleSupported;
    NSDictionary *_sourceEntityScheduleTags;
}

@property (nonatomic, readonly) NSMutableDictionary *destinationEntityScheduleTags;
@property (nonatomic, readonly) BOOL isAutoScheduleSupported;
@property (nonatomic, readonly) NSDictionary *sourceEntityScheduleTags;

- (void)_completedPropFindTask:(id)arg1 intermediateETag:(id)arg2 intermediateScheduleTag:(id)arg3 destinationFilename:(id)arg4;
- (void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)dealloc;
- (id)destinationEntityScheduleTags;
- (id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(BOOL)arg3 useFallback:(BOOL)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 sourceEntityScheduleTags:(id)arg8 accountInfoProvider:(id)arg9 taskManager:(id)arg10 isAutoScheduleSupported:(BOOL)arg11;
- (BOOL)isAutoScheduleSupported;
- (id)sourceEntityScheduleTags;

@end
