// 函数: _Z11RectICenterR5RectI
// 地址: 0xfa2248
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 8) + *arg1
int32_t x9 = *(arg1 + 0xc) + *(arg1 + 4)
int32_t x8_1

if (x8 s< 0)
    x8_1 = x8 + 1
else
    x8_1 = x8

int32_t x8_2

if (x9 s< 0)
    x8_2 = x9 + 1
else
    x8_2 = x9

return zx.q(x8_1 s>> 1) | zx.q(x8_2 s>> 1) << 0x20
