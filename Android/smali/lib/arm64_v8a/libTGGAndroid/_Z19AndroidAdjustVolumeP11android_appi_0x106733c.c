// 函数: _Z19AndroidAdjustVolumeP11android_appi
// 地址: 0x106733c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(gAndroidGlobals + 8)
_jmethodID* x20 = *(*(arg1 + 0x18) + 0x18)
(*(*x19 + 0x108))(x19, (*(*x19 + 0xf8))(x19, x20), "adjustVolume", "(I)F")
*(gAndroidGlobals + 0x34) = _JNIEnv::CallFloatMethod(x19, x20)
*(gAndroidGlobals + 0x38) = 0x40000000
jump(*(*x19 + 0xb8))
