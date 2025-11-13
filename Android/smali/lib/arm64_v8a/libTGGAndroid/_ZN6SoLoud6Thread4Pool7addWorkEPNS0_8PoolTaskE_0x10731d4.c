// 函数: _ZN6SoLoud6Thread4Pool7addWorkEPNS0_8PoolTaskE
// 地址: 0x10731d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1

if (*arg1 != 0)
    union pthread_mutex_t* mutex = *(arg1 + 0x10)
    
    if (mutex != 0)
        pthread_mutex_lock(mutex)
    
    int64_t x8_1 = sx.q(*(arg1 + 0x2018))
    
    if (x8_1.d != 0x400)
        *(arg1 + (x8_1 << 3) + 0x18) = entry_x1
        union pthread_mutex_t* result = *(arg1 + 0x10)
        *(arg1 + 0x2018) += 1
        
        if (result == 0)
            return result
        
        return pthread_mutex_unlock(result) __tailcall
    
    union pthread_mutex_t* mutex_1 = *(arg1 + 0x10)
    
    if (mutex_1 != 0)
        pthread_mutex_unlock(mutex_1)

jump(**entry_x1)
