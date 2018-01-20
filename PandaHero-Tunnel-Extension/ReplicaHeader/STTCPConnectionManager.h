//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseObject.h"

#import "ConnectorDispatchQueueProvider.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface STTCPConnectionManager : BaseObject <ConnectorDispatchQueueProvider>
{
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_tcpTimer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)closeAllConnection;
- (void)incomingData:(id)arg1;
- (id)delegateQueue;
- (void)removeConnectionRef:(id)arg1;
- (void)incomingTCP:(struct tcp_pcb *)arg1;
- (void)dealloc;
- (id)init;

@end

