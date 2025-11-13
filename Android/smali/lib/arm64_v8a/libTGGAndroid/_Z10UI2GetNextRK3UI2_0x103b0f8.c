// 函数: _Z10UI2GetNextRK3UI2
// 地址: 0x103b0f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_2 = *(arg1 + 0x17d0)

if (x8_2 != 0)
    int32_t x9_1 = *(x8_2 + 0x1970)
    
    if (x9_1 != 0)
        int32_t i = *(arg1 + 0x19a0)
        
        if (*(x8_2 + 0x1870) != i)
            uint64_t x12_1 = 0
            int32_t x11_2
            
            do
                x11_2 = x12_1.d + 1
                
                if (x9_1 == x11_2)
                    return 0
                
                x12_1 = zx.q(x11_2)
            while (*(x8_2 + (x12_1 << 0x20 s>> 0x1e) + 0x1870) != i)
            
            int32_t x10_1 = x11_2 + 1
            
            if (x10_1 != x9_1)
                return *gUI2 + zx.q(*(x8_2 + (sx.q(x10_1) << 2) + 0x1870)) * 0x19a8
        else if (1 != x9_1)
            return *gUI2 + zx.q(*(x8_2 + (sx.q(1) << 2) + 0x1870)) * 0x19a8

return 0
