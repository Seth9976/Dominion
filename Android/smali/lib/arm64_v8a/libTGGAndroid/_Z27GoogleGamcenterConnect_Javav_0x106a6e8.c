// 函数: _Z27GoogleGamcenterConnect_Javav
// 地址: 0x106a6e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(gAndroidGlobals + 8)
_jmethodID* x21 = *(*(**gNativeActivityEngine + 0x18) + 0x18)
(*(*x19 + 0x108))(x19, (*(*x19 + 0xf8))(x19, x21), "billingInit", &data_75d47f)
_JNIEnv::CallVoidMethod(x19, x21)

if (zx.d((*(*x19 + 0x720))(x19)) == 0)
    jump(*(*x19 + 0xb8))

XTraceAndLog("gamecenter connect exception")
pthread_kill(pthread_self(), 6)
char** x0_9
int32_t x1_4
x0_9, x1_4 = XNoReturn()
return GoogleGamcenterQueryDLC_Java(x0_9, x1_4) __tailcall
