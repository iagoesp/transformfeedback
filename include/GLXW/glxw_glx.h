
#ifndef glxw_glx_h
#define glxw_glx_h

struct glxw_glx;

#include <GL/glx.h>
#include <GL/glxext.h>


#ifndef __gl_h_
#define __gl_h_
#endif

#ifdef __cplusplus
extern "C" {
#endif

int glxwInitGLX(void);
int glxwInitGLXCtx(struct glxw_glx *ctx);

struct glxw_glx {
PFNGLXGETFBCONFIGSPROC _glXGetFBConfigs;
PFNGLXCHOOSEFBCONFIGPROC _glXChooseFBConfig;
PFNGLXGETFBCONFIGATTRIBPROC _glXGetFBConfigAttrib;
PFNGLXGETVISUALFROMFBCONFIGPROC _glXGetVisualFromFBConfig;
PFNGLXCREATEWINDOWPROC _glXCreateWindow;
PFNGLXDESTROYWINDOWPROC _glXDestroyWindow;
PFNGLXCREATEPIXMAPPROC _glXCreatePixmap;
PFNGLXDESTROYPIXMAPPROC _glXDestroyPixmap;
PFNGLXCREATEPBUFFERPROC _glXCreatePbuffer;
PFNGLXDESTROYPBUFFERPROC _glXDestroyPbuffer;
PFNGLXQUERYDRAWABLEPROC _glXQueryDrawable;
PFNGLXCREATENEWCONTEXTPROC _glXCreateNewContext;
PFNGLXMAKECONTEXTCURRENTPROC _glXMakeContextCurrent;
PFNGLXGETCURRENTREADDRAWABLEPROC _glXGetCurrentReadDrawable;
PFNGLXQUERYCONTEXTPROC _glXQueryContext;
PFNGLXSELECTEVENTPROC _glXSelectEvent;
PFNGLXGETSELECTEDEVENTPROC _glXGetSelectedEvent;
PFNGLXCREATECONTEXTATTRIBSARBPROC _glXCreateContextAttribsARB;
PFNGLXGETGPUIDSAMDPROC _glXGetGPUIDsAMD;
PFNGLXGETGPUINFOAMDPROC _glXGetGPUInfoAMD;
PFNGLXGETCONTEXTGPUIDAMDPROC _glXGetContextGPUIDAMD;
PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC _glXCreateAssociatedContextAMD;
PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC _glXCreateAssociatedContextAttribsAMD;
PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC _glXDeleteAssociatedContextAMD;
PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC _glXMakeAssociatedContextCurrentAMD;
PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC _glXGetCurrentAssociatedContextAMD;
PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC _glXBlitContextFramebufferAMD;
PFNGLXGETCURRENTDISPLAYEXTPROC _glXGetCurrentDisplayEXT;
PFNGLXQUERYCONTEXTINFOEXTPROC _glXQueryContextInfoEXT;
PFNGLXGETCONTEXTIDEXTPROC _glXGetContextIDEXT;
PFNGLXIMPORTCONTEXTEXTPROC _glXImportContextEXT;
PFNGLXFREECONTEXTEXTPROC _glXFreeContextEXT;
PFNGLXSWAPINTERVALEXTPROC _glXSwapIntervalEXT;
PFNGLXBINDTEXIMAGEEXTPROC _glXBindTexImageEXT;
PFNGLXRELEASETEXIMAGEEXTPROC _glXReleaseTexImageEXT;
PFNGLXGETAGPOFFSETMESAPROC _glXGetAGPOffsetMESA;
PFNGLXCOPYSUBBUFFERMESAPROC _glXCopySubBufferMESA;
PFNGLXCREATEGLXPIXMAPMESAPROC _glXCreateGLXPixmapMESA;
PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC _glXQueryCurrentRendererIntegerMESA;
PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC _glXQueryCurrentRendererStringMESA;
PFNGLXQUERYRENDERERINTEGERMESAPROC _glXQueryRendererIntegerMESA;
PFNGLXQUERYRENDERERSTRINGMESAPROC _glXQueryRendererStringMESA;
PFNGLXRELEASEBUFFERSMESAPROC _glXReleaseBuffersMESA;
PFNGLXSET3DFXMODEMESAPROC _glXSet3DfxModeMESA;
PFNGLXGETSWAPINTERVALMESAPROC _glXGetSwapIntervalMESA;
PFNGLXSWAPINTERVALMESAPROC _glXSwapIntervalMESA;
PFNGLXCOPYBUFFERSUBDATANVPROC _glXCopyBufferSubDataNV;
PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC _glXNamedCopyBufferSubDataNV;
PFNGLXCOPYIMAGESUBDATANVPROC _glXCopyImageSubDataNV;
PFNGLXDELAYBEFORESWAPNVPROC _glXDelayBeforeSwapNV;
PFNGLXENUMERATEVIDEODEVICESNVPROC _glXEnumerateVideoDevicesNV;
PFNGLXBINDVIDEODEVICENVPROC _glXBindVideoDeviceNV;
PFNGLXJOINSWAPGROUPNVPROC _glXJoinSwapGroupNV;
PFNGLXBINDSWAPBARRIERNVPROC _glXBindSwapBarrierNV;
PFNGLXQUERYSWAPGROUPNVPROC _glXQuerySwapGroupNV;
PFNGLXQUERYMAXSWAPGROUPSNVPROC _glXQueryMaxSwapGroupsNV;
PFNGLXQUERYFRAMECOUNTNVPROC _glXQueryFrameCountNV;
PFNGLXRESETFRAMECOUNTNVPROC _glXResetFrameCountNV;
PFNGLXBINDVIDEOCAPTUREDEVICENVPROC _glXBindVideoCaptureDeviceNV;
PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC _glXEnumerateVideoCaptureDevicesNV;
PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC _glXLockVideoCaptureDeviceNV;
PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC _glXQueryVideoCaptureDeviceNV;
PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC _glXReleaseVideoCaptureDeviceNV;
PFNGLXGETVIDEODEVICENVPROC _glXGetVideoDeviceNV;
PFNGLXRELEASEVIDEODEVICENVPROC _glXReleaseVideoDeviceNV;
PFNGLXBINDVIDEOIMAGENVPROC _glXBindVideoImageNV;
PFNGLXRELEASEVIDEOIMAGENVPROC _glXReleaseVideoImageNV;
PFNGLXSENDPBUFFERTOVIDEONVPROC _glXSendPbufferToVideoNV;
PFNGLXGETVIDEOINFONVPROC _glXGetVideoInfoNV;
PFNGLXGETSYNCVALUESOMLPROC _glXGetSyncValuesOML;
PFNGLXGETMSCRATEOMLPROC _glXGetMscRateOML;
PFNGLXSWAPBUFFERSMSCOMLPROC _glXSwapBuffersMscOML;
PFNGLXWAITFORMSCOMLPROC _glXWaitForMscOML;
PFNGLXWAITFORSBCOMLPROC _glXWaitForSbcOML;
PFNGLXQUERYHYPERPIPENETWORKSGIXPROC _glXQueryHyperpipeNetworkSGIX;
PFNGLXHYPERPIPECONFIGSGIXPROC _glXHyperpipeConfigSGIX;
PFNGLXQUERYHYPERPIPECONFIGSGIXPROC _glXQueryHyperpipeConfigSGIX;
PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC _glXDestroyHyperpipeConfigSGIX;
PFNGLXBINDHYPERPIPESGIXPROC _glXBindHyperpipeSGIX;
PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC _glXQueryHyperpipeBestAttribSGIX;
PFNGLXHYPERPIPEATTRIBSGIXPROC _glXHyperpipeAttribSGIX;
PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC _glXQueryHyperpipeAttribSGIX;
PFNGLXCREATEGLXPBUFFERSGIXPROC _glXCreateGLXPbufferSGIX;
PFNGLXDESTROYGLXPBUFFERSGIXPROC _glXDestroyGLXPbufferSGIX;
PFNGLXQUERYGLXPBUFFERSGIXPROC _glXQueryGLXPbufferSGIX;
PFNGLXSELECTEVENTSGIXPROC _glXSelectEventSGIX;
PFNGLXGETSELECTEDEVENTSGIXPROC _glXGetSelectedEventSGIX;
PFNGLXBINDSWAPBARRIERSGIXPROC _glXBindSwapBarrierSGIX;
PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC _glXQueryMaxSwapBarriersSGIX;
PFNGLXJOINSWAPGROUPSGIXPROC _glXJoinSwapGroupSGIX;
PFNGLXBINDCHANNELTOWINDOWSGIXPROC _glXBindChannelToWindowSGIX;
PFNGLXCHANNELRECTSGIXPROC _glXChannelRectSGIX;
PFNGLXQUERYCHANNELRECTSGIXPROC _glXQueryChannelRectSGIX;
PFNGLXQUERYCHANNELDELTASSGIXPROC _glXQueryChannelDeltasSGIX;
PFNGLXCHANNELRECTSYNCSGIXPROC _glXChannelRectSyncSGIX;
PFNGLXCUSHIONSGIPROC _glXCushionSGI;
PFNGLXMAKECURRENTREADSGIPROC _glXMakeCurrentReadSGI;
PFNGLXGETCURRENTREADDRAWABLESGIPROC _glXGetCurrentReadDrawableSGI;
PFNGLXSWAPINTERVALSGIPROC _glXSwapIntervalSGI;
PFNGLXGETVIDEOSYNCSGIPROC _glXGetVideoSyncSGI;
PFNGLXWAITVIDEOSYNCSGIPROC _glXWaitVideoSyncSGI;
PFNGLXGETTRANSPARENTINDEXSUNPROC _glXGetTransparentIndexSUN;
};

extern struct glxw_glx *glxw_glx;

#define glXGetFBConfigs (glxw_glx->_glXGetFBConfigs)
#define glXChooseFBConfig (glxw_glx->_glXChooseFBConfig)
#define glXGetFBConfigAttrib (glxw_glx->_glXGetFBConfigAttrib)
#define glXGetVisualFromFBConfig (glxw_glx->_glXGetVisualFromFBConfig)
#define glXCreateWindow (glxw_glx->_glXCreateWindow)
#define glXDestroyWindow (glxw_glx->_glXDestroyWindow)
#define glXCreatePixmap (glxw_glx->_glXCreatePixmap)
#define glXDestroyPixmap (glxw_glx->_glXDestroyPixmap)
#define glXCreatePbuffer (glxw_glx->_glXCreatePbuffer)
#define glXDestroyPbuffer (glxw_glx->_glXDestroyPbuffer)
#define glXQueryDrawable (glxw_glx->_glXQueryDrawable)
#define glXCreateNewContext (glxw_glx->_glXCreateNewContext)
#define glXMakeContextCurrent (glxw_glx->_glXMakeContextCurrent)
#define glXGetCurrentReadDrawable (glxw_glx->_glXGetCurrentReadDrawable)
#define glXQueryContext (glxw_glx->_glXQueryContext)
#define glXSelectEvent (glxw_glx->_glXSelectEvent)
#define glXGetSelectedEvent (glxw_glx->_glXGetSelectedEvent)
#define glXCreateContextAttribsARB (glxw_glx->_glXCreateContextAttribsARB)
#define glXGetGPUIDsAMD (glxw_glx->_glXGetGPUIDsAMD)
#define glXGetGPUInfoAMD (glxw_glx->_glXGetGPUInfoAMD)
#define glXGetContextGPUIDAMD (glxw_glx->_glXGetContextGPUIDAMD)
#define glXCreateAssociatedContextAMD (glxw_glx->_glXCreateAssociatedContextAMD)
#define glXCreateAssociatedContextAttribsAMD (glxw_glx->_glXCreateAssociatedContextAttribsAMD)
#define glXDeleteAssociatedContextAMD (glxw_glx->_glXDeleteAssociatedContextAMD)
#define glXMakeAssociatedContextCurrentAMD (glxw_glx->_glXMakeAssociatedContextCurrentAMD)
#define glXGetCurrentAssociatedContextAMD (glxw_glx->_glXGetCurrentAssociatedContextAMD)
#define glXBlitContextFramebufferAMD (glxw_glx->_glXBlitContextFramebufferAMD)
#define glXGetCurrentDisplayEXT (glxw_glx->_glXGetCurrentDisplayEXT)
#define glXQueryContextInfoEXT (glxw_glx->_glXQueryContextInfoEXT)
#define glXGetContextIDEXT (glxw_glx->_glXGetContextIDEXT)
#define glXImportContextEXT (glxw_glx->_glXImportContextEXT)
#define glXFreeContextEXT (glxw_glx->_glXFreeContextEXT)
#define glXSwapIntervalEXT (glxw_glx->_glXSwapIntervalEXT)
#define glXBindTexImageEXT (glxw_glx->_glXBindTexImageEXT)
#define glXReleaseTexImageEXT (glxw_glx->_glXReleaseTexImageEXT)
#define glXGetAGPOffsetMESA (glxw_glx->_glXGetAGPOffsetMESA)
#define glXCopySubBufferMESA (glxw_glx->_glXCopySubBufferMESA)
#define glXCreateGLXPixmapMESA (glxw_glx->_glXCreateGLXPixmapMESA)
#define glXQueryCurrentRendererIntegerMESA (glxw_glx->_glXQueryCurrentRendererIntegerMESA)
#define glXQueryCurrentRendererStringMESA (glxw_glx->_glXQueryCurrentRendererStringMESA)
#define glXQueryRendererIntegerMESA (glxw_glx->_glXQueryRendererIntegerMESA)
#define glXQueryRendererStringMESA (glxw_glx->_glXQueryRendererStringMESA)
#define glXReleaseBuffersMESA (glxw_glx->_glXReleaseBuffersMESA)
#define glXSet3DfxModeMESA (glxw_glx->_glXSet3DfxModeMESA)
#define glXGetSwapIntervalMESA (glxw_glx->_glXGetSwapIntervalMESA)
#define glXSwapIntervalMESA (glxw_glx->_glXSwapIntervalMESA)
#define glXCopyBufferSubDataNV (glxw_glx->_glXCopyBufferSubDataNV)
#define glXNamedCopyBufferSubDataNV (glxw_glx->_glXNamedCopyBufferSubDataNV)
#define glXCopyImageSubDataNV (glxw_glx->_glXCopyImageSubDataNV)
#define glXDelayBeforeSwapNV (glxw_glx->_glXDelayBeforeSwapNV)
#define glXEnumerateVideoDevicesNV (glxw_glx->_glXEnumerateVideoDevicesNV)
#define glXBindVideoDeviceNV (glxw_glx->_glXBindVideoDeviceNV)
#define glXJoinSwapGroupNV (glxw_glx->_glXJoinSwapGroupNV)
#define glXBindSwapBarrierNV (glxw_glx->_glXBindSwapBarrierNV)
#define glXQuerySwapGroupNV (glxw_glx->_glXQuerySwapGroupNV)
#define glXQueryMaxSwapGroupsNV (glxw_glx->_glXQueryMaxSwapGroupsNV)
#define glXQueryFrameCountNV (glxw_glx->_glXQueryFrameCountNV)
#define glXResetFrameCountNV (glxw_glx->_glXResetFrameCountNV)
#define glXBindVideoCaptureDeviceNV (glxw_glx->_glXBindVideoCaptureDeviceNV)
#define glXEnumerateVideoCaptureDevicesNV (glxw_glx->_glXEnumerateVideoCaptureDevicesNV)
#define glXLockVideoCaptureDeviceNV (glxw_glx->_glXLockVideoCaptureDeviceNV)
#define glXQueryVideoCaptureDeviceNV (glxw_glx->_glXQueryVideoCaptureDeviceNV)
#define glXReleaseVideoCaptureDeviceNV (glxw_glx->_glXReleaseVideoCaptureDeviceNV)
#define glXGetVideoDeviceNV (glxw_glx->_glXGetVideoDeviceNV)
#define glXReleaseVideoDeviceNV (glxw_glx->_glXReleaseVideoDeviceNV)
#define glXBindVideoImageNV (glxw_glx->_glXBindVideoImageNV)
#define glXReleaseVideoImageNV (glxw_glx->_glXReleaseVideoImageNV)
#define glXSendPbufferToVideoNV (glxw_glx->_glXSendPbufferToVideoNV)
#define glXGetVideoInfoNV (glxw_glx->_glXGetVideoInfoNV)
#define glXGetSyncValuesOML (glxw_glx->_glXGetSyncValuesOML)
#define glXGetMscRateOML (glxw_glx->_glXGetMscRateOML)
#define glXSwapBuffersMscOML (glxw_glx->_glXSwapBuffersMscOML)
#define glXWaitForMscOML (glxw_glx->_glXWaitForMscOML)
#define glXWaitForSbcOML (glxw_glx->_glXWaitForSbcOML)
#define glXQueryHyperpipeNetworkSGIX (glxw_glx->_glXQueryHyperpipeNetworkSGIX)
#define glXHyperpipeConfigSGIX (glxw_glx->_glXHyperpipeConfigSGIX)
#define glXQueryHyperpipeConfigSGIX (glxw_glx->_glXQueryHyperpipeConfigSGIX)
#define glXDestroyHyperpipeConfigSGIX (glxw_glx->_glXDestroyHyperpipeConfigSGIX)
#define glXBindHyperpipeSGIX (glxw_glx->_glXBindHyperpipeSGIX)
#define glXQueryHyperpipeBestAttribSGIX (glxw_glx->_glXQueryHyperpipeBestAttribSGIX)
#define glXHyperpipeAttribSGIX (glxw_glx->_glXHyperpipeAttribSGIX)
#define glXQueryHyperpipeAttribSGIX (glxw_glx->_glXQueryHyperpipeAttribSGIX)
#define glXCreateGLXPbufferSGIX (glxw_glx->_glXCreateGLXPbufferSGIX)
#define glXDestroyGLXPbufferSGIX (glxw_glx->_glXDestroyGLXPbufferSGIX)
#define glXQueryGLXPbufferSGIX (glxw_glx->_glXQueryGLXPbufferSGIX)
#define glXSelectEventSGIX (glxw_glx->_glXSelectEventSGIX)
#define glXGetSelectedEventSGIX (glxw_glx->_glXGetSelectedEventSGIX)
#define glXBindSwapBarrierSGIX (glxw_glx->_glXBindSwapBarrierSGIX)
#define glXQueryMaxSwapBarriersSGIX (glxw_glx->_glXQueryMaxSwapBarriersSGIX)
#define glXJoinSwapGroupSGIX (glxw_glx->_glXJoinSwapGroupSGIX)
#define glXBindChannelToWindowSGIX (glxw_glx->_glXBindChannelToWindowSGIX)
#define glXChannelRectSGIX (glxw_glx->_glXChannelRectSGIX)
#define glXQueryChannelRectSGIX (glxw_glx->_glXQueryChannelRectSGIX)
#define glXQueryChannelDeltasSGIX (glxw_glx->_glXQueryChannelDeltasSGIX)
#define glXChannelRectSyncSGIX (glxw_glx->_glXChannelRectSyncSGIX)
#define glXCushionSGI (glxw_glx->_glXCushionSGI)
#define glXMakeCurrentReadSGI (glxw_glx->_glXMakeCurrentReadSGI)
#define glXGetCurrentReadDrawableSGI (glxw_glx->_glXGetCurrentReadDrawableSGI)
#define glXSwapIntervalSGI (glxw_glx->_glXSwapIntervalSGI)
#define glXGetVideoSyncSGI (glxw_glx->_glXGetVideoSyncSGI)
#define glXWaitVideoSyncSGI (glxw_glx->_glXWaitVideoSyncSGI)
#define glXGetTransparentIndexSUN (glxw_glx->_glXGetTransparentIndexSUN)

#ifdef __cplusplus
}
#endif

#endif
