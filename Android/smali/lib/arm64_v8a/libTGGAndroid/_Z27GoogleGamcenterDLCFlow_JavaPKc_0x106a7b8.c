// 函数: _Z27GoogleGamcenterDLCFlow_JavaPKc
// 地址: 0x106a7b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(gAndroidGlobals + 8)
int64_t x0_1 = (*(*x19 + 0x538))(x19, arg1)
_jmethodID* x22 = *(*(**gNativeActivityEngine + 0x18) + 0x18)
int64_t x0_3 = (*(*x19 + 0xf8))(x19, x22)
(*(*x19 + 0x108))(x19, x0_3, "billingLaunchPurchaseFlow", "(Ljava/lang/String;)I")
int32_t x0_7 = _JNIEnv::CallIntMethod(x19, x22)

if (zx.d((*(*x19 + 0x720))(x19)) == 0)
    (*(*x19 + 0xb8))(x19, x0_3)
    (*(*x19 + 0xb8))(x19, x0_1)
    return zx.q(x0_7)

XTraceAndLog("gamecenter dlc flow exception")
pthread_kill(pthread_self(), 6)
int64_t x0_14
int64_t x1_6
char x2_1
x0_14, x1_6, x2_1 = XNoReturn()
return Java_com_TGActivity_TGActivity_jni_1handleServiceConnected(x0_14, x1_6, x2_1) __tailcall
