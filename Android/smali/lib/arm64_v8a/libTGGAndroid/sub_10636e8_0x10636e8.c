// 函数: sub_10636e8
// 地址: 0x10636e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* s2_1 = *(arg1 + 0x10)
char* s2 = s2_1
*(arg1 + 0x18) = s2_1

while (true)
    uint64_t x8_4 = zx.q(*s2)
    
    if (x8_4.d u<= 0x3e)
        if (x8_4 == 0xa)
            *(arg1 + 0x12c) += 1
            x8_4 = zx.q(*s2)
        else if (x8_4 == 0x26)
            void* x8_1 = &s2[1]
            *(arg1 + 0x10) = x8_1
            uint32_t x9_1 = zx.d(s2[1])
            
            if (x9_1 == 0xa)
                *(arg1 + 0x12c) += 1
                x9_1 = zx.d(*x8_1)
            
            int32_t x12_1 = x9_1 & 0xe0
            int32_t x11_1 = x9_1 & 0xf0
            int32_t x10_1 = x9_1 & 0xf8
            
            if ((x9_1 & 0x80) != 0 && ((x10_1 != 0xf0 ? 1 : 0) & (x11_1 != 0xe0 ? 1 : 0)
                    & (sx.d(x9_1.b) s< 0 ? 1 : 0) & (x12_1 != 0xc0 ? 1 : 0) & 1) == 0)
                if (x12_1 == 0xc0)
                    x8_1 = &s2[2]
                else if (x11_1 == 0xe0)
                    x8_1 = &s2[3]
                else if (x10_1 == 0xf0)
                    x8_1 = &s2[4]
            
            s2 = x8_1 + 1
            *(arg1 + 0x10) = s2
            
            if (strncasecmp("amp;", s2, 4) == 0)
                continue
            else if (strncasecmp("lt;", s2, 3) == 0)
                continue
            else if (strncasecmp("gt;", s2, 3) == 0)
                continue
            else
                if (strncasecmp("quot;", s2, 5) != 0)
                    break
                
                continue
        else if ((1 << x8_4 & 0x7000000500000201) != 0)
            *(arg1 + 0x20) = s2.d - s2_1.d
            return zx.q(s2.d != s2_1.d ? 1 : 0)
    
    int32_t x11_2 = x8_4.d & 0xe0
    int32_t x10_2 = x8_4.d & 0xf0
    int32_t x9_8 = x8_4.d & 0xf8
    
    if ((x8_4.d & 0x80) != 0 && ((x9_8 != 0xf0 ? 1 : 0) & (x10_2 != 0xe0 ? 1 : 0)
            & (sx.d((x8_4.d).b) s< 0 ? 1 : 0) & (x11_2 != 0xc0 ? 1 : 0) & 1) == 0)
        if (x11_2 == 0xc0)
            s2 = &s2[1]
        else if (x10_2 == 0xe0)
            s2 = &s2[2]
        else if (x9_8 == 0xf0)
            s2 = &s2[3]
    
    s2 = &s2[1]
    *(arg1 + 0x10) = s2

return 0
