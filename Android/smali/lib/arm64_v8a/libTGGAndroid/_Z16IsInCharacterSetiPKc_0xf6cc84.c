// 函数: _Z16IsInCharacterSetiPKc
// 地址: 0xf6cc84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t i = zx.d(*arg2)

if (i != 0)
    do
        int32_t x8_1 = i & 0xff
        
        if ((i & 0x80) != 0)
            int32_t x9_1 = x8_1 & 0xe0
            
            if (x9_1 != 0xc0)
                int32_t x10 = i & 0xf0
                int32_t x11_4
                
                if (x10 != 0xe0)
                    x11_4 = x8_1
                    
                    if ((x8_1 & 0xf8) == 0xf0)
                        x11_4 = (0xfffc0fff & (x8_1 & 7) << 0x12) | (0x3f & zx.d(arg2[1])) << 0xc
                            | (zx.d(arg2[2]) & 0x3f) << 6 | (zx.d(arg2[3]) & 0x3f)
                else
                    x11_4 =
                        (zx.d(arg2[1]) & 0x3f) << 6 | (x8_1 & 0xf) << 0xc | (zx.d(arg2[2]) & 0x3f)
                
                if (x11_4 == arg1)
                    return 1
                
                if (x9_1 == 0xc0)
                    arg2 = &arg2[1]
                else if (x10 == 0xe0)
                    arg2 = &arg2[2]
                else if ((x8_1 & 0xf8) == 0xf0)
                    arg2 = &arg2[3]
            else
                if (((zx.d(arg2[1]) & 0x3f) | (0x1f & x8_1) << 6) == arg1)
                    return 1
                
                arg2 = &arg2[1]
        else if (x8_1 == arg1)
            return 1
        
        arg2 = &arg2[1]
        i = zx.d(*arg2)
    while (i != 0)

return 0
