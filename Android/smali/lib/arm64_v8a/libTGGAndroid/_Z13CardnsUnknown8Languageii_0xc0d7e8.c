// 函数: _Z13CardnsUnknown8Languageii
// 地址: 0xc0d7e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s>= 1)
    int64_t x11_1 = sx.q(arg2)
    uint64_t x10_1 = zx.q(arg3)
    int64_t x9_1 = *(gLog + 0x28)
    int32_t x1
    int64_t i_4
    
    if (arg3 u> 8)
        int64_t x12_2
        
        if ((x10_1 & 7) == 0)
            x12_2 = 8
        else
            x12_2 = x10_1 & 7
        
        i_4 = x10_1 - x12_2
        int128_t v0
        v0.q = 0
        v0:8.q = 0
        int32_t* x13_1 = x9_1 + (x11_1 << 3) + 0x24
        int64_t i_3 = i_4
        int128_t v1
        v1.q = 0
        v1:8.q = 0
        int64_t i
        
        do
            int128_t v2
            v2.d = *x13_1
            int128_t v3
            v3.d = x13_1[1]
            v2:4.d = x13_1[2]
            v3:4.d = x13_1[3]
            v2:8.d = x13_1[4]
            v3:8.d = x13_1[5]
            v2:0xc.d = x13_1[6]
            v3:0xc.d = x13_1[7]
            int128_t v4
            v4.d = *(x13_1 - 0x20)
            int128_t v5
            v5.d = *(x13_1 - 0x1c)
            v4:4.d = *(x13_1 - 0x18)
            v5:4.d = *(x13_1 - 0x14)
            v4:8.d = *(x13_1 - 0x10)
            v5:8.d = *(x13_1 - 0xc)
            v4:0xc.d = *(x13_1 - 8)
            v5:0xc.d = *(x13_1 - 4)
            i = i_3
            i_3 -= 8
            x13_1 = &x13_1[0x10]
            v1 += v2
            v0 += v4
        while (i != 8)
        uint128_t v0_1
        v0_1.d = vaddvq_u32(v1 + v0)
        x1 = v0_1.d
    else
        i_4 = 0
        x1 = 0
    
    int32_t* x9_3 = x9_1 + ((i_4 + x11_1) << 3) + 4
    int64_t i_2 = x10_1 - i_4
    int64_t i_1
    
    do
        int32_t x11_3 = *x9_3
        x9_3 = &x9_3[2]
        i_1 = i_2
        i_2 -= 1
        x1 += x11_3
    while (i_1 != 1)
    char* entry_x8
    
    if (x1 == 1)
        return XString::XString(entry_x8) __tailcall

return XFormatString("%d cards") __tailcall
