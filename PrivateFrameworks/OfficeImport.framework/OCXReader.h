/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class OCPZipPackage;

@interface OCXReader : NSObject <OCDReader> {
     /* Encoded args for previous method: B8@0:4 */
    OCPZipPackage *mZipPackage;
}

+ (id)readFromData:(id)arg1 cancel:(id)arg2 tracing:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5;
+ (id)readFromFileName:(id)arg1 cancel:(id)arg2 tracing:(id)arg3 asThumbnail:(BOOL)arg4 delegate:(id)arg5;
+ (id)readerWithZipPackage:(id)arg1;

- (void)dealloc;
- (id)initWithZipPackage:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isBinaryReader;
- (id)zipPackage;

@end