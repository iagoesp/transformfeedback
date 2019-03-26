
#ifndef glxw_egl_h
#define glxw_egl_h

struct glxw_egl;

#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <EGL/eglplatform.h>


#ifndef __gl_h_
#define __gl_h_
#endif

#ifdef __cplusplus
extern "C" {
#endif

int glxwInitEGL(void);
int glxwInitEGLCtx(struct glxw_egl *ctx);

struct glxw_egl {
PFNEGLCREATESYNC64KHRPROC _eglCreateSync64KHR;
PFNEGLDEBUGMESSAGECONTROLKHRPROC _eglDebugMessageControlKHR;
PFNEGLQUERYDEBUGKHRPROC _eglQueryDebugKHR;
PFNEGLLABELOBJECTKHRPROC _eglLabelObjectKHR;
PFNEGLQUERYDISPLAYATTRIBKHRPROC _eglQueryDisplayAttribKHR;
PFNEGLCREATESYNCKHRPROC _eglCreateSyncKHR;
PFNEGLDESTROYSYNCKHRPROC _eglDestroySyncKHR;
PFNEGLCLIENTWAITSYNCKHRPROC _eglClientWaitSyncKHR;
PFNEGLGETSYNCATTRIBKHRPROC _eglGetSyncAttribKHR;
PFNEGLCREATEIMAGEKHRPROC _eglCreateImageKHR;
PFNEGLDESTROYIMAGEKHRPROC _eglDestroyImageKHR;
PFNEGLLOCKSURFACEKHRPROC _eglLockSurfaceKHR;
PFNEGLUNLOCKSURFACEKHRPROC _eglUnlockSurfaceKHR;
PFNEGLQUERYSURFACE64KHRPROC _eglQuerySurface64KHR;
PFNEGLSETDAMAGEREGIONKHRPROC _eglSetDamageRegionKHR;
PFNEGLSIGNALSYNCKHRPROC _eglSignalSyncKHR;
PFNEGLCREATESTREAMKHRPROC _eglCreateStreamKHR;
PFNEGLDESTROYSTREAMKHRPROC _eglDestroyStreamKHR;
PFNEGLSTREAMATTRIBKHRPROC _eglStreamAttribKHR;
PFNEGLQUERYSTREAMKHRPROC _eglQueryStreamKHR;
PFNEGLQUERYSTREAMU64KHRPROC _eglQueryStreamu64KHR;
PFNEGLCREATESTREAMATTRIBKHRPROC _eglCreateStreamAttribKHR;
PFNEGLSETSTREAMATTRIBKHRPROC _eglSetStreamAttribKHR;
PFNEGLQUERYSTREAMATTRIBKHRPROC _eglQueryStreamAttribKHR;
PFNEGLSTREAMCONSUMERACQUIREATTRIBKHRPROC _eglStreamConsumerAcquireAttribKHR;
PFNEGLSTREAMCONSUMERRELEASEATTRIBKHRPROC _eglStreamConsumerReleaseAttribKHR;
PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC _eglStreamConsumerGLTextureExternalKHR;
PFNEGLSTREAMCONSUMERACQUIREKHRPROC _eglStreamConsumerAcquireKHR;
PFNEGLSTREAMCONSUMERRELEASEKHRPROC _eglStreamConsumerReleaseKHR;
PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC _eglGetStreamFileDescriptorKHR;
PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC _eglCreateStreamFromFileDescriptorKHR;
PFNEGLQUERYSTREAMTIMEKHRPROC _eglQueryStreamTimeKHR;
PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC _eglCreateStreamProducerSurfaceKHR;
PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC _eglSwapBuffersWithDamageKHR;
PFNEGLWAITSYNCKHRPROC _eglWaitSyncKHR;
PFNEGLSETBLOBCACHEFUNCSANDROIDPROC _eglSetBlobCacheFuncsANDROID;
PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC _eglCreateNativeClientBufferANDROID;
PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC _eglGetCompositorTimingSupportedANDROID;
PFNEGLGETCOMPOSITORTIMINGANDROIDPROC _eglGetCompositorTimingANDROID;
PFNEGLGETNEXTFRAMEIDANDROIDPROC _eglGetNextFrameIdANDROID;
PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC _eglGetFrameTimestampSupportedANDROID;
PFNEGLGETFRAMETIMESTAMPSANDROIDPROC _eglGetFrameTimestampsANDROID;
PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC _eglGetNativeClientBufferANDROID;
PFNEGLDUPNATIVEFENCEFDANDROIDPROC _eglDupNativeFenceFDANDROID;
PFNEGLPRESENTATIONTIMEANDROIDPROC _eglPresentationTimeANDROID;
PFNEGLQUERYSURFACEPOINTERANGLEPROC _eglQuerySurfacePointerANGLE;
PFNEGLCLIENTSIGNALSYNCEXTPROC _eglClientSignalSyncEXT;
PFNEGLCOMPOSITORSETCONTEXTLISTEXTPROC _eglCompositorSetContextListEXT;
PFNEGLCOMPOSITORSETCONTEXTATTRIBUTESEXTPROC _eglCompositorSetContextAttributesEXT;
PFNEGLCOMPOSITORSETWINDOWLISTEXTPROC _eglCompositorSetWindowListEXT;
PFNEGLCOMPOSITORSETWINDOWATTRIBUTESEXTPROC _eglCompositorSetWindowAttributesEXT;
PFNEGLCOMPOSITORBINDTEXWINDOWEXTPROC _eglCompositorBindTexWindowEXT;
PFNEGLCOMPOSITORSETSIZEEXTPROC _eglCompositorSetSizeEXT;
PFNEGLCOMPOSITORSWAPPOLICYEXTPROC _eglCompositorSwapPolicyEXT;
PFNEGLQUERYDEVICEATTRIBEXTPROC _eglQueryDeviceAttribEXT;
PFNEGLQUERYDEVICESTRINGEXTPROC _eglQueryDeviceStringEXT;
PFNEGLQUERYDEVICESEXTPROC _eglQueryDevicesEXT;
PFNEGLQUERYDISPLAYATTRIBEXTPROC _eglQueryDisplayAttribEXT;
PFNEGLQUERYDMABUFFORMATSEXTPROC _eglQueryDmaBufFormatsEXT;
PFNEGLQUERYDMABUFMODIFIERSEXTPROC _eglQueryDmaBufModifiersEXT;
PFNEGLGETOUTPUTLAYERSEXTPROC _eglGetOutputLayersEXT;
PFNEGLGETOUTPUTPORTSEXTPROC _eglGetOutputPortsEXT;
PFNEGLOUTPUTLAYERATTRIBEXTPROC _eglOutputLayerAttribEXT;
PFNEGLQUERYOUTPUTLAYERATTRIBEXTPROC _eglQueryOutputLayerAttribEXT;
PFNEGLQUERYOUTPUTLAYERSTRINGEXTPROC _eglQueryOutputLayerStringEXT;
PFNEGLOUTPUTPORTATTRIBEXTPROC _eglOutputPortAttribEXT;
PFNEGLQUERYOUTPUTPORTATTRIBEXTPROC _eglQueryOutputPortAttribEXT;
PFNEGLQUERYOUTPUTPORTSTRINGEXTPROC _eglQueryOutputPortStringEXT;
PFNEGLGETPLATFORMDISPLAYEXTPROC _eglGetPlatformDisplayEXT;
PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC _eglCreatePlatformWindowSurfaceEXT;
PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC _eglCreatePlatformPixmapSurfaceEXT;
PFNEGLSTREAMCONSUMEROUTPUTEXTPROC _eglStreamConsumerOutputEXT;
PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC _eglSwapBuffersWithDamageEXT;
PFNEGLUNSIGNALSYNCEXTPROC _eglUnsignalSyncEXT;
PFNEGLCREATEPIXMAPSURFACEHIPROC _eglCreatePixmapSurfaceHI;
PFNEGLCREATEDRMIMAGEMESAPROC _eglCreateDRMImageMESA;
PFNEGLEXPORTDRMIMAGEMESAPROC _eglExportDRMImageMESA;
PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC _eglExportDMABUFImageQueryMESA;
PFNEGLEXPORTDMABUFIMAGEMESAPROC _eglExportDMABUFImageMESA;
PFNEGLGETDISPLAYDRIVERCONFIGPROC _eglGetDisplayDriverConfig;
PFNEGLGETDISPLAYDRIVERNAMEPROC _eglGetDisplayDriverName;
PFNEGLSWAPBUFFERSREGIONNOKPROC _eglSwapBuffersRegionNOK;
PFNEGLSWAPBUFFERSREGION2NOKPROC _eglSwapBuffersRegion2NOK;
PFNEGLQUERYNATIVEDISPLAYNVPROC _eglQueryNativeDisplayNV;
PFNEGLQUERYNATIVEWINDOWNVPROC _eglQueryNativeWindowNV;
PFNEGLQUERYNATIVEPIXMAPNVPROC _eglQueryNativePixmapNV;
PFNEGLPOSTSUBBUFFERNVPROC _eglPostSubBufferNV;
PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALATTRIBSNVPROC _eglStreamConsumerGLTextureExternalAttribsNV;
PFNEGLSTREAMFLUSHNVPROC _eglStreamFlushNV;
PFNEGLQUERYDISPLAYATTRIBNVPROC _eglQueryDisplayAttribNV;
PFNEGLSETSTREAMMETADATANVPROC _eglSetStreamMetadataNV;
PFNEGLQUERYSTREAMMETADATANVPROC _eglQueryStreamMetadataNV;
PFNEGLRESETSTREAMNVPROC _eglResetStreamNV;
PFNEGLCREATESTREAMSYNCNVPROC _eglCreateStreamSyncNV;
PFNEGLCREATEFENCESYNCNVPROC _eglCreateFenceSyncNV;
PFNEGLDESTROYSYNCNVPROC _eglDestroySyncNV;
PFNEGLFENCENVPROC _eglFenceNV;
PFNEGLCLIENTWAITSYNCNVPROC _eglClientWaitSyncNV;
PFNEGLSIGNALSYNCNVPROC _eglSignalSyncNV;
PFNEGLGETSYNCATTRIBNVPROC _eglGetSyncAttribNV;
PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC _eglGetSystemTimeFrequencyNV;
PFNEGLGETSYSTEMTIMENVPROC _eglGetSystemTimeNV;
};

extern struct glxw_egl *glxw_egl;

#define eglCreateSync64KHR (glxw_egl->_eglCreateSync64KHR)
#define eglDebugMessageControlKHR (glxw_egl->_eglDebugMessageControlKHR)
#define eglQueryDebugKHR (glxw_egl->_eglQueryDebugKHR)
#define eglLabelObjectKHR (glxw_egl->_eglLabelObjectKHR)
#define eglQueryDisplayAttribKHR (glxw_egl->_eglQueryDisplayAttribKHR)
#define eglCreateSyncKHR (glxw_egl->_eglCreateSyncKHR)
#define eglDestroySyncKHR (glxw_egl->_eglDestroySyncKHR)
#define eglClientWaitSyncKHR (glxw_egl->_eglClientWaitSyncKHR)
#define eglGetSyncAttribKHR (glxw_egl->_eglGetSyncAttribKHR)
#define eglCreateImageKHR (glxw_egl->_eglCreateImageKHR)
#define eglDestroyImageKHR (glxw_egl->_eglDestroyImageKHR)
#define eglLockSurfaceKHR (glxw_egl->_eglLockSurfaceKHR)
#define eglUnlockSurfaceKHR (glxw_egl->_eglUnlockSurfaceKHR)
#define eglQuerySurface64KHR (glxw_egl->_eglQuerySurface64KHR)
#define eglSetDamageRegionKHR (glxw_egl->_eglSetDamageRegionKHR)
#define eglSignalSyncKHR (glxw_egl->_eglSignalSyncKHR)
#define eglCreateStreamKHR (glxw_egl->_eglCreateStreamKHR)
#define eglDestroyStreamKHR (glxw_egl->_eglDestroyStreamKHR)
#define eglStreamAttribKHR (glxw_egl->_eglStreamAttribKHR)
#define eglQueryStreamKHR (glxw_egl->_eglQueryStreamKHR)
#define eglQueryStreamu64KHR (glxw_egl->_eglQueryStreamu64KHR)
#define eglCreateStreamAttribKHR (glxw_egl->_eglCreateStreamAttribKHR)
#define eglSetStreamAttribKHR (glxw_egl->_eglSetStreamAttribKHR)
#define eglQueryStreamAttribKHR (glxw_egl->_eglQueryStreamAttribKHR)
#define eglStreamConsumerAcquireAttribKHR (glxw_egl->_eglStreamConsumerAcquireAttribKHR)
#define eglStreamConsumerReleaseAttribKHR (glxw_egl->_eglStreamConsumerReleaseAttribKHR)
#define eglStreamConsumerGLTextureExternalKHR (glxw_egl->_eglStreamConsumerGLTextureExternalKHR)
#define eglStreamConsumerAcquireKHR (glxw_egl->_eglStreamConsumerAcquireKHR)
#define eglStreamConsumerReleaseKHR (glxw_egl->_eglStreamConsumerReleaseKHR)
#define eglGetStreamFileDescriptorKHR (glxw_egl->_eglGetStreamFileDescriptorKHR)
#define eglCreateStreamFromFileDescriptorKHR (glxw_egl->_eglCreateStreamFromFileDescriptorKHR)
#define eglQueryStreamTimeKHR (glxw_egl->_eglQueryStreamTimeKHR)
#define eglCreateStreamProducerSurfaceKHR (glxw_egl->_eglCreateStreamProducerSurfaceKHR)
#define eglSwapBuffersWithDamageKHR (glxw_egl->_eglSwapBuffersWithDamageKHR)
#define eglWaitSyncKHR (glxw_egl->_eglWaitSyncKHR)
#define eglSetBlobCacheFuncsANDROID (glxw_egl->_eglSetBlobCacheFuncsANDROID)
#define eglCreateNativeClientBufferANDROID (glxw_egl->_eglCreateNativeClientBufferANDROID)
#define eglGetCompositorTimingSupportedANDROID (glxw_egl->_eglGetCompositorTimingSupportedANDROID)
#define eglGetCompositorTimingANDROID (glxw_egl->_eglGetCompositorTimingANDROID)
#define eglGetNextFrameIdANDROID (glxw_egl->_eglGetNextFrameIdANDROID)
#define eglGetFrameTimestampSupportedANDROID (glxw_egl->_eglGetFrameTimestampSupportedANDROID)
#define eglGetFrameTimestampsANDROID (glxw_egl->_eglGetFrameTimestampsANDROID)
#define eglGetNativeClientBufferANDROID (glxw_egl->_eglGetNativeClientBufferANDROID)
#define eglDupNativeFenceFDANDROID (glxw_egl->_eglDupNativeFenceFDANDROID)
#define eglPresentationTimeANDROID (glxw_egl->_eglPresentationTimeANDROID)
#define eglQuerySurfacePointerANGLE (glxw_egl->_eglQuerySurfacePointerANGLE)
#define eglClientSignalSyncEXT (glxw_egl->_eglClientSignalSyncEXT)
#define eglCompositorSetContextListEXT (glxw_egl->_eglCompositorSetContextListEXT)
#define eglCompositorSetContextAttributesEXT (glxw_egl->_eglCompositorSetContextAttributesEXT)
#define eglCompositorSetWindowListEXT (glxw_egl->_eglCompositorSetWindowListEXT)
#define eglCompositorSetWindowAttributesEXT (glxw_egl->_eglCompositorSetWindowAttributesEXT)
#define eglCompositorBindTexWindowEXT (glxw_egl->_eglCompositorBindTexWindowEXT)
#define eglCompositorSetSizeEXT (glxw_egl->_eglCompositorSetSizeEXT)
#define eglCompositorSwapPolicyEXT (glxw_egl->_eglCompositorSwapPolicyEXT)
#define eglQueryDeviceAttribEXT (glxw_egl->_eglQueryDeviceAttribEXT)
#define eglQueryDeviceStringEXT (glxw_egl->_eglQueryDeviceStringEXT)
#define eglQueryDevicesEXT (glxw_egl->_eglQueryDevicesEXT)
#define eglQueryDisplayAttribEXT (glxw_egl->_eglQueryDisplayAttribEXT)
#define eglQueryDmaBufFormatsEXT (glxw_egl->_eglQueryDmaBufFormatsEXT)
#define eglQueryDmaBufModifiersEXT (glxw_egl->_eglQueryDmaBufModifiersEXT)
#define eglGetOutputLayersEXT (glxw_egl->_eglGetOutputLayersEXT)
#define eglGetOutputPortsEXT (glxw_egl->_eglGetOutputPortsEXT)
#define eglOutputLayerAttribEXT (glxw_egl->_eglOutputLayerAttribEXT)
#define eglQueryOutputLayerAttribEXT (glxw_egl->_eglQueryOutputLayerAttribEXT)
#define eglQueryOutputLayerStringEXT (glxw_egl->_eglQueryOutputLayerStringEXT)
#define eglOutputPortAttribEXT (glxw_egl->_eglOutputPortAttribEXT)
#define eglQueryOutputPortAttribEXT (glxw_egl->_eglQueryOutputPortAttribEXT)
#define eglQueryOutputPortStringEXT (glxw_egl->_eglQueryOutputPortStringEXT)
#define eglGetPlatformDisplayEXT (glxw_egl->_eglGetPlatformDisplayEXT)
#define eglCreatePlatformWindowSurfaceEXT (glxw_egl->_eglCreatePlatformWindowSurfaceEXT)
#define eglCreatePlatformPixmapSurfaceEXT (glxw_egl->_eglCreatePlatformPixmapSurfaceEXT)
#define eglStreamConsumerOutputEXT (glxw_egl->_eglStreamConsumerOutputEXT)
#define eglSwapBuffersWithDamageEXT (glxw_egl->_eglSwapBuffersWithDamageEXT)
#define eglUnsignalSyncEXT (glxw_egl->_eglUnsignalSyncEXT)
#define eglCreatePixmapSurfaceHI (glxw_egl->_eglCreatePixmapSurfaceHI)
#define eglCreateDRMImageMESA (glxw_egl->_eglCreateDRMImageMESA)
#define eglExportDRMImageMESA (glxw_egl->_eglExportDRMImageMESA)
#define eglExportDMABUFImageQueryMESA (glxw_egl->_eglExportDMABUFImageQueryMESA)
#define eglExportDMABUFImageMESA (glxw_egl->_eglExportDMABUFImageMESA)
#define eglGetDisplayDriverConfig (glxw_egl->_eglGetDisplayDriverConfig)
#define eglGetDisplayDriverName (glxw_egl->_eglGetDisplayDriverName)
#define eglSwapBuffersRegionNOK (glxw_egl->_eglSwapBuffersRegionNOK)
#define eglSwapBuffersRegion2NOK (glxw_egl->_eglSwapBuffersRegion2NOK)
#define eglQueryNativeDisplayNV (glxw_egl->_eglQueryNativeDisplayNV)
#define eglQueryNativeWindowNV (glxw_egl->_eglQueryNativeWindowNV)
#define eglQueryNativePixmapNV (glxw_egl->_eglQueryNativePixmapNV)
#define eglPostSubBufferNV (glxw_egl->_eglPostSubBufferNV)
#define eglStreamConsumerGLTextureExternalAttribsNV (glxw_egl->_eglStreamConsumerGLTextureExternalAttribsNV)
#define eglStreamFlushNV (glxw_egl->_eglStreamFlushNV)
#define eglQueryDisplayAttribNV (glxw_egl->_eglQueryDisplayAttribNV)
#define eglSetStreamMetadataNV (glxw_egl->_eglSetStreamMetadataNV)
#define eglQueryStreamMetadataNV (glxw_egl->_eglQueryStreamMetadataNV)
#define eglResetStreamNV (glxw_egl->_eglResetStreamNV)
#define eglCreateStreamSyncNV (glxw_egl->_eglCreateStreamSyncNV)
#define eglCreateFenceSyncNV (glxw_egl->_eglCreateFenceSyncNV)
#define eglDestroySyncNV (glxw_egl->_eglDestroySyncNV)
#define eglFenceNV (glxw_egl->_eglFenceNV)
#define eglClientWaitSyncNV (glxw_egl->_eglClientWaitSyncNV)
#define eglSignalSyncNV (glxw_egl->_eglSignalSyncNV)
#define eglGetSyncAttribNV (glxw_egl->_eglGetSyncAttribNV)
#define eglGetSystemTimeFrequencyNV (glxw_egl->_eglGetSystemTimeFrequencyNV)
#define eglGetSystemTimeNV (glxw_egl->_eglGetSystemTimeNV)

#ifdef __cplusplus
}
#endif

#endif
