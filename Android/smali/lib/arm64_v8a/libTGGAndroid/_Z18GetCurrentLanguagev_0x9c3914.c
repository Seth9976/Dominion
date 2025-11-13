// 函数: _Z18GetCurrentLanguagev
// 地址: 0x9c3914
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(GetLocalSettings() + 0x10) != 0)
    return zx.q(*(GetLocalSettings() + 0x10))

int64_t var_8 = 0
XLocale(&var_8, 8)

if (zx.d(var_8.w) == 0x7266)
    return 3

if (zx.d(var_8.w) == 0x6564)
    return 2

if (zx.d(var_8.w) == 0x706a)
    return 0x10

return 1
