// 函数: sub_11028c4
// 地址: 0x11028c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()

if (arg2 != 0xfffffffd && arg2 u>= 0xfffffffd)
    return 1

if (arg2 u> 0x5f)
    return 0

if (arg2 != 0x22)
    return zx.q((arg2 & 0xffffffe0) != 0x20 ? 1 : 0)

return 1
