/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, VKLabelNavRoadGraph, VKPolylineOverlayPainter;

@interface VKLabelNavSupport : NSObject {
    struct { 
        unsigned int index; 
        float offset; 
    struct vector<std::__1::shared_ptr<vk::Label>, vk_allocator<std::__1::shared_ptr<vk::Label>> > { 
        struct shared_ptr<vk::Label> {} *__begin_; 
        struct shared_ptr<vk::Label> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<vk::Label> *, vk_allocator<std::__1::shared_ptr<vk::Label>> > { 
            struct shared_ptr<vk::Label> {} *__first_; 
        } __end_cap_; 
    struct { 
        unsigned int index; 
        float offset; 
    struct { 
        unsigned int index; 
        float offset; 
    } _activeSigns;
    BOOL _checkIfRouteSubrangeChanged;
    int _countVisibleRoadSigns;
    NSString *_currentLocationText;
    NSString *_currentRoadName;
    int _currentRoadNameIndex;
    NSString *_currentShieldGroup;
    BOOL _drawRoadSigns;
    NSMutableArray *_fadingLabels;
    BOOL _isOnRoute;
    NSMutableArray *_junctions;
    BOOL _needsLayout;
    NSMutableSet *_pendingTiles;
    VKLabelNavRoadGraph *_roadGraph;
    NSMutableSet *_roadNamesInGuidance;
    VKPolylineOverlayPainter *_route;
    NSMutableArray *_routeRoadInfos;
    } _routeSubrangeEnd;
    } _routeSubrangeStart;
    } _routeUserOffset;
    unsigned int _stepIndex;
    NSMutableSet *_tiles;
    BOOL _useRouteSubrange;
    NSMutableArray *_visibleLabels;
    NSMutableDictionary *_visibleLabelsByName;
}

@property(readonly) const /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<vk::Label>' */ struct * activeSigns; /* unknown property attribute:  vk_allocator<std::__1::shared_ptr<vk::Label>> >=^{shared_ptr<vk::Label>}}} */
@property(retain) NSString * currentLocationText;
@property(retain) NSString * currentRoadName;
@property(retain) NSString * currentShieldGroup;
@property BOOL drawRoadSigns;
@property(readonly) BOOL needsLayout;
@property(retain) VKPolylineOverlayPainter * route;
@property struct { unsigned int x1; float x2; } routeUserOffset;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_addJunctionsForTile:(id)arg1;
- (void)_addLabelsForJunctions:(id)arg1 withContext:(struct LabelContext { id x1; id x2; id x3; id x4; struct ViewTransform {} *x5; int x6; int x7; unsigned int x8; float x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; int x16; struct { double x_17_1_1; double x_17_1_2; double x_17_1_3; double x_17_1_4; } x17; struct { float x_18_1_1; float x_18_1_2; float x_18_1_3; float x_18_1_4; } x18; struct { float x_19_1_1; float x_19_1_2; float x_19_1_3; float x_19_1_4; } x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; } x20; int x21; }*)arg2 maxVisibleLabels:(unsigned int)arg3 useAllJunctions:(BOOL)arg4;
- (BOOL)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3;
- (BOOL)_findRouteOverlappingJunctionFrom:(int)arg1 routeJunctions:(struct vector<RouteJunctionInfo, vk_allocator<RouteJunctionInfo> > { struct RouteJunctionInfo {} *x1; struct RouteJunctionInfo {} *x2; struct __compressed_pair<RouteJunctionInfo *, vk_allocator<RouteJunctionInfo> > { struct RouteJunctionInfo {} *x_3_1_1; } x3; }*)arg2 lookBackward:(BOOL)arg3 firstOverlap:(int*)arg4 secondOverlap:(int*)arg5;
- (void)_initalizeCurrentRoadInfo;
- (void)_refreshGuidanceRoadNames;
- (void)_reloadRouteJunctions;
- (void)_setTiles:(id)arg1;
- (void)_tryAddLabel:(id)arg1 labelContext:(struct LabelContext { id x1; id x2; id x3; id x4; struct ViewTransform {} *x5; int x6; int x7; unsigned int x8; float x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; int x16; struct { double x_17_1_1; double x_17_1_2; double x_17_1_3; double x_17_1_4; } x17; struct { float x_18_1_1; float x_18_1_2; float x_18_1_3; float x_18_1_4; } x18; struct { float x_19_1_1; float x_19_1_2; float x_19_1_3; float x_19_1_4; } x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; } x20; int x21; }*)arg2 labelCollisionEnabled:(BOOL)arg3;
- (void)_tryAddRoadSignForRoad:(id)arg1 isShield:(BOOL)arg2 labelContext:(struct LabelContext { id x1; id x2; id x3; id x4; struct ViewTransform {} *x5; int x6; int x7; unsigned int x8; float x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; int x16; struct { double x_17_1_1; double x_17_1_2; double x_17_1_3; double x_17_1_4; } x17; struct { float x_18_1_1; float x_18_1_2; float x_18_1_3; float x_18_1_4; } x18; struct { float x_19_1_1; float x_19_1_2; float x_19_1_3; float x_19_1_4; } x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; } x20; int x21; }*)arg3 labelCollisionEnabled:(BOOL)arg4;
- (BOOL)_updateActiveRouteRange;
- (void)_updateCurrentRoadInfo;
- (void)_updatePreferredLabelPlacements;
- (void)_updateRoadStarts;
- (void)_updateRoadsInGuidance;
- (void)_updateUniqueOffRouteRoads;
- (const struct vector<std::__1::shared_ptr<vk::Label>, vk_allocator<std::__1::shared_ptr<vk::Label>> > { struct shared_ptr<vk::Label> {} *x1; struct shared_ptr<vk::Label> {} *x2; struct __compressed_pair<std::__1::shared_ptr<vk::Label> *, vk_allocator<std::__1::shared_ptr<vk::Label>> > { struct shared_ptr<vk::Label> {} *x_3_1_1; } x3; }*)activeSigns;
- (void)clearScene;
- (id)currentLocationText;
- (id)currentRoadName;
- (id)currentShieldGroup;
- (void)dealloc;
- (BOOL)drawRoadSigns;
- (void)grabTilesFromScene:(id)arg1;
- (id)init;
- (BOOL)isNavMode;
- (void)layoutWithLabelContext:(struct LabelContext { id x1; id x2; id x3; id x4; struct ViewTransform {} *x5; int x6; int x7; unsigned int x8; float x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; int x16; struct { double x_17_1_1; double x_17_1_2; double x_17_1_3; double x_17_1_4; } x17; struct { float x_18_1_1; float x_18_1_2; float x_18_1_3; float x_18_1_4; } x18; struct { float x_19_1_1; float x_19_1_2; float x_19_1_3; float x_19_1_4; } x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; } x20; int x21; }*)arg1;
- (BOOL)needsLayout;
- (id)route;
- (struct { unsigned int x1; float x2; })routeUserOffset;
- (void)setCurrentLocationText:(id)arg1;
- (void)setCurrentRoadName:(id)arg1;
- (void)setCurrentShieldGroup:(id)arg1;
- (void)setDrawRoadSigns:(BOOL)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteUserOffset:(struct { unsigned int x1; float x2; })arg1;

@end