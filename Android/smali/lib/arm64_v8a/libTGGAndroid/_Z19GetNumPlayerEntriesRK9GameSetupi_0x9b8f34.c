// 函数: _Z19GetNumPlayerEntriesRK9GameSetupi
// 地址: 0x9b8f34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 0

uint64_t x9 = zx.q(arg2)
int32_t x8
int64_t i_4

if (arg2 != 1)
    i_4 = x9 & 0xfffffffe
    int32_t x8_1 = 0
    int32_t x11_1 = 0
    int64_t i_3 = i_4
    GameSetup const& x13_1 = arg1
    int64_t i
    
    do
        int32_t x14_1 = *(x13_1 + 0x60)
        int32_t x15_1 = *(x13_1 + 0x28c)
        x13_1 += 0x458
        
        if (x14_1 != 0)
            x8_1 += 1
        
        if (x15_1 != 0)
            x11_1 += 1
        
        i = i_3
        i_3 -= 2
    while (i != 2)
    x8 = x11_1 + x8_1
    
    if (i_4 != x9)
        goto label_9b8fa8
else
    i_4 = 0
    x8 = 0
label_9b8fa8:
    int32_t* x11_3 = arg1 + i_4 * 0x22c + 0x60
    int64_t i_2 = x9 - i_4
    int64_t i_1
    
    do
        int32_t x10 = *x11_3
        x11_3 = &x11_3[0x8b]
        
        if (x10 != 0)
            x8 += 1
        
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
return zx.q(x8)
