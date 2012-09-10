// just some really bad objective-c code from Max that probably is incorrect :p


@interface CallbackListener: NSObject {
}
+ (CallbackListener *)callbackListener;
- (void) onTextDownloadComplete:(NSString *) callid andText: (NSString*) text;
@end