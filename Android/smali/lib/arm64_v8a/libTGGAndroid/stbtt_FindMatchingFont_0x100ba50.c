// 函数: stbtt_FindMatchingFont
// 地址: 0x100ba50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = stbtt_GetFontOffsetForIndex(arg1, 0)
int32_t x20 = x0

if ((x0 & 0x80000000) == 0)
    int32_t x0_2 = strlen(arg2)
    int32_t x24_1 = 0
    int32_t x27_1 = arg3 & 7
    int32_t x0_4
    
    do
        char* x25_1 = arg1 + zx.q(x20)
        
        if (sub_100e458(x25_1) != 0)
            uint64_t i_2 = _byteswap(zx.q(*(x25_1 + 4)) << 0x30)
            
            if (arg3 != 0 && i_2.d != 0)
                int32_t x9_1 = x20 + 0xc
                uint64_t i_1 = i_2
                uint64_t i
                
                do
                    char* x11_1 = arg1 + zx.q(x9_1)
                    
                    if (zx.d(*x11_1) == 0x68 && zx.d(x11_1[1]) == 0x65 && zx.d(x11_1[2]) == 0x61
                            && zx.d(x11_1[3]) == 0x64)
                        if (x27_1 ==
                                (zx.d(*(arg1 + 0x2d + _byteswap(zx.q(*(x11_1 + 8)) << 0x20))) & 7))
                            goto label_100bb58
                        
                        goto label_100ba9c
                    
                    i = i_1
                    i_1 -= 1
                    x9_1 += 0x10
                while (i != 1)
            
            if (arg3 == 0 || x27_1 == (zx.d(*(arg1 + 0x2d)) & 7))
            label_100bb58:
                
                if (i_2.d != 0)
                    uint64_t x8_3 = zx.q(i_2.d)
                    int32_t x9_9 = x20 + 0xc
                    char* x10_1
                    
                    while (true)
                        x10_1 = arg1 + zx.q(x9_9)
                        
                        if (zx.d(*x10_1) == 0x6e && zx.d(x10_1[1]) == 0x61 && zx.d(x10_1[2]) == 0x6d
                                && zx.d(x10_1[3]) == 0x65)
                            break
                        
                        uint64_t temp0_1 = x8_3
                        x8_3 -= 1
                        x9_9 += 0x10
                        
                        if (temp0_1 == 1)
                            goto label_100ba9c
                    
                    int32_t temp0_2 = _byteswap(*(x10_1 + 8))
                    
                    if (temp0_2 != 0)
                        int32_t x5_1
                        
                        if (arg3 == 0)
                            if (sub_100e54c(arg1, temp0_2, arg2, x0_2, 0x10, 0x11) != 0)
                                break
                            
                            x5_1 = 2
                        else
                            if (sub_100e54c(arg1, temp0_2, arg2, x0_2, 0x10, 0xffffffff) != 0)
                                break
                            
                            x5_1 = -1
                        
                        if (sub_100e54c(arg1, temp0_2, arg2, x0_2, 1, x5_1) != 0)
                            break
                        
                        if (sub_100e54c(arg1, temp0_2, arg2, x0_2, 3, 0xffffffff) != 0)
                            break
        
    label_100ba9c:
        x24_1 += 1
        x0_4 = stbtt_GetFontOffsetForIndex(arg1, zx.q(x24_1))
        x20 = x0_4
    while ((x0_4 & 0x80000000) == 0)

return zx.q(x20)
