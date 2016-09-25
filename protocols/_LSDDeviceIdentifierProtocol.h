/* Generated by RuntimeBrowser.
 */

@protocol _LSDDeviceIdentifierProtocol

@required

- (void)clearAllIdentifiersOfType:(int)arg1;
- (void)clearIdentifiersForUninstallationWithVendorName:(NSString *)arg1 bundleIdentifier:(NSString *)arg2;
- (void)generateIdentifiersWithVendorName:(NSString *)arg1 bundleIdentifier:(NSString *)arg2;
- (void)getIdentifierOfType:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (void)getIdentifierOfType:(void *)arg1 vendorName:(void *)arg2 bundleIdentifier:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: int, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*

@end