// 函数: _Z17co_async_completeRPv
// 地址: 0xc835fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = *arg1
int32_t x0_1 = pthread_mutex_trylock(*(x20 + 0x20))

if ((x0_1 | 0x10) != 0x10)
    pthread_kill(pthread_self(), 6)
    uint32_t (* x0_5)(void*)
    void* x1
    x0_5, x1 = XNoReturn()
    return ThreadCreate(x0_5, x1) __tailcall

if (x0_1 == 0)
    *g_current_coroutine = 0
    
    if (*x20 == 2)
        co_destroy_android10(x20)
        *arg1 = nullptr

return zx.q(x0_1 == 0 ? 1 : 0)
