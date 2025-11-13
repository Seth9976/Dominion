// 函数: _Z14CardsetUnknown8Languageii
// 地址: 0xc0b9f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_18
int32_t x9

if (arg3 s< 1)
    x9 = 0
else
    int64_t x11_1 = sx.q(arg2)
    uint64_t x10_1 = zx.q(arg3)
    int64_t x8_1 = *(gLog + 0x28)
    int64_t i_4
    
    if (arg3 u> 8)
        int64_t x9_2
        
        if ((x10_1 & 7) == 0)
            x9_2 = 8
        else
            x9_2 = x10_1 & 7
        
        i_4 = x10_1 - x9_2
        uint128_t v0
        v0.q = 0
        v0:8.q = 0
        int32_t* x9_3 = x8_1 + (x11_1 << 3) + 0x24
        int64_t i_3 = i_4
        int128_t v1
        v1.q = 0
        v1:8.q = 0
        int64_t i
        
        do
            int128_t v2
            v2.d = *x9_3
            int128_t v3
            v3.d = x9_3[1]
            v2:4.d = x9_3[2]
            v3:4.d = x9_3[3]
            v2:8.d = x9_3[4]
            v3:8.d = x9_3[5]
            v2:0xc.d = x9_3[6]
            v3:0xc.d = x9_3[7]
            int128_t v4
            v4.d = *(x9_3 - 0x20)
            int128_t v5
            v5.d = *(x9_3 - 0x1c)
            v4:4.d = *(x9_3 - 0x18)
            v5:4.d = *(x9_3 - 0x14)
            v4:8.d = *(x9_3 - 0x10)
            v5:8.d = *(x9_3 - 0xc)
            v4:0xc.d = *(x9_3 - 8)
            v5:0xc.d = *(x9_3 - 4)
            i = i_3
            i_3 -= 8
            x9_3 = &x9_3[0x10]
            v1 += v2
            v0 += v4
        while (i != 8)
        v0.d = vaddvq_u32(v1 + v0)
        x9 = v0.d
    else
        i_4 = 0
        x9 = 0
    
    int32_t* x8_3 = x8_1 + ((i_4 + x11_1) << 3) + 4
    int64_t i_2 = x10_1 - i_4
    int64_t i_1
    
    do
        int32_t x11_3 = *x8_3
        x8_3 = &x8_3[2]
        i_1 = i_2
        i_2 -= 1
        x9 += x11_3
    while (i_1 != 1)
    
    if (arg1.d != 0x11 && x9 == 1)
        var_18 = 3
        return GetNResLikes(arg1, &var_18, 1, 0, 2)

XStringFromInt(x9)
DoTranslateWithReplacement("dom_log_n_cards", "[N]", &var_18)
return XString::~XString()
