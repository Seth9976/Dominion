// 函数: _Z22AndroidDisplayKeyboardb
// 地址: 0x10685cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(gAndroidGlobals + 8)
_jmethodID* x20 = *(*(**gNativeActivityEngine + 0x18) + 0x18)
int64_t x0_1 = (*(*x19 + 0xf8))(x19, x20)
char const* const x2

if ((arg1.d & 1) != 0)
    x2 = "showKeyboard"
else
    x2 = "hideKeyboard"

(*(*x19 + 0x108))(x19, x0_1, x2, &data_75d47f)
_JNIEnv::CallVoidMethod(x19, x20)
jump(*(*x19 + 0xb8))
