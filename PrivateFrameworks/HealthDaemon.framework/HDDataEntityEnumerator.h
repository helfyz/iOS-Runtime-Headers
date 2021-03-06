/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataEntityEnumerator : HDSQLiteQueryDescriptor {
    NSNumber *_anchor;
    id /* block */ _authorizationFilter;
    NSNumber *_deletedObjectsAnchor;
    _HKFilter *_filter;
    <HDHealthDaemon> *_healthDaemon;
    HKObjectType *_objectType;
    NSArray *_sortDescriptors;
    NSNumber *_sourceIdentifier;
    BOOL _useLeftJoin;
}

@property (nonatomic, retain) NSNumber *anchor;
@property (nonatomic, copy) id /* block */ authorizationFilter;
@property (nonatomic, retain) NSNumber *deletedObjectsAnchor;
@property (nonatomic, retain) _HKFilter *filter;
@property (nonatomic, readonly) <HDHealthDaemon> *healthDaemon;
@property (nonatomic, readonly) HKObjectType *objectType;
@property (nonatomic, retain) NSArray *sortDescriptors;
@property (nonatomic, retain) NSNumber *sourceIdentifier;
@property (nonatomic) BOOL useLeftJoin;

- (void).cxx_destruct;
- (BOOL)_enumerateObjectsOnDatabase:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)_joinClauseForProperties:(id)arg1;
- (BOOL)_prepareDeletedObjectsAndSamplesDescriptor:(id)arg1 error:(id*)arg2;
- (BOOL)_prepareDescriptor:(id)arg1 error:(id*)arg2;
- (BOOL)_setColumnNamesAndSortOrderingsOnDescriptor:(id)arg1 error:(id*)arg2;
- (id)anchor;
- (id /* block */)authorizationFilter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletedObjectsAnchor;
- (BOOL)enumerateIncludingDeletedObjects:(BOOL)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (BOOL)enumerateWithError:(id*)arg1 handler:(id /* block */)arg2;
- (id)filter;
- (id)healthDaemon;
- (id)initWithEntityClass:(Class)arg1 healthDaemon:(id)arg2;
- (id)initWithObjectType:(id)arg1 entityClass:(Class)arg2 healthDaemon:(id)arg3;
- (id)objectType;
- (void)setAnchor:(id)arg1;
- (void)setAuthorizationFilter:(id /* block */)arg1;
- (void)setDeletedObjectsAnchor:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setUseLeftJoin:(BOOL)arg1;
- (id)sortDescriptors;
- (id)sourceIdentifier;
- (BOOL)useLeftJoin;

@end
