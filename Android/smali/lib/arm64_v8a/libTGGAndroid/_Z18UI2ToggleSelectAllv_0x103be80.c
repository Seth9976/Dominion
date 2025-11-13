// 函数: _Z18UI2ToggleSelectAllv
// 地址: 0x103be80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gUI2Editor + 0x6000))
int32_t x10 = *(gUI2Editor + 0x704c)

if (x9.d s>= 1)
    int32_t x12_1
    int64_t i_5
    
    if (x9.d u>= 3)
        int64_t (* const x14_1)() = gUI2Editor
        i_5 = x9 & 0xfffffffe
        int32_t x12_2 = 0
        int32_t x13_1 = 0
        int64_t i_4 = i_5
        int64_t i
        
        do
            void* x16_1 = *x14_1
            void* x17_1 = *(x14_1 + 0x18)
            i = i_4
            i_4 -= 2
            x14_1 += 0x30
            x12_2 += zx.d(*(x16_1 + 0x16)) ^ 1
            x13_1 += zx.d(*(x17_1 + 0x16)) ^ 1
        while (i != 2)
        x12_1 = x13_1 + x12_2
        
        if (i_5 != x9)
            goto label_103bf10
    else
        i_5 = 0
        x12_1 = 0
    label_103bf10:
        int64_t i_3 = x9 - i_5
        int64_t* x11_1 = gUI2Editor + i_5 * 0x18
        int64_t i_1
        
        do
            void* x14_2 = *x11_1
            x11_1 = &x11_1[3]
            i_1 = i_3
            i_3 -= 1
            x12_1 += zx.d(*(x14_2 + 0x16)) ^ 1
        while (i_1 != 1)
    
    if (x10 == x12_1)
        *(gUI2Editor + 0x704c) = 0
        return memcpy(gUI2Editor + sx.q(*(gUI2Editor + 0x88060)) * 0x1020 + 0x6040, 
            gUI2Editor + 0x6048, 0x1018) __tailcall
    
    if (x9.d s>= 1)
        int64_t i_2 = 0
        int64_t (* const x14_6)() = gUI2Editor
        
        do
            void* x15_2 = *x14_6
            
            if (zx.d(*(x15_2 + 0x16)) == 0)
                int64_t x9_3 = sx.q(*(gUI2Editor + 0x704c))
                int32_t x15_3 = *(x15_2 + 0x1690)
                *(gUI2Editor + 0x704c) = x9_3.d + 1
                *(gUI2Editor + (x9_3 << 2) + 0x604c) = x15_3
                x9 = zx.q(*(gUI2Editor + 0x6000))
            
            i_2 += 1
            x14_6 += 0x18
        while (i_2 s< sx.q(x9.d))
else if (x10 == 0)
    *(gUI2Editor + 0x704c) = 0
    return memcpy(gUI2Editor + sx.q(*(gUI2Editor + 0x88060)) * 0x1020 + 0x6040, 
        gUI2Editor + 0x6048, 0x1018) __tailcall
