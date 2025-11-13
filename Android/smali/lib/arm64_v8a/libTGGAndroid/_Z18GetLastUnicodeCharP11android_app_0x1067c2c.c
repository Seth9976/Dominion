// 函数: _Z18GetLastUnicodeCharP11android_app
// 地址: 0x1067c2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(gAndroidGlobals + 8)
_jmethodID* x20 = *(*(**gNativeActivityEngine + 0x18) + 0x18)
int64_t x0_1 = (*(*x19 + 0xf8))(x19, x20)
(*(*x19 + 0x108))(x19, x0_1, "getLastUnicodeChar", &data_79f809)
int32_t x0_5 = _JNIEnv::CallIntMethod(x19, x20)
(*(*x19 + 0xb8))(x19, x0_1)
return zx.q(x0_5)
