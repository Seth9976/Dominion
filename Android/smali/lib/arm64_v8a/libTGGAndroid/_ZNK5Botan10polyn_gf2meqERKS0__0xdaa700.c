// 函数: _ZNK5Botan10polyn_gf2meqERKS0_
// 地址: 0xdaa700
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x1

if (*arg1 == *entry_x1)
    int16_t* x9_1 = *(arg1 + 8)
    int64_t x8 = *(arg1 + 0x10)
    int16_t* x10_1 = *(entry_x1 + 8)
    
    if (x8 - x9_1 == *(entry_x1 + 0x10) - x10_1)
        if (x9_1 == x8)
            return 1
        
        uint32_t x11_3
        uint32_t x12_2
        
        do
            x11_3 = zx.d(*x9_1)
            x12_2 = zx.d(*x10_1)
            
            if (x11_3 != x12_2)
                break
            
            x9_1 = &x9_1[1]
            x10_1 = &x10_1[1]
        while (x8 != x9_1)
        
        return zx.q(x11_3 == x12_2 ? 1 : 0)

return 0
