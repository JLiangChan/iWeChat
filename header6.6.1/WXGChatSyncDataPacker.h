//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WXGBackupDataMgr;
@protocol WXGChatSyncDataPackerDelegate;

@interface WXGChatSyncDataPacker : NSObject
{
    WXGBackupDataMgr *m_dataMgr;
    _Bool m_bStartPacking;
    NSMutableArray *m_sessionInfoArray;
    NSMutableArray *m_dataSessionInfoArray;
    unsigned int m_unreadCount;
    id <WXGChatSyncDataPackerDelegate> _delegate;
    unsigned long long _totalPackSessionCount;
    unsigned long long _totalPackMsgCount;
}

@property(nonatomic) unsigned long long totalPackMsgCount; // @synthesize totalPackMsgCount=_totalPackMsgCount;
@property(nonatomic) unsigned long long totalPackSessionCount; // @synthesize totalPackSessionCount=_totalPackSessionCount;
@property(nonatomic) __weak id <WXGChatSyncDataPackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)p_writeMediaDataPush:(id)arg1 toPath:(id)arg2;
- (_Bool)p_writeMsgListDataPush:(id)arg1 toPath:(id)arg2;
- (void)p_writePackDataWithBackupOut:(id)arg1;
- (_Bool)isLocalizedContactThatCannotSync:(id)arg1;
- (void)loadSessionInfo;
- (void)stopPackData;
- (void)startPackData;
- (void)dealloc;
- (id)init;

@end
