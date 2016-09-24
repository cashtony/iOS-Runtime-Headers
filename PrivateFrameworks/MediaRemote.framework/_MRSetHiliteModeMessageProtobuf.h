/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSetHiliteModeMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int hiliteMode : 1; 
    }  _has;
    BOOL  _hiliteMode;
}

@property (nonatomic) BOOL hasHiliteMode;
@property (nonatomic) BOOL hiliteMode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHiliteMode;
- (unsigned int)hash;
- (BOOL)hiliteMode;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasHiliteMode:(BOOL)arg1;
- (void)setHiliteMode:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end