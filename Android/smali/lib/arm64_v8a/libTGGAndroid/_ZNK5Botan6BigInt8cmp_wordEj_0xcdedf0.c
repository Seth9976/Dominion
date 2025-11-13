// 函数: _ZNK5Botan6BigInt8cmp_wordEj
// 地址: 0xcdedf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x20) == 0)
    return 0xffffffff

int64_t i_4 = *(arg1 + 0x18)

if (i_4 == -1)
    int64_t x8 = *arg1
    int64_t x11_1 = *(arg1 + 8)
    int64_t x10_1 = x11_1 - x8
    
    if (x11_1 == x8)
        i_4 = 0
        *(arg1 + 0x18) = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x8 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        i_4 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_2 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x8 - 4 + (i_2 << 2))
            i = i_2
            i_2 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            i_4 -= x11_3
        while (i != 1)
        *(arg1 + 0x18) = i_4
        
        if (i_4 u> 1)
            return 1
else if (i_4 u> 1)
    return 1

int32_t x8_2 = 0
int32_t entry_x1

if (i_4 != 0)
    int32_t* x10_4 = *arg1
    int64_t i_3 = i_4
    int64_t i_1
    
    do
        int32_t x12_5 = *x10_4
        x10_4 = &x10_4[1]
        i_1 = i_3
        i_3 -= 1
        int32_t x13_2 = x12_5 ^ entry_x1
        int32_t x14_3 = ((x13_2 - 1) & not.d(x13_2)) s>> 0x1f
        x8_2 = (x8_2 & x14_3)
            | ((((((x12_5 - entry_x1) ^ x12_5) | x13_2) ^ x12_5) s>> 0x1f | 1) & not.d(x14_3))
    while (i_1 != 1)
    
    if (i_4 != 0)
        return zx.q(x8_2)

return zx.q(x8_2) | zx.q(not.d(((entry_x1 - 1) & not.d(entry_x1)) s>> 0x1f))
