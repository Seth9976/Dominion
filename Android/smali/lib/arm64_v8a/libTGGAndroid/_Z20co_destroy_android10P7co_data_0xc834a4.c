// 函数: _Z20co_destroy_android10P7co_data
// 地址: 0xc834a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1
union pthread_mutex_t* mutex_1 = *(arg1 + 0x18)
union pthread_mutex_t* mutex = *(arg1 + 0x20)
int64_t x22 = *(arg1 + 0x28)

if (x8 != 2)
    if (x8 == 1)
        *arg1 = 3
    else
        if (x8 != 0)
            pthread_kill(pthread_self(), 6)
            return co_destroy(XNoReturn()) __tailcall
        
        *arg1 = 3
        pthread_mutex_unlock(mutex_1)

void var_28
pthread_join(x22, &var_28)
*g_current_coroutine = 0
pthread_mutex_destroy(mutex_1)
XFree(mutex_1)
pthread_mutex_destroy(mutex)
XFree(mutex)
return XPooledFree(arg1, 0x30)
