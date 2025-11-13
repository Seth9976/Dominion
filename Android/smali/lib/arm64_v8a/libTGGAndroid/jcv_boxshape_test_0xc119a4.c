// 函数: jcv_boxshape_test
// 地址: 0xc119a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (not(arg2 f>= *(arg1 + 0x18)))
    return 0

if (not(arg2 f<= *(arg1 + 0x20)))
    return 0

if (arg3 f>= *(arg1 + 0x1c))
    return zx.q(arg3 f<= *(arg1 + 0x24) ? 1 : 0)

return 0
