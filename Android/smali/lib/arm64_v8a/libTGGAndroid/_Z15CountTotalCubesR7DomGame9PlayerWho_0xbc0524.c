// 函数: _Z15CountTotalCubesR7DomGame9PlayerWho
// 地址: 0xbc0524
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
        int32_t x14_4 = *(x12_1 - 0x20)
        int32_t entry_x15
        
        if (x14_4 == 0xe01)
            entry_x15 = *(x12_1 - 0x1c)
        
        int32_t x17_2 = *x12_1
        int32_t entry_x16
        
        if (x17_2 == 0xe01)
            entry_x16 = *(x12_1 + 4)
        
        entry_x15 = entry_x15 == arg2 ? 1 : 0
        entry_x16 = entry_x16 == arg2 ? 1 : 0
        x8_1 += (x14_4 == 0xe01 ? 1 : 0) & entry_x15
        i = i_3
        i_3 -= 2
        x11_1 += (x17_2 == 0xe01 ? 1 : 0) & entry_x16
        x12_1 += 0x40
    while (i != 2)
    x8 = x11_1 + x8_1
    
    if (i_4 != x9)
        goto label_bc05ec
else
    i_4 = 0
    x8 = 0
label_bc05ec:
    void* x11_3 = arg1 + (i_4 << 5) + 0x15f6c
    int64_t i_2 = x9 - i_4
    int64_t i_1
    
    do
        if (*(x11_3 - 4) == 0xe01 && *x11_3 == arg2)
            x8 += 1
        
        i_1 = i_2
        i_2 -= 1
        x11_3 += 0x20
    while (i_1 != 1)
return zx.q(x8)
