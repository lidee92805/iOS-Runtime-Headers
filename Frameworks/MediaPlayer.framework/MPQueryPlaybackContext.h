/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPQueryPlaybackContext : MPPlaybackContext {
    NSArray *_prefixMediaItems;
    MPMediaQuery *_query;
    BOOL _shouldRestartPlaybackIfQueueChanges;
    unsigned int _startIndex;
}

@property (nonatomic, copy) NSArray *prefixMediaItems;
@property (nonatomic, readonly) MPMediaQuery *query;
@property (nonatomic) BOOL shouldRestartPlaybackIfQueueChanges;
@property (nonatomic) unsigned int startIndex;

- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1;
- (id)prefixMediaItems;
- (id)query;
- (void)setPrefixMediaItems:(id)arg1;
- (void)setShouldRestartPlaybackIfQueueChanges:(BOOL)arg1;
- (void)setStartIndex:(unsigned int)arg1;
- (BOOL)shouldRestartPlaybackIfQueueChanges;
- (unsigned int)startIndex;

@end
