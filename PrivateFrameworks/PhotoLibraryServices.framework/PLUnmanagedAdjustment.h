/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDate, NSNumber, NSString, PLAdditionalAssetAttributes;

@interface PLUnmanagedAdjustment : PLManagedObject {
}

@property(retain) NSNumber * adjustmentBaseImageFormat;
@property(retain) NSString * adjustmentFormatIdentifier;
@property(retain) NSString * adjustmentFormatVersion;
@property(retain) NSDate * adjustmentTimestamp;
@property(retain) PLAdditionalAssetAttributes * assetAttributes;
@property(retain) NSString * editorLocalizedName;
@property(retain) NSString * otherAdjustmentsFingerprint;
@property(retain) NSString * similarToOriginalAdjustmentsFingerprint;
@property(retain) NSString * uuid;

+ (id)_convertRedEyeCorrection:(id)arg1 withOrientation:(int)arg2;
+ (id)_convertRedEyeCorrections:(id)arg1 withOrientation:(int)arg2;
+ (id)addUnmanagedAdjustmentFromAdjustmentFileAtPath:(id)arg1 withAsset:(id)arg2;
+ (id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)arg1;

@end