// 函数: sub_10634a8
// 地址: 0x10634a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *(arg1 + 0x10)
uint32_t x9 = zx.d(*x8)

if (x9 == 0x2f)
    void* x8_2 = &x8[1]
    *(arg1 + 0x10) = x8_2
    
    while (true)
        uint32_t x10_10 = zx.d(*x8_2)
        uint64_t x11_2 = zx.q(x10_10 - 9)
        
        if (x11_2.d u> 0x17)
            if (x10_10 != 0x3e)
                break
            
            *(arg1 + 0x10) = x8_2 + 1
            *(arg1 + 8) = 4
            return 1
        
        switch (x11_2)
            case 1
                *(arg1 + 0x12c) += 1
                x10_10 = zx.d(*x8_2)
            case 2, 3, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                    0x15, 0x16
                break
        
        int32_t x13_3 = x10_10 & 0xe0
        int32_t x12_3 = x10_10 & 0xf0
        int32_t x11_3 = x10_10 & 0xf8
        
        if ((x10_10 & 0x80) != 0 && ((x11_3 != 0xf0 ? 1 : 0) & (x12_3 != 0xe0 ? 1 : 0)
                & (sx.d(x10_10.b) s< 0 ? 1 : 0) & (x13_3 != 0xc0 ? 1 : 0) & 1) == 0)
            if (x13_3 == 0xc0)
                x8_2 += 1
            else if (x12_3 == 0xe0)
                x8_2 += 2
            else if (x11_3 == 0xf0)
                x8_2 += 3
        
        x8_2 += 1
        *(arg1 + 0x10) = x8_2
else if (x9 != 0x3e)
    if ((sub_10636e8(arg1) & 1) != 0)
        *(arg1 + 8) = 2
        return 1
else
    void* x8_1 = &x8[1]
    void* x9_1 = x8_1
    *(arg1 + 0x10) = x8_1
    *(arg1 + 0x18) = x8_1
    
    while (true)
        uint32_t x10_3 = zx.d(*x9_1)
        
        if (x10_3 == 0xa)
            *(arg1 + 0x12c) += 1
            x10_3 = zx.d(*x9_1)
        else if (x10_3 == 0 || x10_3 == 0x3c)
            int32_t i_1 = x9_1.d - x8_1.d
            *(arg1 + 0x20) = i_1
            
            if (i_1 s>= 1)
                int32_t i
                
                do
                    uint64_t x12_4 = zx.q(*x8_1)
                    
                    if (x12_4.d u> 0x20 || (1 << x12_4 & 0x100002600) == 0)
                        *(arg1 + 8) = 3
                        return 1
                    
                    i = i_1
                    i_1 -= 1
                    x8_1 += 1
                while (i != 1)
            
            return sub_1063260(arg1) __tailcall
        
        int32_t x13_1 = x10_3 & 0xe0
        int32_t x12_1 = x10_3 & 0xf0
        int32_t x11_1 = x10_3 & 0xf8
        
        if ((x10_3 & 0x80) != 0 && ((x11_1 != 0xf0 ? 1 : 0) & (x12_1 != 0xe0 ? 1 : 0)
                & (sx.d(x10_3.b) s< 0 ? 1 : 0) & (x13_1 != 0xc0 ? 1 : 0) & 1) == 0)
            if (x13_1 == 0xc0)
                x9_1 += 1
            else if (x12_1 == 0xe0)
                x9_1 += 2
            else if (x11_1 == 0xf0)
                x9_1 += 3
        
        x9_1 += 1
        *(arg1 + 0x10) = x9_1

return 0
