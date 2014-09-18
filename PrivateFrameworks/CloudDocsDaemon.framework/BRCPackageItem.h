/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCGenerationID, BRCLocalContainer, NSData, NSString;

@interface BRCPackageItem : NSObject {
    long long _assetRank;
    BRCLocalContainer *_container;
    NSData *_contentSignature;
    unsigned long long _fileID;
    BRCGenerationID *_generationID;
    BOOL _mode;
    long long _mtime;
    unsigned long long _packageID;
    NSString *_pathInPackage;
    NSData *_quarantineInfo;
    long long _size;
    NSString *_symlinkContent;
    int _type;
    bool_isDirty;
}

@property(readonly) long long assetRank;
@property(readonly) NSData * contentSignature;
@property(readonly) unsigned long long fileID;
@property(readonly) BRCGenerationID * generationID;
@property(readonly) bool isDirectory;
@property(readonly) bool isFile;
@property(readonly) bool isSymlink;
@property(readonly) BOOL mode;
@property(readonly) long long mtime;
@property(readonly) unsigned long long packageDocumentID;
@property(readonly) NSString * pathInPackage;
@property(readonly) NSData * quarantineInfo;
@property(readonly) long long size;
@property(readonly) NSString * symlinkContent;
@property(readonly) int type;

+ (bool)_deleteSnapshotAtPath:(id)arg1 error:(id*)arg2;
+ (bool)_rescanDirectoryInPackage:(id)arg1 error:(id*)arg2;
+ (long long)aggregatePackageSizeInContainer:(id)arg1 packageID:(unsigned int)arg2;
+ (bool)dumpContainer:(id)arg1 toContext:(id)arg2 error:(id*)arg3;
+ (long long)largestPackageItemSizeInContainer:(id)arg1 documentID:(unsigned int)arg2;
+ (bool)markLiveFromStageForItem:(id)arg1;
+ (bool)packageChangedAtRelativePath:(id)arg1;
+ (id)packageItemForRelpath:(id)arg1;
+ (id)packageItemInContainer:(id)arg1 documentID:(unsigned int)arg2 relativePath:(id)arg3;
+ (struct PQLResultSet { Class x1; }*)packageItemsForDocumentID:(unsigned int)arg1 order:(unsigned long long)arg2 container:(id)arg3;
+ (struct PQLResultSet { Class x1; }*)packageItemsForItem:(id)arg1 order:(unsigned long long)arg2;
+ (bool)updateSigaturesForFilesInItem:(id)arg1 startingAtRank:(long long)arg2 fromCKPackage:(id)arg3 startingAtIndex:(unsigned long long)arg4 error:(id*)arg5;
+ (bool)updateSnapshotAtPath:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (long long)assetRank;
- (bool)changedAtRelpath:(id)arg1;
- (id)contentSignature;
- (id)description;
- (unsigned long long)fileID;
- (id)generationID;
- (id)initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id*)arg3;
- (id)initWithPBItem:(id)arg1 forLocalItem:(id)arg2;
- (id)initWithRelativePath:(id)arg1 markDirty:(bool)arg2;
- (bool)isDirectory;
- (bool)isFile;
- (bool)isSymlink;
- (BOOL)mode;
- (long long)mtime;
- (unsigned long long)packageDocumentID;
- (id)pathInPackage;
- (id)quarantineInfo;
- (bool)saveToDB;
- (long long)size;
- (id)symlinkContent;
- (int)type;

@end