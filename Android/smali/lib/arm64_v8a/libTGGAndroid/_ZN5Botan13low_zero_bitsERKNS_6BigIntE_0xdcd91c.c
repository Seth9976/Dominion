// 函数: _ZN5Botan13low_zero_bitsERKNS_6BigIntE
// 地址: 0xdcd91c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = *arg1
int64_t x14_10 = *(arg1 + 8)
int64_t x13 = x14_10 - x10
int32_t x8
int64_t x9

if (x14_10 == x10)
    x8 = 0
    x9 = 0
else
    int64_t x15_1
    
    x15_1 = x13 s>= 0 ? x13 : -1
    
    int64_t x14 = x10 - x14_10
    int64_t x15_2
    
    x15_2 = x15_1 s< 1 ? x15_1 : 1
    
    int64_t x13_1
    
    x13_1 = x14 s> x13 ? x14 : x13
    
    x9 = 0
    int64_t i = 0
    x8 = 0
    
    do
        int32_t x14_1
        
        if (x13 s>> 2 u> i)
            x14_1 = *(x10 + (i << 2))
        else
            x14_1 = 0
        
        int32_t x16_4 = ((x14_1 & 0xffff) - 1) u>> 0x1b & 0x10
        int32_t x15_4 = (x14_1 - 1) & not.d(x14_1)
        uint32_t x14_2 = x14_1 u>> x16_4
        int32_t x17_4 = ((x14_2 & 0xff) - 1) u>> 0x1c & 8
        uint32_t x14_3 = x14_2 u>> x17_4
        int32_t x17_8 = ((x14_3 & 0xf) - 1) u>> 0x1d & 4
        uint32_t x14_4 = x14_3 u>> x17_8
        int32_t x17_12 = ((x14_4 & 3) - 1) u>> 0x1e & 2
        i += 1
        x9 += zx.q(((x16_4 & 0xfffffffe) | (x15_4 & 0x80000000) u>> 0x1f | x17_4 | x17_8 | x17_12)
            + (((x14_4 u>> x17_12 & 1) - 1) u>> 0x1f)) & zx.q(not.d(x8))
        x8 |= not.d(x15_4 s>> 0x1f)
    while (x15_2 * (x13_1 u>> 2) != i)

return zx.q(x8) & zx.q(x9.d)
