// 函数: __cxa_guard_abort
// 地址: 0x10ea100
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
x0, v0, v1, v2, v3, v4, v5, v6, v7 = pthread_mutex_lock(0x24bbd88)

if (x0 != 0)
    sub_10ea1a4("%s failed to acquire mutex", v0, v1, v2, v3, v4, v5, v6, v7)
    noreturn

uint32_t x20 = zx.d(*(arg1 + 1))
*(arg1 + 4) = 0
*(arg1 + 1) = 0
int32_t result
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
int128_t v4_1
int128_t v5_1
int128_t v6_1
int128_t v7_1
result, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = pthread_mutex_unlock(0x24bbd88)

if (result != 0)
    sub_10ea1a4("%s failed to release mutex", v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1)
    noreturn

if ((x20 & 4) != 0)
    int128_t v0_2
    int128_t v1_2
    int128_t v2_2
    int128_t v3_2
    int128_t v4_2
    int128_t v5_2
    int128_t v6_2
    int128_t v7_2
    result, v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 = pthread_cond_broadcast(0x24bbdb0)
    
    if (result != 0)
        sub_10ea1a4("%s failed to broadcast", v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2)
        noreturn

return result
