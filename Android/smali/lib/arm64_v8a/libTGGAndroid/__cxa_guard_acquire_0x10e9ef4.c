// 函数: __cxa_guard_acquire
// 地址: 0x10e9ef4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t var_10 = arg2
int32_t x19

if (zx.d(*arg1) == 0)
    int32_t x0
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    int128_t v4_1
    int128_t v5_1
    int128_t v6_1
    int128_t v7_1
    x0, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = pthread_mutex_lock(0x24bbd88)
    
    if (x0 != 0)
        sub_10ea1a4("%s failed to acquire mutex", v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1)
        noreturn
    
    uint32_t x23_1 = zx.d(arg1[1])
    
    if ((x23_1 & 2) != 0)
        int32_t x21_1 = *(arg1 + 4)
        uint64_t x0_1
        int128_t v0_2
        int128_t v1_2
        int128_t v2_2
        int128_t v3_2
        int128_t v4_2
        int128_t v5_2
        int128_t v6_2
        int128_t v7_2
        x0_1, v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 = syscall(0xb2)
        arg2 = x0_1
        
        if (x21_1 == arg2.d)
            sub_10ea1a4("__cxa_guard_acquire detected recursive initialization", v0_2, v1_2, v2_2, 
                v3_2, v4_2, v5_2, v6_2, v7_2)
            noreturn
    
    uint32_t x8_1
    
    while (true)
        x8_1 = zx.d(arg1[1])
        
        if ((x8_1 & 2) == 0)
            break
        
        arg1[1] = x8_1.b | 4
        pthread_cond_wait(0x24bbdb0, 0x24bbd88)
    
    if (x8_1 != 1)
        if ((x23_1 & 2) == 0)
            arg2 = zx.q(syscall(0xb2))
        
        *(arg1 + 4) = arg2.d
        arg1[1] = 2
        x19 = 1
    else
        x19 = 0
    
    int32_t x0_3
    int128_t v0_3
    int128_t v1_3
    int128_t v2_3
    int128_t v3_3
    int128_t v4_3
    int128_t v5_3
    int128_t v6_3
    int128_t v7_3
    x0_3, v0_3, v1_3, v2_3, v3_3, v4_3, v5_3, v6_3, v7_3 = pthread_mutex_unlock(0x24bbd88)
    
    if (x0_3 != 0)
        sub_10ea1a4("%s failed to release mutex", v0_3, v1_3, v2_3, v3_3, v4_3, v5_3, v6_3, v7_3)
        noreturn
else
    x19 = 0

return zx.q(x19)
