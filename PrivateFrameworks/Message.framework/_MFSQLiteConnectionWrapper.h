/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFSQLiteConnectionWrapper : NSObject {
    MFSQLiteConnection *_connection;
    unsigned int _generation;
    unsigned int _type;
}

@property (nonatomic, readonly) MFSQLiteConnection *connection;
@property (nonatomic, readonly) unsigned int generation;
@property (nonatomic) unsigned int type;

- (id)connection;
- (void)dealloc;
- (unsigned int)generation;
- (id)initWithConnection:(id)arg1 generation:(unsigned int)arg2;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end
