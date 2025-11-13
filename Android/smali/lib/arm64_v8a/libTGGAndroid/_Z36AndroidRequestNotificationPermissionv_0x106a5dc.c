// 函数: _Z36AndroidRequestNotificationPermissionv
// 地址: 0x106a5dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(gAndroidGlobals + 8)
_jmethodID* x20 = *(*(**gNativeActivityEngine + 0x18) + 0x18)
(*(*x19 + 0x108))(x19, (*(*x19 + 0xf8))(x19, x20), "askNotificationPermission", &data_75d47f)
_JNIEnv::CallVoidMethod(x19, x20)
jump(*(*x19 + 0xb8))
