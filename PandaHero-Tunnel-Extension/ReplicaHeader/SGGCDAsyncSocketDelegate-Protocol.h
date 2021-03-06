//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSObject<OS_dispatch_queue>, NSString, SGGCDAsyncSocket;

@protocol SGGCDAsyncSocketDelegate <NSObject>

@optional
- (void)socket:(SGGCDAsyncSocket *)arg1 didReceiveTrust:(struct __SecTrust *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)socketDidDisconnect:(SGGCDAsyncSocket *)arg1 withError:(NSError *)arg2;
- (void)socketDidCloseReadStream:(SGGCDAsyncSocket *)arg1;
- (double)socket:(SGGCDAsyncSocket *)arg1 shouldTimeoutWriteWithTag:(long)arg2 elapsed:(double)arg3 bytesDone:(unsigned int)arg4;
- (double)socket:(SGGCDAsyncSocket *)arg1 shouldTimeoutReadWithTag:(long)arg2 elapsed:(double)arg3 bytesDone:(unsigned int)arg4;
- (void)socket:(SGGCDAsyncSocket *)arg1 didWritePartialDataOfLength:(unsigned int)arg2 tag:(long)arg3;
- (void)socket:(SGGCDAsyncSocket *)arg1 didWriteDataWithTag:(long)arg2;
- (void)socket:(SGGCDAsyncSocket *)arg1 didReadPartialDataOfLength:(unsigned int)arg2 tag:(long)arg3;
- (void)socket:(SGGCDAsyncSocket *)arg1 didReadData:(NSData *)arg2 withTag:(long)arg3;
- (void)socket:(SGGCDAsyncSocket *)arg1 didConnectToHost:(NSString *)arg2 port:(unsigned short)arg3;
- (void)socket:(SGGCDAsyncSocket *)arg1 didAcceptNewSocket:(SGGCDAsyncSocket *)arg2;
- (NSObject<OS_dispatch_queue> *)newSocketQueueForConnectionFromAddress:(NSData *)arg1 onSocket:(SGGCDAsyncSocket *)arg2;
@end

