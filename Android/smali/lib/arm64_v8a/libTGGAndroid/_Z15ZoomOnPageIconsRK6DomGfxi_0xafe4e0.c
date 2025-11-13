// 函数: _Z15ZoomOnPageIconsRK6DomGfxi
// 地址: 0xafe4e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x2c) != 2)
    return 0

int32_t x8 = *(arg1 + 0x3c4)
int32_t x9_1 = arg2 * 0x3f
return zx.q(x8 s>= x9_1 ? 1 : 0) & zx.q(x8 s< x9_1 + 0x3f ? 1 : 0)
