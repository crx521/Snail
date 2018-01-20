//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NetworkExtension.h>

#import "SGGCDAsyncSocketDelegate-Protocol.h"
#import "SGLogRecordContainerDelegate-Protocol.h"

@class ConnectionManager, NSDate, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, OutgoingSelector, SGGCDAsyncSocket, STIPLayerDNSForwarder, SettingsModel;

@interface PacketTunnelProvider : NEPacketTunnelProvider <SGGCDAsyncSocketDelegate, SGLogRecordContainerDelegate>
{
    dispatch_queue_t _dispatchQueue;
    SGGCDAsyncSocket *_commandListener;
    NSMutableSet *_commandSockets;
    NSObject<OS_dispatch_source> *_resetTimer;
    BOOL _isProVersion;
    STIPLayerDNSForwarder *_ipLayerDNSForwarder;
    SettingsModel *_settingsModel;
    NSDate *_startDate;
    ConnectionManager *_connectionManager;
}

@property(readonly) BOOL isProVersion; // @synthesize isProVersion=_isProVersion;
@property(readonly, nonatomic) ConnectionManager *connectionManager; // @synthesize connectionManager=_connectionManager;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) SettingsModel *settingsModel; // @synthesize settingsModel=_settingsModel;
@property(readonly, nonatomic) STIPLayerDNSForwarder *ipLayerDNSForwarder; // @synthesize ipLayerDNSForwarder=_ipLayerDNSForwarder;
@property(readonly, nonatomic) OutgoingSelector *outgoingSelector;

+ (id)sharedInstance;
+ (void)load;
- (void)logRecordContainer:(id)arg1 didAddNewConversationRecord:(id)arg2;
- (void)shutdown;
- (void)dealloc;
- (id)DNSServerAddresses;
- (void)wake;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopTunnelWithReason:(int)arg1 completionHandler:(void (^)(NSError *))completionHandler;
- (id)prepareTunnelNetworkSettingsWithDNSServers:(id)arg1;
- (void)networkChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startTunnelWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeDatagrams:(id)arg1;
- (BOOL)shouldHandlePacketForDestIP:(unsigned int)arg1;
- (void)readPacketFlow;
- (void)stopByCommand;
- (void)returnDNSResultToSocket:(id)arg1;
- (void)returnTrafficUsageToSocket:(id)arg1;
- (void)receiveMessage:(id)arg1 fromSocket:(id)arg2;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long)arg3;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)responseCommand:(id)arg1 toSocket:(id)arg2;
- (void)setupCommandListener;

@end

