// 函数: sub_aaf4bc
// 地址: 0xaaf4bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2

if ((CardIs(zx.q(x19), 2) & 1) != 0)
    int32_t* x21_1 = *(arg1 + 8)
    uint64_t x20_1 = zx.q(**(arg1 + 0x10))
    int32_t x0_3 = CardWhat(zx.q(x19))
    
    if (x20_1.d s< 1)
        return 1
    
    if (*x21_1 != x0_3)
        uint64_t x8_3 = 0
        int32_t x11_1
        
        do
            if (x20_1 - 1 == x8_3)
                x8_3 = x20_1
                break
            
            x11_1 = x21_1[1 + x8_3]
            x8_3 += 1
        while (x11_1 != x0_3)
        return zx.q(x8_3 u>= x20_1 ? 1 : 0)

return 0
