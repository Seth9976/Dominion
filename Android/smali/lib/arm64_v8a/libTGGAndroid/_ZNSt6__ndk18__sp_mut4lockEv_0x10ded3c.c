// 函数: _ZNSt6__ndk18__sp_mut4lockEv
// 地址: 0x10ded3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
union pthread_mutex_t* mutex = *entry_x0
int32_t x20 = 0x11

while (true)
    int64_t result = pthread_mutex_trylock(mutex)
    
    if (result.d == 0)
        return result
    
    int32_t temp0_1 = x20
    x20 -= 1
    
    if (temp0_1 == 1)
        break
    
    sched_yield()

return pthread_mutex_lock(mutex)
