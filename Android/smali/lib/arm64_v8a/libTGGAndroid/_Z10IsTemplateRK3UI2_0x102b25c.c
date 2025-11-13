// 函数: _Z10IsTemplateRK3UI2
// 地址: 0x102b25c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8_1

do
    x8_1 = zx.d(*(arg1 + 5))
    
    if (x8_1 != 0)
        break
    
    arg1 = *(arg1 + 0x17d0)
while (arg1 != 0)

return zx.q(x8_1 != 0 ? 1 : 0)
