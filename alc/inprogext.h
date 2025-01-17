#ifndef INPROGEXT_H
#define INPROGEXT_H

#include "AL/al.h"
#include "AL/alc.h"
#include "AL/alext.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef AL_SOFT_map_buffer
#define AL_SOFT_map_buffer 1
typedef unsigned int ALbitfieldSOFT;
#define AL_MAP_READ_BIT_SOFT                     0x00000001
#define AL_MAP_WRITE_BIT_SOFT                    0x00000002
#define AL_MAP_PERSISTENT_BIT_SOFT               0x00000004
#define AL_PRESERVE_DATA_BIT_SOFT                0x00000008
typedef void (AL_APIENTRY*LPALBUFFERSTORAGESOFT)(ALuint buffer, ALenum format, const ALvoid *data, ALsizei size, ALsizei freq, ALbitfieldSOFT flags);
typedef void* (AL_APIENTRY*LPALMAPBUFFERSOFT)(ALuint buffer, ALsizei offset, ALsizei length, ALbitfieldSOFT access);
typedef void (AL_APIENTRY*LPALUNMAPBUFFERSOFT)(ALuint buffer);
typedef void (AL_APIENTRY*LPALFLUSHMAPPEDBUFFERSOFT)(ALuint buffer, ALsizei offset, ALsizei length);
#ifdef AL_ALEXT_PROTOTYPES
AL_API void AL_APIENTRY alBufferStorageSOFT(ALuint buffer, ALenum format, const ALvoid *data, ALsizei size, ALsizei freq, ALbitfieldSOFT flags);
AL_API void* AL_APIENTRY alMapBufferSOFT(ALuint buffer, ALsizei offset, ALsizei length, ALbitfieldSOFT access);
AL_API void AL_APIENTRY alUnmapBufferSOFT(ALuint buffer);
AL_API void AL_APIENTRY alFlushMappedBufferSOFT(ALuint buffer, ALsizei offset, ALsizei length);
#endif
#endif

#ifndef AL_SOFT_callback_buffer
#define AL_SOFT_callback_buffer
#define AL_BUFFER_CALLBACK_FUNCTION_SOFT         0x19A0
#define AL_BUFFER_CALLBACK_USER_PARAM_SOFT       0x19A1
typedef ALsizei (AL_APIENTRY*ALBUFFERCALLBACKTYPESOFT)(ALvoid *userptr, ALvoid *sampledata, ALsizei numbytes);
typedef void (AL_APIENTRY*LPALBUFFERCALLBACKSOFT)(ALuint buffer, ALenum format, ALsizei freq, ALBUFFERCALLBACKTYPESOFT callback, ALvoid *userptr, ALbitfieldSOFT flags);
typedef void (AL_APIENTRY*LPALGETBUFFERPTRSOFT)(ALuint buffer, ALenum param, ALvoid **value);
typedef void (AL_APIENTRY*LPALGETBUFFER3PTRSOFT)(ALuint buffer, ALenum param, ALvoid **value1, ALvoid **value2, ALvoid **value3);
typedef void (AL_APIENTRY*LPALGETBUFFERPTRVSOFT)(ALuint buffer, ALenum param, ALvoid **values);
#ifdef AL_ALEXT_PROTOTYPES
AL_API void AL_APIENTRY alBufferCallbackSOFT(ALuint buffer, ALenum format, ALsizei freq, ALBUFFERCALLBACKTYPESOFT callback, ALvoid *userptr, ALbitfieldSOFT flags);
AL_API void AL_APIENTRY alGetBufferPtrSOFT(ALuint buffer, ALenum param, ALvoid **ptr);
AL_API void AL_APIENTRY alGetBuffer3PtrSOFT(ALuint buffer, ALenum param, ALvoid **ptr0, ALvoid **ptr1, ALvoid **ptr2);
AL_API void AL_APIENTRY alGetBufferPtrvSOFT(ALuint buffer, ALenum param, ALvoid **ptr);
#endif
#endif

#ifndef AL_SOFT_bformat_hoa
#define AL_SOFT_bformat_hoa
#define AL_UNPACK_AMBISONIC_ORDER_SOFT           0x199D
#endif

#ifndef AL_SOFT_convolution_reverb
#define AL_SOFT_convolution_reverb
#define AL_EFFECT_CONVOLUTION_REVERB_SOFT        0xA000
#define AL_EFFECTSLOT_STATE_SOFT                 0x199D
typedef void (AL_APIENTRY*LPALAUXILIARYEFFECTSLOTPLAYSOFT)(ALuint slotid);
typedef void (AL_APIENTRY*LPALAUXILIARYEFFECTSLOTPLAYVSOFT)(ALsizei n, const ALuint *slotids);
typedef void (AL_APIENTRY*LPALAUXILIARYEFFECTSLOTSTOPSOFT)(ALuint slotid);
typedef void (AL_APIENTRY*LPALAUXILIARYEFFECTSLOTSTOPVSOFT)(ALsizei n, const ALuint *slotids);
#ifdef AL_ALEXT_PROTOTYPES
AL_API void AL_APIENTRY alAuxiliaryEffectSlotPlaySOFT(ALuint slotid);
AL_API void AL_APIENTRY alAuxiliaryEffectSlotPlayvSOFT(ALsizei n, const ALuint *slotids);
AL_API void AL_APIENTRY alAuxiliaryEffectSlotStopSOFT(ALuint slotid);
AL_API void AL_APIENTRY alAuxiliaryEffectSlotStopvSOFT(ALsizei n, const ALuint *slotids);
#endif
#endif

#ifndef ALC_SOFT_reopen_device
#define ALC_SOFT_reopen_device
typedef ALCboolean (ALC_APIENTRY*LPALCREOPENDEVICESOFT)(ALCdevice *device,
    const ALCchar *deviceName, const ALCint *attribs);
#ifdef AL_ALEXT_PROTOTYPES
ALCboolean ALC_APIENTRY alcReopenDeviceSOFT(ALCdevice *device, const ALCchar *deviceName,
    const ALCint *attribs);
#endif
#endif

#ifndef AL_SOFT_UHJ
#define AL_SOFT_UHJ
#define AL_FORMAT_UHJ2CHN8_SOFT                  0x19A2
#define AL_FORMAT_UHJ2CHN16_SOFT                 0x19A3
#define AL_FORMAT_UHJ2CHN_FLOAT32_SOFT           0x19A4
#define AL_FORMAT_UHJ3CHN8_SOFT                  0x19A5
#define AL_FORMAT_UHJ3CHN16_SOFT                 0x19A6
#define AL_FORMAT_UHJ3CHN_FLOAT32_SOFT           0x19A7
#define AL_FORMAT_UHJ4CHN8_SOFT                  0x19A8
#define AL_FORMAT_UHJ4CHN16_SOFT                 0x19A9
#define AL_FORMAT_UHJ4CHN_FLOAT32_SOFT           0x19AA

#define AL_STEREO_MODE_SOFT                      0x19B0
#define AL_NORMAL_SOFT                           0x0000
#define AL_SUPER_STEREO_SOFT                     0x0001
#define AL_SUPER_STEREO_WIDTH_SOFT               0x19B1
#endif

#ifndef AL_SOFT_hold_on_disconnect
#define AL_SOFT_hold_on_disconnect
#define AL_STOP_SOURCES_ON_DISCONNECT_SOFT       0x19AB
#endif

#ifndef ALC_SOFT_output_mode
#define ALC_SOFT_output_mode
#define ALC_OUTPUT_MODE_SOFT                     0x19AC
#define ALC_ANY_SOFT                             0x19AD
/*#define ALC_MONO_SOFT                            0x1500*/
/*#define ALC_STEREO_SOFT                          0x1501*/
#define ALC_STEREO_BASIC_SOFT                    0x19AE
#define ALC_STEREO_UHJ_SOFT                      0x19AF
#define ALC_STEREO_HRTF_SOFT                     0x19B2
/*#define ALC_QUAD_SOFT                            0x1503*/
/*#define ALC_5POINT1_SOFT                         0x1504*/
/*#define ALC_6POINT1_SOFT                         0x1505*/
/*#define ALC_7POINT1_SOFT                         0x1506*/
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* INPROGEXT_H */
