// 函数: sub_1062630
// 地址: 0x1062630
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *(arg1 + 0x10)

while (true)
    uint32_t x10_3 = zx.d(*x8)
    uint64_t x11_1 = zx.q(x10_3 - 9)
    
    if (x11_1.d u> 0x17)
        break
    
    switch (x11_1)
        case 1
            *(arg1 + 0x12c) += 1
            x10_3 = zx.d(*x8)
        case 2, 3, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 
                0x16
            break
    
    int32_t x13_2 = x10_3 & 0xe0
    int32_t x12_2 = x10_3 & 0xf0
    int32_t x11_2 = x10_3 & 0xf8
    
    if ((x10_3 & 0x80) != 0 && ((x11_2 != 0xf0 ? 1 : 0) & (x12_2 != 0xe0 ? 1 : 0)
            & (sx.d(x10_3.b) s< 0 ? 1 : 0) & (x13_2 != 0xc0 ? 1 : 0) & 1) == 0)
        if (x13_2 == 0xc0)
            x8 = &x8[1]
        else if (x12_2 == 0xe0)
            x8 = &x8[2]
        else if (x11_2 == 0xf0)
            x8 = &x8[3]
    
    x8 = &x8[1]
    *(arg1 + 0x10) = x8

uint64_t x8_1 = zx.q(*(arg1 + 8))

if (x8_1.d u> 4)
    return 0

switch (x8_1)
    case 0, 3
        return sub_1063260(arg1) __tailcall
    case 1
        int128_t* x0_3
        int128_t v0_2
        x0_3, v0_2 = XPooledCalloc(0x20)
        x0_3[1].q = 0
        *x0_3 = *(arg1 + 0x18)
        *(x0_3 + 0x18) = *(arg1 + 0x138)
        void* x8_4 = *(arg1 + 0x138)
        void* x8_5
        
        if (x8_4 == 0)
            x8_5 = arg1 + 0x130
        else
            x8_5 = x8_4 + 0x10
        
        *x8_5 = x0_3
        int32_t x8_6 = *(arg1 + 0x140)
        *(arg1 + 0x138) = x0_3
        *(arg1 + 0x140) = x8_6 + 1
        return sub_10634a8(arg1) __tailcall
    case 2
        return sub_10634a8(arg1) __tailcall
    case 4
        void* x0_6 = *(arg1 + 0x138)
        void* x8_9 = *(x0_6 + 0x18)
        *(arg1 + 0x138) = x8_9
        void* x8_10
        
        if (x8_9 == 0)
            x8_10 = arg1 + 0x130
        else
            x8_10 = x8_9 + 0x10
        
        *x8_10 = 0
        *(arg1 + 0x140) -= 1
        XPooledFree(x0_6, 0x20)
        return sub_1063260(arg1) __tailcall
