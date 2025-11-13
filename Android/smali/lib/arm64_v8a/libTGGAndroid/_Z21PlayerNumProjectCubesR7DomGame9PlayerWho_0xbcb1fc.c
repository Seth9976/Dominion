// 函数: _Z21PlayerNumProjectCubesR7DomGame9PlayerWho
// 地址: 0xbcb1fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(arg1 + 0x19ac))

if (x9.d s< 1)
    return 0

int32_t x8
int64_t i_4

if (x9.d u>= 3)
    i_4 = x9 & 0xfffffffe
    int32_t x8_1 = 0
    int32_t x11_1 = 0
    void* __offset(DomGame, 0x15f88) x12_1 = arg1 + 0x15f88
    int64_t i_3 = i_4
    int64_t i
    
    do
        int32_t x14_3 = *(x12_1 - 0x1c)
        int32_t entry_x15
        
        if (x14_3 == arg2)
            entry_x15 = *(x12_1 - 0x20)
        
        int32_t x16_1 = *(x12_1 + 4)
        int32_t entry_x17
        
        if (x16_1 == arg2)
            entry_x17 = *x12_1
        
        int32_t x15 = entry_x15 == 0xe01 ? 1 : 0
        int32_t x14_5 = x15 & (x14_3 == arg2 ? 1 : 0)
        int32_t x17 = entry_x17 == 0xe01 ? 1 : 0
        
        if (x14_5 == 1)
            x15 = *(x12_1 - 0x18)
        
        int32_t x16_3 = x17 & (x16_1 == arg2 ? 1 : 0)
        
        if (x16_3 != 0)
            x17 = *(x12_1 + 8)
        
        int32_t x3_3 = x17 == 0x3f1 ? 1 : 0
        int32_t x2_1
        int32_t x3_1
        
        if ((((x15 != 0x3f1 ? 1 : 0) | (x14_5 ^ 1)) & 1) != 0)
            x2_1 = 0
            x3_1 = x3_3 & x16_3
            
            if (x3_1 != 0)
                x3_1 = *(x12_1 + 0x14)
        else
            x2_1 = *(x12_1 - 0xc)
            x3_1 = x3_3 & x16_3
            
            if (x3_1 != 0)
                x3_1 = *(x12_1 + 0x14)
        
        entry_x17 = x17 != 0x3f1 ? 1 : 0
        entry_x15 = x15 != 0x3f1 ? 1 : 0
        int32_t x14_1
        
        if ((x14_5 & entry_x15) != 0)
            x14_1 = 0
        else
            x14_1 = x2_1
        
        x8_1 += x14_1
        int32_t x14_2
        
        if ((x16_3 & entry_x17) != 0)
            x14_2 = 0
        else
            x14_2 = x3_1
        
        i = i_3
        i_3 -= 2
        x11_1 += x14_2
        x12_1 += 0x40
    while (i != 2)
    x8 = x11_1 + x8_1
    
    if (i_4 != x9)
        goto label_bcb334
else
    i_4 = 0
    x8 = 0
label_bcb334:
    void* x11_3 = arg1 + (i_4 << 5) + 0x15f68
    int64_t i_2 = x9 - i_4
    int64_t i_1
    
    do
        if (*(x11_3 + 4) == arg2 && *x11_3 == 0xe01 && *(x11_3 + 8) == 0x3f1)
            x8 += *(x11_3 + 0x14)
        
        i_1 = i_2
        i_2 -= 1
        x11_3 += 0x20
    while (i_1 != 1)
return zx.q(x8)
