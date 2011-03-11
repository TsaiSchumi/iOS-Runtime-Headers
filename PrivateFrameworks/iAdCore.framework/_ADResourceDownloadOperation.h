/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableData, NSURLConnection, NSURL;

@interface _ADResourceDownloadOperation : NSOperation  {
    NSString *_HTTPMethod;
    NSString *_authenticationUserName;
    BOOL _supportsAuthentication;
    NSURL *_url;
    NSMutableData *_data;
    NSURLConnection *_conn;
    BOOL _shouldTrackTiming;
    double _startTime;
    double _totalTime;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _successBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorBlock;

    BOOL _finished;
}

@property BOOL finished;
@property(copy) id errorBlock;
@property(copy) id successBlock;
@property double totalTime;
@property double startTime;
@property BOOL shouldTrackTiming;
@property(retain) NSURLConnection * conn;
@property(retain) NSMutableData * data;
@property(retain) NSURL * url;
@property BOOL supportsAuthentication;
@property(retain) NSString * authenticationUserName;
@property(retain) NSString * HTTPMethod;


- (id)successBlock;
- (void)setSupportsAuthentication:(BOOL)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (BOOL)supportsAuthentication;
- (void)_finish;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (id)errorBlock;
- (void)setErrorBlock:(id)arg1;
- (void)setSuccessBlock:(id)arg1;
- (double)totalTime;
- (void)setTotalTime:(double)arg1;
- (BOOL)shouldTrackTiming;
- (void)setShouldTrackTiming:(BOOL)arg1;
- (id)conn;
- (void)setConn:(id)arg1;
- (id)authenticationUserName;
- (double)startTime;
- (void)setUrl:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)url;
- (void)start;
- (void)cancel;
- (id)data;
- (void)dealloc;
- (id)description;
- (void)setStartTime:(double)arg1;
- (void)setData:(id)arg1;
- (id)HTTPMethod;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)setHTTPMethod:(id)arg1;

@end