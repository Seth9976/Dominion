// 函数: _Z19Druid_SetupGenerateR14RandomizerDeckP11DomCardEnumi
// 地址: 0xa95340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_70
__builtin_memcpy(&var_70, 
    "\x31\x0d\x00\x00\x32\x0d\x00\x00\x33\x0d\x00\x00\x34\x0d\x00\x00\x35\x0d\x00\x00\x36\x0d\x00\x00\x"
"37\x0d\x00\x00\x38\x0d\x00\x00\x39\x0d\x00\x00\x3a\x0d\x00\x00\x3b\x0d\x00\x00\x3c\x0d\x00\x
        00", 
    0x30)
int32_t x23 = *arg2
int32_t i_5
int32_t x9_1

if (x23 == 0)
    i_5 = 0xc
    x9_1 = *(arg2 + 4)
    
    if (x9_1 != 0)
    label_a953f0:
        uint64_t i_3 = zx.q(i_5)
        int128_t* x8_1 = &var_70
        uint64_t i
        
        do
            if (*x8_1 == x9_1)
                i_5 -= 1
                *x8_1 = *(&var_70 + (zx.q(i_5) << 2))
                break
            
            i = i_3
            i_3 -= 1
            x8_1 += 4
        while (i != 1)
        x23 += 1
else
    int64_t i_1
    
    if (x23 != 0xd31)
        i_1 = 0
        
        while (i_1 != 0xb)
            int32_t x10_1 = *((&var_70 | 4) + (i_1 << 2))
            i_1 += 1
            
            if (x10_1 == x23)
                goto label_a953c8
        
        x23 = 1
        i_5 = 0xc
        x9_1 = *(arg2 + 4)
        
        if (x9_1 != 0)
            goto label_a953f0
    else
        i_1 = 0
    label_a953c8:
        x23 = 1
        i_5 = 0xb
        *(&var_70 + (zx.q(i_1.d) << 2)) = 0xd3c
        x9_1 = *(arg2 + 4)
        
        if (x9_1 != 0)
            goto label_a953f0
int32_t x9_4 = *(arg2 + 8)

if (x9_4 != 0)
    uint64_t i_4 = zx.q(i_5)
    int128_t* x8_2 = &var_70
    uint64_t i_2
    
    do
        if (*x8_2 == x9_4)
            i_5 -= 1
            *x8_2 = *(&var_70 + (zx.q(i_5) << 2))
            break
        
        i_2 = i_4
        i_4 -= 1
        x8_2 += 4
    while (i_2 != 1)
    x23 += 1

ShuffleIntsN(PregameRNG(), &var_70, i_5, arg3 - x23)

if (arg3 s> x23)
    int64_t x8_3 = zx.q(x23) << 0x20 s>> 0x1e
    memcpy(arg2 + x8_3, &var_70 + x8_3, (zx.q(not.d(x23) + arg3) << 2) + 4)

return zx.q(arg3)
