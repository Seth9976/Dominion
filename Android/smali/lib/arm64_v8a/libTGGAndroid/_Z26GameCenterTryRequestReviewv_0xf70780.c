// 函数: _Z26GameCenterTryRequestReviewv
// 地址: 0xf70780
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gGameCenter != 4)
    return 

int64_t* x0 = AndroidGetJNIEnv()
_jmethodID* x0_1 = AndroidGetActivity()
(*(*x0 + 0x108))(x0, (*(*x0 + 0xf8))(x0, x0_1), "showRateDialog", &data_75d47f)
return _JNIEnv::CallVoidMethod(x0, x0_1) __tailcall
