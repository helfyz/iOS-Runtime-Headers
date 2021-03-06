/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUsageCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_abExperimentAssignments;
    GEOABExperimentAssignment *_tilesAbExperimentAssignment;
    NSMutableArray *_timeToLeaveHypothesisFeedbackCollections;
    NSMutableArray *_timeToLeaveInitialTravelTimeFeedbackCollections;
}

@property (nonatomic, retain) NSMutableArray *abExperimentAssignments;
@property (nonatomic, readonly) BOOL hasTilesAbExperimentAssignment;
@property (nonatomic, retain) GEOABExperimentAssignment *tilesAbExperimentAssignment;
@property (nonatomic, retain) NSMutableArray *timeToLeaveHypothesisFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *timeToLeaveInitialTravelTimeFeedbackCollections;

- (id)abExperimentAssignmentAtIndex:(unsigned int)arg1;
- (id)abExperimentAssignments;
- (unsigned int)abExperimentAssignmentsCount;
- (void)addAbExperimentAssignment:(id)arg1;
- (void)addTimeToLeaveHypothesisFeedbackCollection:(id)arg1;
- (void)addTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1;
- (void)clearAbExperimentAssignments;
- (void)clearTimeToLeaveHypothesisFeedbackCollections;
- (void)clearTimeToLeaveInitialTravelTimeFeedbackCollections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTilesAbExperimentAssignment;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAbExperimentAssignments:(id)arg1;
- (void)setTilesAbExperimentAssignment:(id)arg1;
- (void)setTimeToLeaveHypothesisFeedbackCollections:(id)arg1;
- (void)setTimeToLeaveInitialTravelTimeFeedbackCollections:(id)arg1;
- (id)tilesAbExperimentAssignment;
- (id)timeToLeaveHypothesisFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)timeToLeaveHypothesisFeedbackCollections;
- (unsigned int)timeToLeaveHypothesisFeedbackCollectionsCount;
- (id)timeToLeaveInitialTravelTimeFeedbackCollectionAtIndex:(unsigned int)arg1;
- (id)timeToLeaveInitialTravelTimeFeedbackCollections;
- (unsigned int)timeToLeaveInitialTravelTimeFeedbackCollectionsCount;
- (void)writeTo:(id)arg1;

@end
