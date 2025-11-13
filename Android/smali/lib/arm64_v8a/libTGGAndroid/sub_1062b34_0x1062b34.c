// 函数: sub_1062b34
// 地址: 0x1062b34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) == 2)
    int32_t x0_1
    
    if (arg2 != 0)
        x0_1 = strncasecmp(arg2, *(arg1 + 0x18), sx.q(*(arg1 + 0x20)))
    
    if (arg2 == 0 || x0_1 == 0)
        char* x8_2 = *(arg1 + 0x10)
        
        while (true)
            uint32_t x10_3 = zx.d(*x8_2)
            uint64_t x11_1 = zx.q(x10_3 - 9)
            
            if (x11_1.d u> 0x17)
                if (x10_3 == 0x3d)
                    uint32_t x9_1
                    char* x11_3
                    
                    while (true)
                        x11_3 = x8_2
                        x8_2 = &x8_2[1]
                        *(arg1 + 0x10) = x8_2
                        x9_1 = zx.d(x11_3[1])
                        uint64_t x12_3 = zx.q(x9_1 - 9)
                        
                        if (x12_3.d u> 0x17)
                            break
                        
                        switch (x12_3)
                            case 1
                                *(arg1 + 0x12c) += 1
                                x9_1 = zx.d(*x8_2)
                            case 2, 3, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 
                                    0x12, 0x13, 0x14, 0x15, 0x16
                                break
                        
                        int32_t x14_4 = x9_1 & 0xe0
                        int32_t x13_4 = x9_1 & 0xf0
                        int32_t x12_4 = x9_1 & 0xf8
                        
                        if ((x9_1 & 0x80) != 0 && ((x12_4 != 0xf0 ? 1 : 0) & (x13_4 != 0xe0 ? 1 : 0)
                                & (sx.d(x9_1.b) s< 0 ? 1 : 0) & (x14_4 != 0xc0 ? 1 : 0) & 1) == 0)
                            if (x14_4 == 0xc0)
                                x8_2 = &x11_3[2]
                            else if (x13_4 == 0xe0)
                                x8_2 = &x11_3[3]
                            else if (x12_4 == 0xf0)
                                x8_2 = &x11_3[4]
                    
                    char* x10_8
                    
                    if (x9_1 != 0x22)
                        x10_8 = x8_2
                        *(arg1 + 0x18) = x8_2
                        
                        while (true)
                            uint64_t x12_8 = zx.q(*x10_8)
                            
                            if (x12_8.d u<= 0x20)
                                switch (x12_8)
                                    case 0, 9, 0x20
                                        break
                                    case 0xa
                                        *(arg1 + 0x12c) += 1
                                        x12_8 = zx.q(*x10_8)
                            else if (x12_8.d == 0x3e)
                                break
                            
                            int32_t x15_6 = x12_8.d & 0xe0
                            int32_t x14_7 = x12_8.d & 0xf0
                            int32_t x13_7 = x12_8.d & 0xf8
                            
                            if ((x12_8.d & 0x80) != 0 && ((x13_7 != 0xf0 ? 1 : 0)
                                    & (x14_7 != 0xe0 ? 1 : 0) & (sx.d((x12_8.d).b) s< 0 ? 1 : 0)
                                    & (x15_6 != 0xc0 ? 1 : 0) & 1) == 0)
                                if (x15_6 == 0xc0)
                                    x10_8 = &x10_8[1]
                                else if (x14_7 == 0xe0)
                                    x10_8 = &x10_8[2]
                                else if (x13_7 == 0xf0)
                                    x10_8 = &x10_8[3]
                            
                            x10_8 = &x10_8[1]
                            *(arg1 + 0x10) = x10_8
                    else
                        x8_2 = &x11_3[2]
                        x10_8 = x8_2
                        *(arg1 + 0x10) = x8_2
                        *(arg1 + 0x18) = x8_2
                        
                        while (true)
                            uint32_t x11_6 = zx.d(*x10_8)
                            
                            if (x11_6 == 0xa)
                                *(arg1 + 0x12c) += 1
                                x11_6 = zx.d(*x10_8)
                            else
                                if (x11_6 == 0)
                                    break
                                
                                if (x11_6 == 0x22)
                                    break
                            
                            int32_t x14_5 = x11_6 & 0xe0
                            int32_t x13_5 = x11_6 & 0xf0
                            int32_t x12_5 = x11_6 & 0xf8
                            
                            if ((x11_6 & 0x80) != 0 && ((x12_5 != 0xf0 ? 1 : 0)
                                    & (x13_5 != 0xe0 ? 1 : 0) & (sx.d(x11_6.b) s< 0 ? 1 : 0)
                                    & (x14_5 != 0xc0 ? 1 : 0) & 1) == 0)
                                if (x14_5 == 0xc0)
                                    x10_8 = &x10_8[1]
                                else if (x13_5 == 0xe0)
                                    x10_8 = &x10_8[2]
                                else if (x12_5 == 0xf0)
                                    x10_8 = &x10_8[3]
                            
                            x10_8 = &x10_8[1]
                            *(arg1 + 0x10) = x10_8
                    
                    int32_t x8_3 = x10_8.d - x8_2.d
                    *(arg1 + 0x20) = x8_3
                    
                    if (x8_3 == 0 || x9_1 != 0x22)
                        return zx.q(x10_8.d != x8_2.d ? 1 : 0)
                    
                    if (zx.d(*x10_8) == 0x22)
                        *(arg1 + 0x10) = &x10_8[1]
                        return 1
                
                break
            
            switch (x11_1)
                case 1
                    *(arg1 + 0x12c) += 1
                    x10_3 = zx.d(*x8_2)
                case 2, 3, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                        0x14, 0x15, 0x16
                    break
            
            int32_t x13_2 = x10_3 & 0xe0
            int32_t x12_2 = x10_3 & 0xf0
            int32_t x11_2 = x10_3 & 0xf8
            
            if ((x10_3 & 0x80) != 0 && ((x11_2 != 0xf0 ? 1 : 0) & (x12_2 != 0xe0 ? 1 : 0)
                    & (sx.d(x10_3.b) s< 0 ? 1 : 0) & (x13_2 != 0xc0 ? 1 : 0) & 1) == 0)
                if (x13_2 == 0xc0)
                    x8_2 = &x8_2[1]
                else if (x12_2 == 0xe0)
                    x8_2 = &x8_2[2]
                else if (x11_2 == 0xf0)
                    x8_2 = &x8_2[3]
            
            x8_2 = &x8_2[1]
            *(arg1 + 0x10) = x8_2

return 0
