// 函数: _Z24AndroidButtonFromKeyCodei
// 地址: 0x1067790
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 - 0x13 u< 4)
    return zx.q(*(&data_71bbf0 + (sx.q(arg1 - 0x13) << 2)))

if (arg1 - 0x60 u<= 0xe)
    return zx.q(*(&data_8698cc + (zx.q(arg1 - 0x60) << 2)))

return 0
