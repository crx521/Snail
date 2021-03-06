//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSNotificationCenter, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, SGLogInterfaceSessionRecord;

@interface SGLogRecordContainer : NSObject
{
    NSMutableArray *_requestLogArray;
    SGLogInterfaceSessionRecord *_wifiInterfaceSessionRecord;
    SGLogInterfaceSessionRecord *_cellularSessionRecord;
    SGLogInterfaceSessionRecord *_unknownSessionRecord;
    double _previousTestSpeedTime;
    NSObject<OS_dispatch_source> *_speedTimer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _ignoreSystemRelated;
    NSString *_sessionDirectory;
    NSNotificationCenter *_notificationCenter;
    id <SGLogRecordContainerDelegate> _delegate;
}

+ (void)setActiveLogContainer:(id)arg1;
+ (id)activeLogContainer;
@property __weak id <SGLogRecordContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL ignoreSystemRelated; // @synthesize ignoreSystemRelated=_ignoreSystemRelated;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSString *sessionDirectory; // @synthesize sessionDirectory=_sessionDirectory;
- (void).cxx_destruct;
- (id)dispatch_queue;
- (id)allInterfaceSessionRecord;
- (void)saveAllData;
- (void)removeRequestRecordRef:(id)arg1;
- (id)newConversationRecordWithHostname:(id)arg1;
- (id)interfaceSessionRecordWithSourceIP:(id)arg1;
- (void)dealloc;
- (void)speedTimer;
- (void)resumeTimer;
- (void)pauseTimer;
- (id)initWithSessionDirectory:(id)arg1;

@end

