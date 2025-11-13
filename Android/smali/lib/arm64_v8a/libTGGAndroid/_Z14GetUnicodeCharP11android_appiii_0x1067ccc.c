// 函数: _Z14GetUnicodeCharP11android_appiii
// 地址: 0x1067ccc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(gAndroidGlobals + 8)
_jmethodID* x0_1 = (*(*x19 + 0x30))(x19, "android/view/KeyEvent")
int64_t x8_3 = *(*x19 + 0x108)

if (arg4 == 0)
    x8_3(x19, x0_1, "getUnicodeChar", &data_79f809)
    (*(*x19 + 0x108))(x19, x0_1, "<init>", "(II)V")
    return _JNIEnv::CallIntMethod(x19, _JNIEnv::NewObject(x19, x0_1)) __tailcall

x8_3(x19, x0_1, "getUnicodeChar", "(I)I")
(*(*x19 + 0x108))(x19, x0_1, "<init>", "(II)V")
return _JNIEnv::CallIntMethod(x19, _JNIEnv::NewObject(x19, x0_1)) __tailcall
