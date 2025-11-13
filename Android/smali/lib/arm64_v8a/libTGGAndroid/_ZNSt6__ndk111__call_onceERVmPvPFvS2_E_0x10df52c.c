// 函数: _ZNSt6__ndk111__call_onceERVmPvPFvS2_E
// 地址: 0x10df52c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

pthread_mutex_lock(0x24bbd00)

while (*arg1 == 1)
    pthread_cond_wait(0x24bbd28, 0x24bbd00)

if (*arg1 != 0)
    return pthread_mutex_unlock(0x24bbd00) __tailcall

*arg1 = 1
pthread_mutex_unlock(0x24bbd00)
arg3(arg2)
pthread_mutex_lock(0x24bbd00)
*arg1 = -1
pthread_mutex_unlock(0x24bbd00)
return pthread_cond_broadcast(0x24bbd28)
