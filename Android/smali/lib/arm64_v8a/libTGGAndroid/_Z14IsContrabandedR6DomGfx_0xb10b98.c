// 函数: _Z14IsContrabandedR6DomGfx
// 地址: 0xb10b98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(ActiveGame() + 0x11b4) s>= 1)
    int64_t x21_1 = 0
    int64_t (* x25_1)() = gDomClient + 0x40e8
    int64_t x8_1
    
    do
        if (*(gDomClient + x21_1 * 0x4d48 + 0x4d68) s>= 1)
            int64_t i = 0
            
            do
                if ((CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), zx.q(*(x25_1 + (i << 2))))
                        & 1) != 0)
                    return 1
                
                i += 1
            while (i s< sx.q(*(gDomClient + x21_1 * 0x4d48 + 0x4d68)))
        
        x21_1 += 1
        x8_1 = sx.q(*(ActiveGame() + 0x11b4))
        x25_1 += 0x4d48
    while (x21_1 s< x8_1)

return 0
