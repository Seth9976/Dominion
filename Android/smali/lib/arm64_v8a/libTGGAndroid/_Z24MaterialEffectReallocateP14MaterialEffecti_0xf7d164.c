// 函数: _Z24MaterialEffectReallocateP14MaterialEffecti
// 地址: 0xf7d164
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1

if (x8 == arg2)
    return 

if (x8 s>= 1)
    int64_t x21_1 = 0
    int64_t x22_1 = 0
    int64_t x8_1
    
    do
        int64_t* x25_1 = *(arg1 + 8) + x21_1
        
        if (x25_1[0x32b].d != 0)
            (*(**gGraphicsInterface + 0xa8))()
            x25_1[0x32b].d = 0
        
        x25_1[0x194].d = 0
        x25_1[0xcb].d = 0
        x25_1[0xca] = 0
        x25_1[1].d = 0
        *x25_1 = 0
        x8_1 = sx.q(*arg1)
        x22_1 += 1
        x21_1 += 0x1a20
    while (x22_1 s< x8_1)
    
    if (x8_1.d s> 0)
        XPooledFree(*(arg1 + 8), x8_1.d * 0x1a20)
        *(arg1 + 8) = 0
        *arg1 = 0

if (arg2 s< 1)
    *(arg1 + 8) = 0
else
    *(arg1 + 8) = XPooledCalloc(arg2 * 0x1a20)

*arg1 = arg2
