// 函数: _Z19IsJapaneseCharacteri
// 地址: 0xf6cd6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 - 0xff00 u>= 0xf0 && arg1 - 0x30a0 u>= 0x60 && (arg1 & 0xffffffc0) != 0x3000
        && arg1 - 0x3040 u>= 0x60)
    return zx.q((arg1 - 0x4e00) u>> 4 u< 0x51b ? 1 : 0)

return 1
