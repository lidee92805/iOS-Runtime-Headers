/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAmenities : PBCodable <NSCopying> {
    struct { int x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } *_amenitys;
    unsigned int _amenitysCount;
    unsigned int _amenitysSpace;
}

@property (nonatomic, readonly) struct { int x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*amenitys;
@property (nonatomic, readonly) unsigned int amenitysCount;

+ (id)amentiesForPlaceData:(id)arg1;

- (void)addAmenity:(struct { int x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (struct { int x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })amenityAtIndex:(unsigned int)arg1;
- (struct { int x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)amenitys;
- (unsigned int)amenitysCount;
- (void)clearAmenitys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAmenityType:(int)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAmenitys:(struct { int x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned int)arg2;
- (BOOL)valueForAmenityType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
