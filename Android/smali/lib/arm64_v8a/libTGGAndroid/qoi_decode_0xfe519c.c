// 函数: qoi_decode
// 地址: 0xfe519c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* const result = nullptr

if (arg1 != 0 && arg3 != 0)
    result = nullptr
    
    if (arg2 s>= 0x16 && ((arg4 != 3 ? 1 : 0) & ((arg4 & 0xfffffffb) != 0 ? 1 : 0) & 1) == 0)
        int32_t x11_1 = *arg1
        result = nullptr
        int32_t temp0_1 = _byteswap(arg1[1])
        *arg3 = temp0_1
        int32_t temp0_2 = _byteswap(arg1[2])
        arg3[1] = temp0_2
        uint32_t x10_1 = zx.d(arg1[3].b)
        arg3[2].b = x10_1.b
        uint32_t x12_1 = zx.d(*(arg1 + 0xd))
        *(arg3 + 9) = x12_1.b
        
        if (temp0_1 != 0 && temp0_2 != 0)
            if (x10_1 - 3 u> 1)
                return nullptr
            
            result = nullptr
            
            if (_byteswap(x11_1) == 0x716f6966 && x12_1 u<= 1)
                if (temp0_2 u>= 0x17d78400 u/ temp0_1)
                    return nullptr
                
                uint32_t x22_1
                
                x22_1 = arg4 == 0 ? x10_1 : arg4
                
                int32_t x21_1 = temp0_2 * temp0_1 * x22_1
                result = XMalloc(x21_1)
                
                if (result != 0)
                    int128_t var_130
                    __builtin_memset(&var_130, 0, 0x100)
                    
                    if (x21_1 s>= 1)
                        int64_t i = 0
                        
                        if (x22_1 != 4)
                            int32_t x2_10 = 0
                            uint32_t x17_4 = 0
                            uint32_t x16_4 = 0
                            uint32_t x12_2 = 0
                            int32_t x3_5 = 0xe
                            uint32_t x1_2 = 0xff
                            
                            do
                                int32_t temp0_4 = x2_10
                                x2_10 -= 1
                                
                                if (temp0_4 s< 1)
                                    if (x3_5 s>= arg2 - 8)
                                        x2_10 = 0
                                    else
                                        int64_t x6_2 = sx.q(x3_5)
                                        uint32_t x5_5 = zx.d(*(arg1 + x6_2))
                                        uint64_t x4_10 = x6_2 + 1
                                        
                                        if (x5_5 == 0xff)
                                            void* x1_3 = x6_2 + arg1
                                            x12_2 = zx.d(*(arg1 + x4_10))
                                            x16_4 = zx.d(*(x1_3 + 2))
                                            x17_4 = zx.d(*(x1_3 + 3))
                                            x1_2 = zx.d(*(x1_3 + 4))
                                            x2_10 = 0
                                            x4_10 = zx.q(x3_5 + 5)
                                        else if (x5_5 != 0xfe)
                                            switch (x5_5 u>> 6)
                                                case 0
                                                    char* x1_4 = &var_130 + (zx.q(x5_5) << 2)
                                                    x12_2 = zx.d(*x1_4)
                                                    x16_4 = zx.d(x1_4[1])
                                                    x17_4 = zx.d(x1_4[2])
                                                    x1_2 = zx.d(x1_4[3])
                                                    x2_10 = 0
                                                case 1
                                                    x2_10 = 0
                                                    x12_2 = x12_2 + (x5_5 u>> 4 & 3) - 2
                                                    x16_4 = x16_4 + (x5_5 u>> 2 & 3) - 2
                                                    x17_4 = x17_4 + (x5_5 & 3) - 2
                                                case 2
                                                    uint32_t x4_11 = zx.d(*(arg1 + x4_10))
                                                    int32_t x5_7 = x5_5 & 0x3f
                                                    x2_10 = 0
                                                    x16_4 = x16_4 + x5_7 - 0x20
                                                    x12_2 += x5_7 - 0x28 + (x4_11 u>> 4)
                                                    x17_4 += (x4_11 & 0xf) + x5_7 - 0x28
                                                    x4_10 = zx.q(x3_5 + 2)
                                                case 3
                                                    x2_10 = x5_5 & 0x3f
                                        else
                                            void* x17_5 = x6_2 + arg1
                                            x12_2 = zx.d(*(arg1 + x4_10))
                                            x16_4 = zx.d(*(x17_5 + 2))
                                            x17_4 = zx.d(*(x17_5 + 3))
                                            x2_10 = 0
                                            x4_10 = zx.q(x3_5 + 4)
                                        
                                        uint8_t* x3_14 = &var_130 + ((zx.q((x16_4 & 0xff)
                                            + (zx.d(x16_4.b) << 2) + (x12_2 & 0xff)
                                            + (zx.d(x12_2.b) << 1) + x17_4 * 7 + x1_2 * 0xb) & 0x3f)
                                            << 2)
                                        *x3_14 = x12_2.b
                                        x3_14[1] = x16_4.b
                                        x3_14[2] = x17_4.b
                                        x3_14[3] = x1_2.b
                                        x3_5 = x4_10.d
                                
                                void* x4_9 = result + i
                                i += zx.q(x22_1)
                                *x4_9 = x12_2.b
                                *(x4_9 + 1) = x16_4.b
                                *(x4_9 + 2) = x17_4.b
                            while (i s< zx.q(x21_1))
                        else
                            int32_t x1 = 0
                            uint32_t x16_1 = 0
                            uint32_t x15_1 = 0
                            uint32_t x11_4 = 0
                            int32_t x2 = 0xe
                            uint32_t x17_1 = 0xff
                            
                            do
                                if (x1 s> 0)
                                    x1 -= 1
                                else if (x2 s>= arg2 - 8)
                                    x1 = 0
                                else
                                    int64_t x5_1 = sx.q(x2)
                                    uint32_t x4_1 = zx.d(*(arg1 + x5_1))
                                    uint64_t x3_1 = x5_1 + 1
                                    
                                    if (x4_1 == 0xfe)
                                        void* x16_2 = x5_1 + arg1
                                        x11_4 = zx.d(*(arg1 + x3_1))
                                        x15_1 = zx.d(*(x16_2 + 2))
                                        x16_1 = zx.d(*(x16_2 + 3))
                                        x1 = 0
                                        x3_1 = zx.q(x2 + 4)
                                    else if (x4_1 != 0xff)
                                        switch (x4_1 u>> 6)
                                            case 0
                                                char* x17_3 = &var_130 + (zx.q(x4_1) << 2)
                                                x11_4 = zx.d(*x17_3)
                                                x15_1 = zx.d(x17_3[1])
                                                x16_1 = zx.d(x17_3[2])
                                                x17_1 = zx.d(x17_3[3])
                                                x1 = 0
                                            case 1
                                                x1 = 0
                                                x11_4 = x11_4 + (x4_1 u>> 4 & 3) - 2
                                                x15_1 = x15_1 + (x4_1 u>> 2 & 3) - 2
                                                x16_1 = x16_1 + (x4_1 & 3) - 2
                                            case 2
                                                uint32_t x3_2 = zx.d(*(arg1 + x3_1))
                                                int32_t x4_3 = x4_1 & 0x3f
                                                x1 = 0
                                                x15_1 = x15_1 + x4_3 - 0x20
                                                x11_4 += x4_3 - 0x28 + (x3_2 u>> 4)
                                                x16_1 += (x3_2 & 0xf) + x4_3 - 0x28
                                                x3_1 = zx.q(x2 + 2)
                                            case 3
                                                x1 = x4_1 & 0x3f
                                    else
                                        void* x17_2 = x5_1 + arg1
                                        x11_4 = zx.d(*(arg1 + x3_1))
                                        x15_1 = zx.d(*(x17_2 + 2))
                                        x16_1 = zx.d(*(x17_2 + 3))
                                        x17_1 = zx.d(*(x17_2 + 4))
                                        x1 = 0
                                        x3_1 = zx.q(x2 + 5)
                                    
                                    uint8_t* x2_9 = &var_130 + ((zx.q((x15_1 & 0xff)
                                        + (zx.d(x15_1.b) << 2) + (x11_4 & 0xff)
                                        + (zx.d(x11_4.b) << 1) + x16_1 * 7 + x17_1 * 0xb) & 0x3f) << 2)
                                    *x2_9 = x11_4.b
                                    x2_9[1] = x15_1.b
                                    x2_9[2] = x16_1.b
                                    x2_9[3] = x17_1.b
                                    x2 = x3_1.d
                                
                                uint8_t* x3 = result + i
                                i += 4
                                *x3 = x11_4.b
                                x3[1] = x15_1.b
                                x3[2] = x16_1.b
                                x3[3] = x17_1.b
                            while (i s< zx.q(x21_1))

return result
