// 函数: _Z9co_resumeRPv
// 地址: 0xc83588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = *arg1
*g_current_coroutine = x20
pthread_mutex_unlock(*(x20 + 0x18))
pthread_mutex_lock(*(x20 + 0x20))
*g_current_coroutine = 0
int32_t x21 = *x20

if (x21 == 2)
    co_destroy_android10(x20)
    *arg1 = nullptr

return zx.q(x21 != 2 ? 1 : 0)
