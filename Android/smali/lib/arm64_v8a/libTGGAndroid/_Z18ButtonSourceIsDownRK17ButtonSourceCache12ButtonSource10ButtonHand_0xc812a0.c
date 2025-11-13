// 函数: _Z18ButtonSourceIsDownRK17ButtonSourceCache12ButtonSource10ButtonHand
// 地址: 0xc812a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8_4

if (arg2 s< 0x24)
    uint64_t x10_1 = zx.q(arg2)
    x8_4 = zx.d(*(arg1 + x10_1))
    
    if (arg2 u<= 6 && (1 << arg2 & 0x43) != 0)
        return zx.q(*(arg1 + x10_1 + 0x24)) << 8 | zx.q(x8_4)
else
    void* x8 = arg1 + sx.q(arg2)
    void* x8_2
    
    if (arg3 == 0)
        x8_2 = x8 + 0x24
    else
        x8_2 = x8 + 0x2c
    
    x8_4 = zx.d(*x8_2)

return zx.q(x8_4)
