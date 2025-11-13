// 函数: _Z14co_destroy_oldP7co_data
// 地址: 0xc83444
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *(arg1 + 0x28)
pthread_detach(x20)
pthread_kill(x20, 0xc)
union pthread_mutex_t* mutex = *(arg1 + 0x18)
pthread_mutex_destroy(mutex)
XFree(mutex)
union pthread_mutex_t* mutex_1 = *(arg1 + 0x20)
pthread_mutex_destroy(mutex_1)
XFree(mutex_1)
return XPooledFree(arg1, 0x30) __tailcall
