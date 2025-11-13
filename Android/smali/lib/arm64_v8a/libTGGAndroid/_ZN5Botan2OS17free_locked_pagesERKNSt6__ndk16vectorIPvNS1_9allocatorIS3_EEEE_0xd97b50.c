// 函数: _ZN5Botan2OS17free_locked_pagesERKNSt6__ndk16vectorIPvNS1_9allocatorIS3_EEEE
// 地址: 0xd97b50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = sysconf(0x27)
int64_t x8 = *arg1
int64_t result_1

result_1 = result s> 1 ? result : 0x1000

if (*(arg1 + 8) != x8)
    int64_t i = 0
    
    do
        int64_t x22_1 = *(x8 + (i << 3))
        memset(x22_1, 0, result_1)
        int64_t x23_1 = x22_1 + neg.q(result_1)
        int64_t x0_1 = sysconf(0x27)
        int64_t x1_1
        
        x1_1 = x0_1 s> 1 ? x0_1 : 0x1000
        
        mprotect(x23_1, x1_1, 3)
        int64_t x0_3 = sysconf(0x27)
        int64_t x1_2
        
        x1_2 = x0_3 s> 1 ? x0_3 : 0x1000
        
        mprotect(x22_1 + result_1, x1_2, 3)
        munlock(x22_1, result_1)
        result = munmap(x23_1, result_1 * 3)
        x8 = *arg1
        i += 1
    while (i != (*(arg1 + 8) - x8) s>> 3)

return result
