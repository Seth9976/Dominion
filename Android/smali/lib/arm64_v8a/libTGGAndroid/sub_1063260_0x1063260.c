// 函数: sub_1063260
// 地址: 0x1063260
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 0x10)
uint32_t x8 = zx.d(*x9)

if (x8 == 0x3c)
    void* x8_2 = &x9[1]
    *(arg1 + 0x10) = x8_2
    uint32_t x10_1 = zx.d(x9[1])
    
    if (x10_1 != 0x2f)
        while (true)
            uint64_t x11_5 = zx.q((x10_1 & 0xff) - 9)
            
            if (x11_5.d u> 0x17)
                break
            
            switch (x11_5)
                case 1
                    *(arg1 + 0x12c) += 1
                    x10_1 = zx.d(*x8_2)
                case 2, 3, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                        0x14, 0x15, 0x16
                    break
            
            int32_t x13_4 = x10_1 & 0xe0
            int32_t x12_4 = x10_1 & 0xf0
            int32_t x11_6 = x10_1 & 0xf8
            
            if ((x10_1 & 0x80) != 0 && ((x11_6 != 0xf0 ? 1 : 0) & (x12_4 != 0xe0 ? 1 : 0)
                    & (sx.d(x10_1.b) s< 0 ? 1 : 0) & (x13_4 != 0xc0 ? 1 : 0) & 1) == 0)
                if (x13_4 == 0xc0)
                    x8_2 += 1
                else if (x12_4 == 0xe0)
                    x8_2 += 2
                else if (x11_6 == 0xf0)
                    x8_2 += 3
            
            *(arg1 + 0x10) = x8_2 + 1
            x10_1 = zx.d(*(x8_2 + 1))
            x8_2 += 1
        
        if ((sub_10636e8(arg1) & 1) != 0)
            *(arg1 + 8) = 1
            return 1
    else
        *(arg1 + 0x10) = &x9[2]
        
        if ((sub_10636e8(arg1) & 1) != 0 && *(arg1 + 0x140) != 0
                && strncasecmp(**(arg1 + 0x138), *(arg1 + 0x18), sx.q(*(arg1 + 0x20))) == 0)
            char* x8_6 = *(arg1 + 0x10)
            
            while (true)
                uint32_t x10_4 = zx.d(*x8_6)
                uint64_t x11_1 = zx.q(x10_4 - 9)
                
                if (x11_1.d u> 0x17)
                    if (x10_4 != 0x3e)
                        break
                    
                    *(arg1 + 0x10) = &x8_6[1]
                    *(arg1 + 8) = 4
                    return 1
                
                switch (x11_1)
                    case 1
                        *(arg1 + 0x12c) += 1
                        x10_4 = zx.d(*x8_6)
                    case 2, 3, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                            0x14, 0x15, 0x16
                        break
                
                int32_t x13_2 = x10_4 & 0xe0
                int32_t x12_2 = x10_4 & 0xf0
                int32_t x11_2 = x10_4 & 0xf8
                
                if ((x10_4 & 0x80) != 0 && ((x11_2 != 0xf0 ? 1 : 0) & (x12_2 != 0xe0 ? 1 : 0)
                        & (sx.d(x10_4.b) s< 0 ? 1 : 0) & (x13_2 != 0xc0 ? 1 : 0) & 1) == 0)
                    if (x13_2 == 0xc0)
                        x8_6 = &x8_6[1]
                    else if (x12_2 == 0xe0)
                        x8_6 = &x8_6[2]
                    else if (x11_2 == 0xf0)
                        x8_6 = &x8_6[3]
                
                x8_6 = &x8_6[1]
                *(arg1 + 0x10) = x8_6
else if (x8 == 0)
    int32_t x8_1 = *(arg1 + 0x140)
    *(arg1 + 0x10) = &x9[1]
    
    if (x8_1 == 0)
        *(arg1 + 8) = 5
        return 1

return 0
