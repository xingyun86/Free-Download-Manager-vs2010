/* List of defines generated by configure. Included with preprocessor flag,
 * -include, to avoid long list of -D defines on the compile command-line.
 * Do not edit.
 */

#ifndef _MOZILLA_CONFIG_H_
#define _MOZILLA_CONFIG_H_

#define ACCESSIBILITY 1
#define BREAKPAD_CUSTOM_STDINT_H "mozilla/StandardInteger.h"
#define BUILD_CTYPES 1
#define D_INO d_ino
#define ENABLE_SYSTEM_EXTENSION_DIRS 1
#define FIREFOX_VERSION 22.0
#define GL_PROVIDER_ 1
#define GR_DLL 1
#define HAVE_FORCEINLINE 1
#define HAVE_IO_H 1
#define HAVE_ISATTY 1
#define HAVE_LOCALECONV 1
#define HAVE_SEH_EXCEPTIONS 1
#define HAVE_SETBUF 1
#define HAVE_SNPRINTF 1
#define HAVE_STDCALL 1
#define HAVE_STDINT_H 1
#define HAVE_UINT64_T 1
#define HAVE_WINSDKVER_H 1
#define HW_THREADS 1
#define IBMBIDI 1
#define JSGC_INCREMENTAL 1
#define JSGC_INCREMENTAL 1
#define JS_DEFAULT_JITREPORT_GRANULARITY 3
#define LIBJPEG_TURBO_X86_ASM 1
#define MALLOC_H <malloc.h>
#define MOZILLA_UAVERSION "22.0"
#define MOZILLA_VERSION "22.0"
#define MOZILLA_VERSION_U 22.0
#define MOZ_APP_UA_NAME ""
#define MOZ_APP_UA_VERSION "22.0"
#define MOZ_B2G_OS_NAME ""
#define MOZ_B2G_VERSION "1.0.0"
#define MOZ_BUILD_APP xulrunner
#define MOZ_CRASHREPORTER 1
#define MOZ_CRASHREPORTER_ENABLE_PERCENT 100
#define MOZ_CRASHREPORTER_INJECTOR 1
#define MOZ_CUBEB 1
#define MOZ_DATA_REPORTING 1
#define MOZ_DEBUG_SYMBOLS 1
#define MOZ_DISTRIBUTION_ID "org.mozilla"
#define MOZ_DLL_SUFFIX ".dll"
#define MOZ_ENABLE_PROFILER_SPS 1
#define MOZ_ENABLE_SKIA 1
#define MOZ_FEEDS 1
#define MOZ_FLEXBOX 1
#define MOZ_INSTRUMENT_EVENT_LOOP 1
#define MOZ_LOGGING 1
#define MOZ_MACBUNDLE_ID org.mozilla.xulrunner
#define MOZ_MEDIA 1
#define MOZ_MEDIA_NAVIGATOR 1
#define MOZ_MEMORY 1
#define MOZ_MEMORY_SIZEOF_PTR_2POW 2
#define MOZ_MEMORY_WINDOWS 1
#define MOZ_MSVC_STL_WRAP__RAISE 1
#define MOZ_NTDDI_WIN7 0x06010000
#define MOZ_OGG 1
#define MOZ_OMNIJAR 1
#define MOZ_OPUS 1
#define MOZ_PDF_PRINTING 1
#define MOZ_PEERCONNECTION 1
#define MOZ_PLACES 1
#define MOZ_PROFILELOCKING 1
#define MOZ_RAW 1
#define MOZ_SAMPLE_TYPE_FLOAT32 1
#define MOZ_SCTP 1
#define MOZ_SERVICES_COMMON 1
#define MOZ_SERVICES_CRYPTO 1
#define MOZ_SERVICES_METRICS 1
#define MOZ_SERVICES_SYNC 1
#define MOZ_SIGNING 1
#define MOZ_SOUNDTOUCH 1
#define MOZ_SPEEX_RESAMPLER 1
#define MOZ_SRTP 1
#define MOZ_TELEMETRY_DISPLAY_REV 2
#define MOZ_TREE_CAIRO 1
#define MOZ_TREE_PIXMAN 1
#define MOZ_UA_BUILDID ""
#define MOZ_UPDATER 1
#define MOZ_UPDATE_CHANNEL default
#define MOZ_URL_CLASSIFIER 1
#define MOZ_USER_DIR "Mozilla"
#define MOZ_VORBIS 1
#define MOZ_VP8 1
#define MOZ_VP8_ENCODER 1
#define MOZ_VP8_ERROR_CONCEALMENT 1
#define MOZ_WAVE 1
#define MOZ_WEBM 1
#define MOZ_WEBRTC 1
#define MOZ_WEBRTC_ASSERT_ALWAYS 1
#define MOZ_WEBRTC_SIGNALING 1
#define MOZ_WEBSPEECH 1
#define MOZ_WEBVTT 1
#define MOZ_WINSDK_TARGETVER 0x06010000
#define MOZ_WMF 1
#define MOZ_XUL 1
#define MOZ_XULRUNNER 1
#define NO_X11 1
#define NS_ATTR_MALLOC 
#define NS_ENABLE_TSF 1
#define NS_PRINTING 1
#define NS_PRINT_PREVIEW 1
#define NS_WARN_UNUSED_RESULT 
#define SKIA_DLL 1
#define STDC_HEADERS 1
#define USE_SKIA 1
#define USE_SKIA_GPU 1
#define VPX_X86_ASM 1
#define WIN32 1
#define WIN32_LEAN_AND_MEAN 1
#define WINVER 0x502
#define XP_WIN 1
#define XP_WIN32 1
#define X_DISPLAY_MISSING 1
#define _CRT_NONSTDC_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#define _WIN32_IE 0x0603
#define _WIN32_WINNT 0x502
#define _WINDOWS 1
#define _X86_ 1

/* The c99 defining the limit macros (UINT32_MAX for example), says:
 * C++ implementations should define these macros only when __STDC_LIMIT_MACROS
 * is defined before <stdint.h> is included. */
#define __STDC_LIMIT_MACROS

/* Force-include hunspell_alloc_hooks.h for hunspell, so that we don't need to
 * modify it directly.
 *
 * HUNSPELL_STATIC is defined in extensions/spellcheck/hunspell/src/Makefile.in,
 * unless --enable-system-hunspell is defined.
 */
#if defined(HUNSPELL_STATIC)
#include "hunspell_alloc_hooks.h"
#endif

#endif /* _MOZILLA_CONFIG_H_ */

