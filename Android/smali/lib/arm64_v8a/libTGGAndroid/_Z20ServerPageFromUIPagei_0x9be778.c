// 函数: _Z20ServerPageFromUIPagei
// 地址: 0x9be778
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = arg1 * 6
int32_t x8_1

if (x8 s< 0)
    x8_1 = x8 + 0x7f
else
    x8_1 = x8

return zx.q(x8_1 s>> 7)
