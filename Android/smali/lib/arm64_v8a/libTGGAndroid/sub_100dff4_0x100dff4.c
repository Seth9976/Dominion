// 函数: sub_100dff4
// 地址: 0x100dff4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 0xd)
    return 

int32_t x19_1 = arg2
int128_t* x20_1 = arg1

while (true)
    uint64_t x8_1 = zx.q(x19_1 - 1)
    int128_t* x10_1 = x20_1 + mulu.dp.d(x19_1 u>> 1, 0x14)
    int128_t v0
    v0.d = *(x20_1 + 4)
    int32_t v2 = *(x10_1 + 4)
    int32_t i = *(x20_1 + mulu.dp.d(x8_1.d, 0x14) + 4)
    
    if ((v0.d f>= v2 ? 1 : 0) == (v2 f< i ? 1 : 0))
        uint64_t x9_6
        
        if ((v0.d f>= i ? 1 : 0) != (v2 f< i ? 1 : 0))
            x9_6 = 0
        else
            x9_6 = x8_1
        
        int128_t* x9_7 = x20_1 + x9_6 * 0x14
        int32_t x11_3 = x9_7[1].d
        int128_t var_50_1 = *x9_7
        x9_7[1].d = x10_1[1].d
        *x9_7 = *x10_1
        x10_1[1].d = x11_3
        *x10_1 = var_50_1
    
    int32_t x9_9 = x20_1[1].d
    int128_t var_50_2 = *x20_1
    x20_1[1].d = x10_1[1].d
    *x20_1 = *x10_1
    x10_1[1].d = x9_9
    *x10_1 = var_50_2
    int64_t x10_2 = 1
    int32_t x11_6
    int64_t x12_1
    
    while (true)
        v0.d = *(x20_1 + 4)
        int64_t x13_1 = sx.q(x10_2.d)
        x11_6 = x10_2.d - 1
        x12_1 = (x13_1 + (sx.q(x10_2.d) << 2)) << 2
        x10_2 = x13_1
        
        do
            i = *(x20_1 + x12_1 + 4)
            x10_2 += 1
            x11_6 += 1
            x12_1 += 0x14
        while (i f< v0.d)
        
        void* x13_3 = x20_1 + 0x14 + muls.dp.d(x8_1.d, 0x14)
        
        do
            i = *(x13_3 - 0x10)
            x8_1 = zx.q(x8_1.d - 1)
            x13_3 -= 0x14
        while (v0.d f< i)
        
        if (x11_6 s>= x8_1.d + 1)
            break
        
        void* x11_7 = x20_1 + x12_1
        int32_t x12_2 = *(x11_7 - 4)
        int128_t var_50_3 = *(x11_7 - 0x14)
        v0 = *x13_3
        *(x11_7 - 4) = *(x13_3 + 0x10)
        *(x11_7 - 0x14) = v0
        *(x13_3 + 0x10) = x12_2
        *x13_3 = var_50_3
    
    x19_1 -= x11_6
    
    if (x19_1 s<= x8_1.d + 1)
        arg1, v0 = sub_100dff4(x20_1 + x12_1 - 0x14, zx.q(x19_1))
        x19_1 = x8_1.d + 1
        
        if (x19_1 s<= 0xc)
            break
    else
        arg1, v0 = sub_100dff4(x20_1, zx.q(x8_1.d + 1))
        x20_1 = x20_1 + x12_1 - 0x14
        
        if (x19_1 s<= 0xc)
            break
