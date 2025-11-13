// 函数: _Z12UI2GetTaptip9UI2Handle
// 地址: 0x1041b18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = *(gUI2 + 0x5c)

if (x10 != 0)
    uint64_t x9_1 = zx.q(x10.w)
    
    if (x9_1.d u< *(gUI2 + 8))
        int64_t x8_1 = *gUI2
        
        if (*(x8_1 + x9_1 * 0x19a8 + 0x19a0) == x10)
            if (arg1 != 0)
                void* x10_1 = x8_1 + x9_1 * 0x19a8
                
                while (*(x10_1 + 0x19a0) != arg1)
                    x10_1 = *(x10_1 + 0x17d0)
                    
                    if (x10_1 == 0)
                        return 0
            
            if (zx.d(*(x8_1 + x9_1 * 0x19a8 + 0x13f1)) != 0)
                int32_t x9_3 = *(x8_1 + x9_1 * 0x19a8 + 0x1978)
                
                if (x9_3 != 0)
                    return zx.q(*(x8_1 + zx.q(x9_3.w) * 0x19a8 + 0x19a0))

return 0
