//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseObject.h"

@class NSString;

@interface _LRUCacheNode : BaseObject
{
    id _obj;
    NSString *_key;
    _LRUCacheNode *_next;
    _LRUCacheNode *_prev;
}

@property(nonatomic) _LRUCacheNode *prev; // @synthesize prev=_prev;
@property(nonatomic) _LRUCacheNode *next; // @synthesize next=_next;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) id obj; // @synthesize obj=_obj;
- (void).cxx_destruct;

@end
