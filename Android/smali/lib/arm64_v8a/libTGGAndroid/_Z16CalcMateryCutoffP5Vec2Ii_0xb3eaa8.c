// 函数: _Z16CalcMateryCutoffP5Vec2Ii
// 地址: 0xb3eaa8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s>= 1)
    uint64_t i_3 = zx.q(arg2)
    int64_t i_6
    int32_t x10_1
    
    if (arg2 u> 8)
        int64_t x9_2
        
        if ((i_3 & 7) == 0)
            x9_2 = 8
        else
            x9_2 = i_3 & 7
        
        i_6 = i_3 - x9_2
        void* __offset(Vec2I, 0x24) x10_2 = arg1 + 0x24
        int128_t v0
        v0.q = 0
        v0:8.q = 0
        int64_t i_5 = i_6
        int128_t v1
        v1.q = 0
        v1:8.q = 0
        int64_t i
        
        do
            int128_t v2
            v2.d = *x10_2
            int128_t v3
            v3.d = *(x10_2 + 4)
            v2:4.d = *(x10_2 + 8)
            v3:4.d = *(x10_2 + 0xc)
            v2:8.d = *(x10_2 + 0x10)
            v3:8.d = *(x10_2 + 0x14)
            v2:0xc.d = *(x10_2 + 0x18)
            v3:0xc.d = *(x10_2 + 0x1c)
            int128_t v4
            v4.d = *(x10_2 - 0x20)
            int128_t v5
            v5.d = *(x10_2 - 0x1c)
            v4:4.d = *(x10_2 - 0x18)
            v5:4.d = *(x10_2 - 0x14)
            v4:8.d = *(x10_2 - 0x10)
            v5:8.d = *(x10_2 - 0xc)
            v4:0xc.d = *(x10_2 - 8)
            v5:0xc.d = *(x10_2 - 4)
            i = i_5
            i_5 -= 8
            x10_2 += 0x40
            v1 += v2
            v0 += v4
        while (i != 8)
        uint128_t v0_1
        v0_1.d = vaddvq_u32(v1 + v0)
        x10_1 = v0_1.d
    else
        i_6 = 0
        x10_1 = 0
    
    void* x11_2 = arg1 + (i_6 << 3) + 4
    int64_t i_4 = i_3 - i_6
    int64_t i_1
    
    do
        int32_t x12_2 = *x11_2
        x11_2 += 8
        i_1 = i_4
        i_4 -= 1
        x10_1 += x12_2
    while (i_1 != 1)
    
    if (arg2 s>= 1)
        int32_t x9_3 = 0
        void* __offset(Vec2I, 0x4) x10_5 = arg1 + 4
        uint64_t i_2
        
        do
            x9_3 += *x10_5
            
            if (x9_3 s>= x10_1 s/ 0xa)
                return zx.q(*(x10_5 - 4))
            
            i_2 = i_3
            i_3 -= 1
            x10_5 += 8
        while (i_2 != 1)

return 0
