/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFaceDetectionNode : BWFanOutNode {
    struct opaqueCMFormatDescription { } *_boxedFormatDescription;
    BWNodeOutput *_boxedMetadataOutput;
    BOOL _boxedMetadataOutputEnabled;
    struct OpaqueCMBlockBuffer { } *_emptyMetadataSampleData;
    BOOL _lastBoxedFaceCount;
    int _lastObjectFaceCount;
    unsigned long _localIDOfDetectedFace;
    unsigned long _localIDOfDetectedFaceBounds;
    unsigned long _localIDOfDetectedFaceFaceID;
    unsigned long _localIDOfDetectedFaceRoll;
    unsigned long _localIDOfDetectedFaceYaw;
    BWNodeOutput *_metadataObjectOutput;
    BOOL _metadataObjectOutputEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _prevBoxedFaceDur;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _prevBoxedFacePTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _prevBoxedNoFacePTS;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _rectOfInterest;
}

@property (readonly) BWNodeOutput *boxedMetadataOutput;
@property (readonly) BWNodeOutput *metadataObjectOutput;

+ (void)initialize;

- (struct OpaqueCMBlockBuffer { }*)_getEmptyMetadataSampleData;
- (void)_renderSampleBufferForBoxedMetadataOutput:(struct opaqueCMSampleBuffer { }*)arg1 withFaceArray:(id)arg2;
- (void)_renderSampleBufferForMetadataObjectOutput:(struct opaqueCMSampleBuffer { }*)arg1 withFaceArray:(id)arg2;
- (id)boxedMetadataOutput;
- (BOOL)boxedMetadataOutputEnabled;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)metadataObjectOutput;
- (BOOL)metadataObjectOutputEnabled;
- (id)nodeSubType;
- (id)nodeType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfInterest;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setBoxedMetadataOutputEnabled:(BOOL)arg1;
- (void)setMetadataObjectOutputEnabled:(BOOL)arg1;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
