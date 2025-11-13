// 函数: _Z11XShareImagePKc
// 地址: 0x106b1dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(gAndroidGlobals + 8)
(*(*x19 + 0x538))(x19, arg1)
_jmethodID* x20 = *(*(**gNativeActivityEngine + 0x18) + 0x18)
int64_t x0_3 = (*(*x19 + 0xf8))(x19, x20)
(*(*x19 + 0x108))(x19, x0_3, "shareImage", "(Ljava/lang/String;)V")
_JNIEnv::CallVoidMethod(x19, x20)
(*(*x19 + 0xb8))(x19, x0_3)
jump(*(*x19 + 0xb8))
