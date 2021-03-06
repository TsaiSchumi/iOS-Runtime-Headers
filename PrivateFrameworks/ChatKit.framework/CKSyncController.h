/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSyncController : NSObject {
    int  _attachmentRestoredToken;
    int  _restoreStateChangedToken;
    BOOL  _restoring;
}

@property (getter=isRestoring, nonatomic) BOOL restoring;

+ (id)sharedInstance;

- (void)attachmentRestored;
- (id)init;
- (BOOL)isRestoring;
- (void)postAttachmentRestored;
- (void)prioritizeAttachmentAtPath:(id)arg1;
- (void)setRestoring:(BOOL)arg1;
- (void)updateRestoreState;

@end
