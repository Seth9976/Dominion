// 函数: stbtt_GetFontNameString
// 地址: 0x100b5f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = *(arg1 + 8)
uint64_t x10 = zx.q(*(arg1 + 0x10))
uint64_t i_1 = _byteswap(zx.q(*(x8_1 + x10 + 4)) << 0x30)

if (i_1.d != 0)
    int32_t x10_1 = x10.d + 0xc
    uint64_t i
    
    do
        char* x11_1 = x8_1 + zx.q(x10_1)
        
        if (zx.d(*x11_1) == 0x6e && zx.d(x11_1[1]) == 0x61 && zx.d(x11_1[2]) == 0x6d
                && zx.d(x11_1[3]) == 0x65)
            uint64_t x11_2 = _byteswap(zx.q(*(x11_1 + 8)) << 0x20)
            
            if (x11_2.d != 0)
                void* x10_2 = x8_1 + x11_2
                uint64_t j_1 = _byteswap(zx.q(*(x10_2 + 2)) << 0x30)
                
                if (j_1.d != 0)
                    int32_t x10_6 = _byteswap(zx.d(*(x10_2 + 4)) << 0x10) + x11_2.d
                    int32_t x11_3 = x11_2.d + 6
                    uint64_t j
                    
                    do
                        int16_t* x12_5 = x8_1 + zx.q(x11_3)
                        
                        if (_byteswap(zx.d(*x12_5) << 0x10) == arg3
                                && _byteswap(zx.d(x12_5[1]) << 0x10) == arg4
                                && _byteswap(zx.d(x12_5[2]) << 0x10) == arg5
                                && _byteswap(zx.d(x12_5[3]) << 0x10) == arg6)
                            *arg2 = _byteswap(zx.d(x12_5[4]) << 0x10)
                            return x8_1 + sx.q(x10_6) + _byteswap(zx.q(x12_5[5]) << 0x30)
                        
                        j = j_1
                        j_1 -= 1
                        x11_3 += 0xc
                    while (j != 1)
                    return 0
            
            break
        
        i = i_1
        i_1 -= 1
        x10_1 += 0x10
    while (i != 1)

return 0
