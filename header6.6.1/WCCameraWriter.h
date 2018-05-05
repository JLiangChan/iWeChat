//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageMovieWriter.h"

#import "MMovieCompressorDelegate-Protocol.h"

@class AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, GPUImageFramebuffer, MMovieCompressor, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue, WCCameraWriterDelegate;

@interface WCCameraWriter : GPUImageMovieWriter <MMovieCompressorDelegate>
{
    NSObject<OS_dispatch_queue> *m_movieWritingQueue;
    GPUImageFramebuffer *inputFramebufferForDisplay;
    _Bool _forceMPEG4;
    _Bool _m_compressAudio;
    _Bool _m_isRecording;
    _Bool _m_isLowPerformance;
    _Bool _m_disableWritingToFile;
    float _maxMovieDuration;
    long long _videoOrientation;
    NSURL *_outputURL;
    id <WCCameraWriterDelegate> _writerDelegate;
    NSString *_m_videoPath;
    NSString *_m_audioPath;
    NSString *_m_moviePath;
    AVAssetWriterInput *_m_videoInput;
    unsigned long long _m_videoTimeStamp;
    unsigned long long _m_videoFrame;
    AVAssetWriterInputPixelBufferAdaptor *_m_PixelBufferInput;
    MMovieCompressor *_m_audioCompressor;
    double _m_audioBitrate;
    long long _m_videoOrientation;
    unsigned long long _m_audioTimeStamp;
    struct CGSize _m_videoSize;
    CDStruct_1b6d18a9 _m_startTime;
    CDStruct_1b6d18a9 _m_initializeTime;
    CDStruct_1b6d18a9 _m_previousVideoTime;
    struct CGAffineTransform _m_preferredTransform;
}

@property(nonatomic) _Bool m_disableWritingToFile; // @synthesize m_disableWritingToFile=_m_disableWritingToFile;
@property(nonatomic) unsigned long long m_audioTimeStamp; // @synthesize m_audioTimeStamp=_m_audioTimeStamp;
@property(nonatomic) struct CGAffineTransform m_preferredTransform; // @synthesize m_preferredTransform=_m_preferredTransform;
@property(nonatomic) long long m_videoOrientation; // @synthesize m_videoOrientation=_m_videoOrientation;
@property(nonatomic) struct CGSize m_videoSize; // @synthesize m_videoSize=_m_videoSize;
@property(nonatomic) double m_audioBitrate; // @synthesize m_audioBitrate=_m_audioBitrate;
@property(retain, nonatomic) MMovieCompressor *m_audioCompressor; // @synthesize m_audioCompressor=_m_audioCompressor;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *m_PixelBufferInput; // @synthesize m_PixelBufferInput=_m_PixelBufferInput;
@property(nonatomic) unsigned long long m_videoFrame; // @synthesize m_videoFrame=_m_videoFrame;
@property(nonatomic) unsigned long long m_videoTimeStamp; // @synthesize m_videoTimeStamp=_m_videoTimeStamp;
@property(nonatomic) CDStruct_1b6d18a9 m_previousVideoTime; // @synthesize m_previousVideoTime=_m_previousVideoTime;
@property(retain, nonatomic) AVAssetWriterInput *m_videoInput; // @synthesize m_videoInput=_m_videoInput;
@property(nonatomic) _Bool m_isLowPerformance; // @synthesize m_isLowPerformance=_m_isLowPerformance;
@property(nonatomic) CDStruct_1b6d18a9 m_initializeTime; // @synthesize m_initializeTime=_m_initializeTime;
@property(nonatomic) CDStruct_1b6d18a9 m_startTime; // @synthesize m_startTime=_m_startTime;
@property(nonatomic) _Bool m_isRecording; // @synthesize m_isRecording=_m_isRecording;
@property(retain, nonatomic) NSString *m_moviePath; // @synthesize m_moviePath=_m_moviePath;
@property(retain, nonatomic) NSString *m_audioPath; // @synthesize m_audioPath=_m_audioPath;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath=_m_videoPath;
@property(nonatomic) _Bool m_compressAudio; // @synthesize m_compressAudio=_m_compressAudio;
@property(nonatomic) __weak id <WCCameraWriterDelegate> writerDelegate; // @synthesize writerDelegate=_writerDelegate;
@property(retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(nonatomic) _Bool forceMPEG4; // @synthesize forceMPEG4=_forceMPEG4;
@property(nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(nonatomic) float maxMovieDuration; // @synthesize maxMovieDuration=_maxMovieDuration;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writtingQueue; // @synthesize writtingQueue=m_movieWritingQueue;
- (void).cxx_destruct;
- (void)finishRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelRecording;
- (void)finishRecording;
- (void)startRecordingInOrientation:(struct CGAffineTransform)arg1;
- (void)startRecording;
- (void)cancelAmr;
- (void)stopAmr;
- (void)startAmr;
- (void)tryMergeOutputVideo;
- (void)notifyOutput:(id)arg1;
- (void)compressMovieWithExport:(id)arg1;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFailed:(unsigned int)arg2;
- (id)makeNewPath:(id)arg1 withSubfix:(id)arg2;
- (_Bool)isWriting;
@property(readonly, nonatomic) int outputType;
- (id)getOutput;
- (void)setOutput:(id)arg1;
- (void)dealloc;
- (void)setupWriterWithPath:(id)arg1;
- (id)initWithMovieURL:(id)arg1 size:(struct CGSize)arg2 fileType:(id)arg3 outputSettings:(id)arg4;
- (id)initWithMovieURL:(id)arg1 size:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
