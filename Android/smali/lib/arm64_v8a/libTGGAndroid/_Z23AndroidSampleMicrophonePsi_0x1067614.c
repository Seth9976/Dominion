// 函数: _Z23AndroidSampleMicrophonePsi
// 地址: 0x1067614
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(gAndroidGlobals + 8)
_jmethodID* x21 = *(*(**gNativeActivityEngine + 0x18) + 0x18)
int64_t x0_1 = (*(*x20 + 0xf8))(x20, x21)
(*(*x20 + 0x108))(x20, x0_1, "microphoneSample", "([SI)I")
int64_t x0_5 = (*(*x20 + 0x590))(x20, zx.q(arg2))
int32_t x0_7 = _JNIEnv::CallIntMethod(x20, x21)
(*(*x20 + 0x650))(x20, x0_5, 0, zx.q(arg2), arg1)
(*(*x20 + 0xb8))(x20, x0_5)
(*(*x20 + 0xb8))(x20, x0_1)
return zx.q(x0_7)
