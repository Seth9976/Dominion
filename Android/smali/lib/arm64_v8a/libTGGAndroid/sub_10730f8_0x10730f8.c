// 函数: sub_10730f8
// 地址: 0x10730f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x2020) == 0)
    return 

void* x19_1 = arg1
int128_t var_40_1 = (*U"XYZ[")[4].o

while (true)
    union pthread_mutex_t* mutex = *(x19_1 + 0x10)
    
    if (mutex != 0)
        pthread_mutex_lock(mutex)
    
    int32_t x8_4 = *(x19_1 + 0x2018)
    int64_t* x20_1
    union pthread_mutex_t* mutex_1
    
    if (x8_4 s< 1)
        x20_1 = nullptr
        mutex_1 = *(x19_1 + 0x10)
        
        if (mutex_1 != 0)
            pthread_mutex_unlock(mutex_1)
    else
        int32_t x10_1 = *(x19_1 + 0x201c)
        *(x19_1 + 0x201c) = x10_1 + 1
        int64_t x8_6 = zx.q(x10_1 s% x8_4) << 0x20 s>> 0x1d
        x20_1 = *(x19_1 + 0x18 + x8_6)
        *(x19_1 + 0x18 + x8_6) = *(x19_1 + 0x18 + (sx.q(x8_4 - 1) << 3))
        *(x19_1 + 0x2018) -= 1
        mutex_1 = *(x19_1 + 0x10)
        
        if (mutex_1 != 0)
            pthread_mutex_unlock(mutex_1)
    int128_t v0
    
    if (x20_1 != 0)
        arg1, v0 = (**x20_1)(x20_1)
        
        if (*(x19_1 + 0x2020) == 0)
            break
    else
        struct timespec requested_time
        requested_time.tv_sec = var_40_1.q
        requested_time.tv_nsec = var_40_1:8.q
        arg1, v0 = nanosleep(&requested_time, nullptr)
        
        if (*(x19_1 + 0x2020) == 0)
            break
