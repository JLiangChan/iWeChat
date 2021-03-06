//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WAJSNativeBufferBase : NSObject
{
    unsigned int _bufferIDSequence;
    NSMutableDictionary *_dicID2Buffer;
    _Bool _useCompatibleModeConvertData;
    unsigned int _nativeBufferSizeLimit;
    unsigned int _nativeBufferQueueLimit;
}

@property unsigned int nativeBufferQueueLimit; // @synthesize nativeBufferQueueLimit=_nativeBufferQueueLimit;
@property unsigned int nativeBufferSizeLimit; // @synthesize nativeBufferSizeLimit=_nativeBufferSizeLimit;
@property _Bool useCompatibleModeConvertData; // @synthesize useCompatibleModeConvertData=_useCompatibleModeConvertData;
- (void).cxx_destruct;
- (id)genBufferID;
- (id)parseNative2SdkNativeBufferParam:(id)arg1 getError:(id *)arg2;
- (id)parseInvokeHandlerNativeBufferParam:(id)arg1 getError:(id *)arg2;
- (unsigned int)nativeBufferTotalSize;
- (id)popNativeBuffer:(id)arg1;
- (id)addNativeBuffer:(id)arg1;
- (void)injectWeiXinNativeBuffer:(id)arg1;
- (void)dealloc;
- (id)init;

@end

