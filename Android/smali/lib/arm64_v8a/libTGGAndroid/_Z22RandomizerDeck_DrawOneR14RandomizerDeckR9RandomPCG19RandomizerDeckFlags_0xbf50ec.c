// 函数: _Z22RandomizerDeck_DrawOneR14RandomizerDeckR9RandomPCG19RandomizerDeckFlags
// 地址: 0xbf50ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0xc80)
int32_t x0_2
int32_t x8_1
void* x9
void* x10_2

if (x8 == 0)
    int32_t x8_2
    
    if ((arg3 & 1) != 0)
        x8_2 = *(arg1 + 0x2588)
    
    if ((arg3 & 1) == 0 || x8_2 == 0)
        int32_t x8_3 = *(arg1 + 0x1904)
        
        if (x8_3 == 0)
            return zx.q(x8_3) << 0x20
        
        x9 = arg1 + 0xc84 + (sx.q(RandomInt(arg2, x8_3)) << 2)
        x8_1 = *x9
        int64_t x10_6 = sx.q(*(arg1 + 0x1904)) - 1
        *(arg1 + 0x1904) = x10_6.d
        x10_2 = arg1 + 0xc84 + (x10_6 << 2)
        x0_2 = 2
    else
        x9 = arg1 + 0x1908 + (sx.q(RandomInt(arg2, x8_2)) << 2)
        x8_1 = *x9
        int64_t x10_4 = sx.q(*(arg1 + 0x2588)) - 1
        *(arg1 + 0x2588) = x10_4.d
        x10_2 = arg1 + 0x1908 + (x10_4 << 2)
        x0_2 = 3
else
    x9 = arg1 + (sx.q(RandomInt(arg2, x8)) << 2)
    x8_1 = *x9
    x0_2 = 1
    int64_t x10_1 = sx.q(*(arg1 + 0xc80)) - 1
    *(arg1 + 0xc80) = x10_1.d
    x10_2 = arg1 + (x10_1 << 2)

*x9 = *x10_2
return zx.q(x0_2) | zx.q(x8_1) << 0x20
