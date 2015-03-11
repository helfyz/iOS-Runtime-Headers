/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@class NSString;

@interface _NMRCommandInfoProtobuf : PBCodable <NSCopying> {
    struct { 
        double *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        float *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int command : 1; 
        unsigned int maximumRating : 1; 
        unsigned int minimumRating : 1; 
        unsigned int repeatMode : 1; 
        unsigned int shuffleMode : 1; 
        unsigned int active : 1; 
        unsigned int enabled : 1; 
    BOOL _active;
    int _command;
    BOOL _enabled;
    } _has;
    NSString *_localizedShortTitle;
    NSString *_localizedTitle;
    float _maximumRating;
    float _minimumRating;
    } _preferredIntervals;
    int _repeatMode;
    int _shuffleMode;
    } _supportedRates;
}

@property BOOL active;
@property int command;
@property BOOL enabled;
@property BOOL hasActive;
@property BOOL hasCommand;
@property BOOL hasEnabled;
@property(readonly) BOOL hasLocalizedShortTitle;
@property(readonly) BOOL hasLocalizedTitle;
@property BOOL hasMaximumRating;
@property BOOL hasMinimumRating;
@property BOOL hasRepeatMode;
@property BOOL hasShuffleMode;
@property(retain) NSString * localizedShortTitle;
@property(retain) NSString * localizedTitle;
@property float maximumRating;
@property float minimumRating;
@property(readonly) double* preferredIntervals;
@property(readonly) unsigned int preferredIntervalsCount;
@property int repeatMode;
@property int shuffleMode;
@property(readonly) float* supportedRates;
@property(readonly) unsigned int supportedRatesCount;

- (void).cxx_destruct;
- (BOOL)active;
- (void)addPreferredInterval:(double)arg1;
- (void)addSupportedRate:(float)arg1;
- (void)clearPreferredIntervals;
- (void)clearSupportedRates;
- (int)command;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)enabled;
- (BOOL)hasActive;
- (BOOL)hasCommand;
- (BOOL)hasEnabled;
- (BOOL)hasLocalizedShortTitle;
- (BOOL)hasLocalizedTitle;
- (BOOL)hasMaximumRating;
- (BOOL)hasMinimumRating;
- (BOOL)hasRepeatMode;
- (BOOL)hasShuffleMode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizedShortTitle;
- (id)localizedTitle;
- (float)maximumRating;
- (void)mergeFrom:(id)arg1;
- (float)minimumRating;
- (double)preferredIntervalAtIndex:(unsigned int)arg1;
- (double*)preferredIntervals;
- (unsigned int)preferredIntervalsCount;
- (BOOL)readFrom:(id)arg1;
- (int)repeatMode;
- (void)setActive:(BOOL)arg1;
- (void)setCommand:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHasActive:(BOOL)arg1;
- (void)setHasCommand:(BOOL)arg1;
- (void)setHasEnabled:(BOOL)arg1;
- (void)setHasMaximumRating:(BOOL)arg1;
- (void)setHasMinimumRating:(BOOL)arg1;
- (void)setHasRepeatMode:(BOOL)arg1;
- (void)setHasShuffleMode:(BOOL)arg1;
- (void)setLocalizedShortTitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMaximumRating:(float)arg1;
- (void)setMinimumRating:(float)arg1;
- (void)setPreferredIntervals:(double*)arg1 count:(unsigned int)arg2;
- (void)setRepeatMode:(int)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setSupportedRates:(float*)arg1 count:(unsigned int)arg2;
- (int)shuffleMode;
- (float)supportedRateAtIndex:(unsigned int)arg1;
- (float*)supportedRates;
- (unsigned int)supportedRatesCount;
- (void)writeTo:(id)arg1;

@end