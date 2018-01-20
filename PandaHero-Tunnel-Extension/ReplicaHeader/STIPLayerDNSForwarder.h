//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SGDNSClientBase.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_source>, OutgoingSelector;

@interface STIPLayerDNSForwarder : SGDNSClientBase
{
    unsigned short _queryIDCounter;
    NSMutableDictionary *_sentQueriesMap;
    OutgoingSelector *_outgoingSelector;
    NSObject<OS_dispatch_source> *_timer;
    NSArray *_exceptionList;
}

@property(retain, nonatomic) NSArray *exceptionList; // @synthesize exceptionList=_exceptionList;
- (void).cxx_destruct;
- (id)DNSResponseDataWithDomain:(id)arg1 addresses:(id)arg2 identifier:(unsigned short)arg3;
- (id)DNSResponseDataWithResult:(unsigned int)arg1 context:(id)arg2;
- (void)dealloc;
- (void)responseDNSAnswer:(id)arg1 context:(id)arg2;
- (id)emptyAnswer:(id)arg1;
- (void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
- (void)sendQueryToUpstreamServer:(id)arg1;
- (void)incomingDNSContext:(id)arg1;
- (void)incomingDNSQuery:(id)arg1;
- (void)timer;
- (id)init;

@end
